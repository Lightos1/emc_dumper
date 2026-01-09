#define TESLA_INIT_IMPL
#include <tesla.hpp>
#include <dirent.h>

#define APP_VERSION "1.0.0"
#define DUMP_STR "Dump mode is "
#define FLAG_FILE_EMC "sdmc:/config/dumptoggler/enable_emc.flag"
#define FLAG_FILE_PCV "sdmc:/config/dumptoggler/enable_pcv.flag"

char dumpStr[24] = DUMP_STR "???";
char pcvStr[24] = "PCV Dump is ???";

class DumpMenu : public tsl::Gui {
public:
    DumpMenu(u8 arg1, u8 arg2, bool arg3) {}
    bool dumped = false;
    bool pcvEnabled = false;

    virtual tsl::elm::Element *createUI() override {
        // Check EMC flag
        FILE* fEmc = fopen(FLAG_FILE_EMC, "r");
        if (fEmc) {
            fclose(fEmc);
            this->dumped = true;
        }

        // Check PCV flag
        FILE* fPcv = fopen(FLAG_FILE_PCV, "r");
        if (fPcv) {
            fclose(fPcv);
            this->pcvEnabled = true;
        }

        auto frame = new tsl::elm::OverlayFrame("DumpToggler", APP_VERSION);
        auto list = new tsl::elm::List();

        // Display EMC status
        list->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
            renderer->drawString(dumpStr, false, x, y+50, 20, renderer->a(0xFFFF));
        }), 150);

        // EMC toggle
        auto *emcItem = new tsl::elm::ListItem("Toggle EMC dump");
        emcItem->setClickListener([this](u64 keys) {
            if (keys & HidNpadButton_A) {
                this->dumped = !this->dumped;

                FsFileSystem* sdmc = fsdevGetDeviceFileSystem("sdmc");
                if (sdmc) {
                    fsFsCreateDirectory(sdmc, "/config");
                    fsFsCreateDirectory(sdmc, "/config/dumptoggler");
                }

                if (this->dumped) {
                    FILE* f = fopen(FLAG_FILE_EMC, "w");
                    if (f) {
                        fprintf(f, "1");
                        fclose(f);
                    }
                } else {
                    remove(FLAG_FILE_EMC);
                }

                return true;
            }
            return false;
        });
        list->addItem(emcItem);

        // Display PCV status
        list->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
            renderer->drawString(pcvStr, false, x, y+50, 20, renderer->a(0xFFFF));
        }), 150);

        // PCV toggle
        auto *pcvItem = new tsl::elm::ListItem("Toggle PCV dump");
        pcvItem->setClickListener([this](u64 keys) {
            if (keys & HidNpadButton_A) {
                this->pcvEnabled = !this->pcvEnabled;

                FsFileSystem* sdmc = fsdevGetDeviceFileSystem("sdmc");
                if (sdmc) {
                    fsFsCreateDirectory(sdmc, "/config");
                    fsFsCreateDirectory(sdmc, "/config/dumptoggler");
                }

                if (this->pcvEnabled) {
                    FILE* f = fopen(FLAG_FILE_PCV, "w");
                    if (f) {
                        fprintf(f, "1");
                        fclose(f);
                    }
                } else {
                    remove(FLAG_FILE_PCV);
                }

                return true;
            }
            return false;
        });
        list->addItem(pcvItem);

        frame->setContent(list);
        return frame;
    }

    virtual void update() override {
        sprintf(dumpStr, "%s%s", DUMP_STR, dumped ? "enabled" : "disabled");
        sprintf(pcvStr, "PCV Dump is %s", pcvEnabled ? "enabled" : "disabled");
    }

    virtual bool handleInput(u64 keysDown, u64 keysHeld, const HidTouchState &touchPos, HidAnalogStickState joyStickPosLeft, HidAnalogStickState joyStickPosRight) override {
        if (keysDown & HidNpadButton_B) {
            tsl::goBack();
            return true;
        }
        return false;
    }
};

class EmcDumperOverlay : public tsl::Overlay {
public:
    virtual void initServices() override {}
    virtual void exitServices() override {}
    virtual void onShow() override {}
    virtual void onHide() override {}

    virtual std::unique_ptr<tsl::Gui> loadInitialGui() override {
        return initially<DumpMenu>(1, 2, true);
    }
};

int main(int argc, char **argv) {
    return tsl::loop<EmcDumperOverlay>(argc, argv);
}
