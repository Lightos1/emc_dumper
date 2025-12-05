#define TESLA_INIT_IMPL
#include <tesla.hpp>
#include <dirent.h>

#define APP_VERSION "1.0.0"
#define DUMP_STR "Dump mode is "
#define FLAG_FILE "sdmc:/config/dumptoggler/enable.flag"

char dumpStr[24] = DUMP_STR "???";

class DumpMenu : public tsl::Gui {
public:
    DumpMenu(u8 arg1, u8 arg2, bool arg3) {}
    bool dumped = false;

    virtual tsl::elm::Element *createUI() override {
        FILE* f = fopen(FLAG_FILE, "r");
        if (f) {
            fclose(f);
            this->dumped = true;
        }

        auto frame = new tsl::elm::OverlayFrame("DumpToggler", APP_VERSION);
        auto list = new tsl::elm::List();

        list->addItem(new tsl::elm::CustomDrawer([](tsl::gfx::Renderer *renderer, s32 x, s32 y, s32 w, s32 h) {
            renderer->drawString(dumpStr, false, x, y+50, 20, renderer->a(0xFFFF));
        }), 150);

        auto *clickableListItem = new tsl::elm::ListItem("Toggle dump");
        clickableListItem->setClickListener([this](u64 keys) {
            if (keys & HidNpadButton_A) {
                this->dumped = !this->dumped;

                FsFileSystem* sdmc = fsdevGetDeviceFileSystem("sdmc");
                if (sdmc) {
                    fsFsCreateDirectory(sdmc, "/config");
                    fsFsCreateDirectory(sdmc, "/config/emc_dumper");
                }

                if (this->dumped) {
                    FILE* f = fopen(FLAG_FILE, "w");
                    if (f) {
                        fprintf(f, "1");
                        fclose(f);
                    }
                } else {
                    remove(FLAG_FILE);
                }

                return true;
            }
            return false;
        });

        list->addItem(clickableListItem);
        frame->setContent(list);

        return frame;
    }

    virtual void update() override {
        sprintf(dumpStr, "%s%s", DUMP_STR, dumped ? "enabled" : "disabled");
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
