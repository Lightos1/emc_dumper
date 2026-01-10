#!/bin/bash
set -e

rm -rf ./output/*
mkdir -p ./output/switch/.overlays
mkdir -p ./output/atmosphere/contents/420E054311050123/flags
touch ./output/atmosphere/contents/420E054311050123/flags/boot2.flag
cat > ./output/atmosphere/contents/420E054311050123/toolbox.json  << EOF
{
    "name"  : "emc_dumper",
    "tid"   : "420E054311050123",
    "requires_reboot": true,
    "version": "1.0.0"
}
EOF
cd overlay
make -j$(nproc)
cp ./*.ovl ../output/switch/.overlays/

cd ../sysmodule
make -j$(nproc)
cp ./*.nsp ../output/atmosphere/contents/420E054311050123/exefs.nsp
