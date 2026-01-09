/*
 * Copyright (c) 2025 Lightos_
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <switch.h>

namespace dumper::sys {

    /* List sourced from https://gist.github.com/ndeadly/a4b8c01bb453028cd0008f282098f696, thanks! */
    constexpr u64 Fs          = 0x0100000000000000;
    constexpr u64 Ldr         = 0x0100000000000001;
    constexpr u64 Ncm         = 0x0100000000000002;
    constexpr u64 Pm          = 0x0100000000000003;
    constexpr u64 Sm          = 0x0100000000000004;
    constexpr u64 Boot        = 0x0100000000000005;
    constexpr u64 Usb         = 0x0100000000000006;
    constexpr u64 Tma_HtcStub = 0x0100000000000007;
    constexpr u64 Boot2       = 0x0100000000000008;
    constexpr u64 Settings    = 0x0100000000000009;
    constexpr u64 Bus         = 0x010000000000000A;
    constexpr u64 Bluetooth   = 0x010000000000000B;
    constexpr u64 Bcat        = 0x010000000000000C;
    constexpr u64 Dmnt        = 0x010000000000000D;
    constexpr u64 Friends     = 0x010000000000000E;
    constexpr u64 Nifm        = 0x010000000000000F;
    constexpr u64 Ptm         = 0x0100000000000010;
    constexpr u64 Shell       = 0x0100000000000011;
    constexpr u64 Bsdsockets  = 0x0100000000000012;
    constexpr u64 Hid         = 0x0100000000000013;
    constexpr u64 Audio       = 0x0100000000000014;
    constexpr u64 LogManager  = 0x0100000000000015;
    constexpr u64 Wlan        = 0x0100000000000016;
    constexpr u64 Cs          = 0x0100000000000017;
    constexpr u64 Ldn         = 0x0100000000000018;
    constexpr u64 Nvservices  = 0x0100000000000019;
    constexpr u64 Pcv         = 0x010000000000001A;
    constexpr u64 Ppc_Capmtp  = 0x010000000000001B;
    constexpr u64 Nvnflinger  = 0x010000000000001C;
    constexpr u64 Pcie        = 0x010000000000001D;
    constexpr u64 Account     = 0x010000000000001E;
    constexpr u64 Ns          = 0x010000000000001F;
    constexpr u64 Nfc         = 0x0100000000000020;
    constexpr u64 Psc         = 0x0100000000000021;
    constexpr u64 Capsrv      = 0x0100000000000022;
    constexpr u64 Am          = 0x0100000000000023;
    constexpr u64 Ssl         = 0x0100000000000024;
    constexpr u64 Nim         = 0x0100000000000025;
    constexpr u64 Cec         = 0x0100000000000026;
    constexpr u64 Tspm        = 0x0100000000000027;
    constexpr u64 Spl         = 0x0100000000000028;
    constexpr u64 Lbl         = 0x0100000000000029;
    constexpr u64 Btm         = 0x010000000000002A;
    constexpr u64 Erpt        = 0x010000000000002B;
    constexpr u64 Time        = 0x010000000000002C;
    constexpr u64 Vi          = 0x010000000000002D;
    constexpr u64 Pctl        = 0x010000000000002E;
    constexpr u64 Npns        = 0x010000000000002F;
    constexpr u64 Eupld       = 0x0100000000000030;
    constexpr u64 Arp_Glue    = 0x0100000000000031;
    constexpr u64 Eclct       = 0x0100000000000032;
    constexpr u64 Es          = 0x0100000000000033;
    constexpr u64 Fatal       = 0x0100000000000034;
    constexpr u64 Grc         = 0x0100000000000035;
    constexpr u64 Creport     = 0x0100000000000036;
    constexpr u64 Ro          = 0x0100000000000037;
    constexpr u64 Profiler    = 0x0100000000000038;
    constexpr u64 Sdb         = 0x0100000000000039;
    constexpr u64 Migration   = 0x010000000000003A;
    constexpr u64 Jit         = 0x010000000000003B;
    constexpr u64 Jpegdec     = 0x010000000000003C;
    constexpr u64 Safemode    = 0x010000000000003D;
    constexpr u64 Olsc        = 0x010000000000003E;
    constexpr u64 Dt          = 0x010000000000003F;
    constexpr u64 Nd          = 0x0100000000000040;
    constexpr u64 Ngct        = 0x0100000000000041;
    constexpr u64 Pgl         = 0x0100000000000042;
    constexpr u64 Omm         = 0x0100000000000045;
    constexpr u64 Eth         = 0x0100000000000046;
    constexpr u64 Ngc         = 0x0100000000000050;

    void dumpSysmodule(u64 id);

}
