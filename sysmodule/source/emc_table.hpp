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
#include "registers.hpp"

namespace dumper::reg {

    constexpr u32 EMC_INTSTATUS                             = 0x000;
    constexpr u32 EMC_DBG                                   = 0x008;
    constexpr u32 EMC_CFG                                   = 0x00C;
    constexpr u32 EMC_ADR_CFG                               = 0x010;
    constexpr u32 EMC_REFCTRL                               = 0x020;
    constexpr u32 EMC_PIN                                   = 0x024;
    constexpr u32 EMC_TIMING_CONTROL                        = 0x028;
    constexpr u32 EMC_RC                                    = 0x02C;
    constexpr u32 EMC_RFC                                   = 0x030;
    constexpr u32 EMC_RAS                                   = 0x034;
    constexpr u32 EMC_RP                                    = 0x038;
    constexpr u32 EMC_R2W                                   = 0x03C;
    constexpr u32 EMC_W2R                                   = 0x040;
    constexpr u32 EMC_R2P                                   = 0x044;
    constexpr u32 EMC_W2P                                   = 0x048;
    constexpr u32 EMC_RD_RCD                                = 0x04C;
    constexpr u32 EMC_WR_RCD                                = 0x050;
    constexpr u32 EMC_RRD                                   = 0x054;
    constexpr u32 EMC_REXT                                  = 0x058;
    constexpr u32 EMC_WDV                                   = 0x05C;
    constexpr u32 EMC_QUSE                                  = 0x060;
    constexpr u32 EMC_QRST                                  = 0x064;
    constexpr u32 EMC_QSAFE                                 = 0x068;
    constexpr u32 EMC_RDV                                   = 0x06C;
    constexpr u32 EMC_REFRESH                               = 0x070;
    constexpr u32 EMC_BURST_REFRESH_NUM                     = 0x074;
    constexpr u32 EMC_PDEX2WR                               = 0x078;
    constexpr u32 EMC_PDEX2RD                               = 0x07C;
    constexpr u32 EMC_PCHG2PDEN                             = 0x080;
    constexpr u32 EMC_ACT2PDEN                              = 0x084;
    constexpr u32 EMC_AR2PDEN                               = 0x088;
    constexpr u32 EMC_RW2PDEN                               = 0x08C;
    constexpr u32 EMC_TXSR                                  = 0x090;
    constexpr u32 EMC_TCKE                                  = 0x094;
    constexpr u32 EMC_TFAW                                  = 0x098;
    constexpr u32 EMC_TRPAB                                 = 0x09C;
    constexpr u32 EMC_TCLKSTABLE                            = 0x0A0;
    constexpr u32 EMC_TCLKSTOP                              = 0x0A4;
    constexpr u32 EMC_TREFBW                                = 0x0A8;
    constexpr u32 EMC_TPPD                                  = 0x0AC;
    constexpr u32 EMC_ODT_WRITE                             = 0x0B0;
    constexpr u32 EMC_PDEX2MRR                              = 0x0B4;
    constexpr u32 EMC_WEXT                                  = 0x0B8;
    constexpr u32 EMC_TRTM                                  = 0x0BC;
    constexpr u32 EMC_RFC_SLR                               = 0x0C0;
    constexpr u32 EMC_MRS_WAIT_CNT2                         = 0x0C4;
    constexpr u32 EMC_MRS_WAIT_CNT                          = 0x0C8;
    constexpr u32 EMC_MRS                                   = 0x0CC;
    constexpr u32 EMC_EMRS                                  = 0x0D0;
    constexpr u32 EMC_REF                                   = 0x0D4;
    constexpr u32 EMC_NOP                                   = 0x0DC;
    constexpr u32 EMC_SELF_REF                              = 0x0E0;
    constexpr u32 EMC_MRW                                   = 0x0E8;
    constexpr u32 EMC_MRR                                   = 0x0EC;
    constexpr u32 EMC_CMDQ                                  = 0x0F0;
    constexpr u32 EMC_MC2EMCQ                               = 0x0F4;
    constexpr u32 EMC_TWTM                                  = 0x0F8;
    constexpr u32 EMC_TRATM                                 = 0x0FC;
    constexpr u32 EMC_FBIO_SPARE                            = 0x100;
    constexpr u32 EMC_FBIO_CFG5                             = 0x104;
    constexpr u32 EMC_TWATM                                 = 0x108;
    constexpr u32 EMC_TR2REF                                = 0x10C;
    constexpr u32 EMC_PMACRO_DATA_PI_CTRL                   = 0x110;
    constexpr u32 EMC_PMACRO_CMD_PI_CTRL                    = 0x114;
    constexpr u32 EMC_PDEX2CKE                              = 0x118;
    constexpr u32 EMC_CKE2PDEN                              = 0x11C;
    constexpr u32 EMC_CFG_RSV                               = 0x120;
    constexpr u32 EMC_ACPD_CONTROL                          = 0x124;
    constexpr u32 EMC_MPC                                   = 0x128;
    constexpr u32 EMC_EMRS2                                 = 0x12C;
    constexpr u32 EMC_MRW2                                  = 0x134;
    constexpr u32 EMC_MRW3                                  = 0x138;
    constexpr u32 EMC_MRW4                                  = 0x13C;
    constexpr u32 EMC_CLKEN_OVERRIDE                        = 0x140;
    constexpr u32 EMC_R2R                                   = 0x144;
    constexpr u32 EMC_W2W                                   = 0x148;
    constexpr u32 EMC_EINPUT                                = 0x14C;
    constexpr u32 EMC_EINPUT_DURATION                       = 0x150;
    constexpr u32 EMC_PUTERM_EXTRA                          = 0x154;
    constexpr u32 EMC_TCKESR                                = 0x158;
    constexpr u32 EMC_TPD                                   = 0x15C;
    constexpr u32 EMC_AUTO_CAL_CONFIG                       = 0x2A4;
    constexpr u32 EMC_AUTO_CAL_INTERVAL                     = 0x2A8;
    constexpr u32 EMC_REQ_CTRL                              = 0x2B0;
    constexpr u32 EMC_EMC_STATUS                            = 0x2B4;
    constexpr u32 EMC_CFG_2                                 = 0x2B8;
    constexpr u32 EMC_CFG_DIG_DLL                           = 0x2BC;
    constexpr u32 EMC_CFG_DIG_DLL_PERIOD                    = 0x2C0;
    constexpr u32 EMC_DIG_DLL_STATUS                        = 0x2C4;
    constexpr u32 EMC_CFG_DIG_DLL_1                         = 0x2C8;
    constexpr u32 EMC_RDV_MASK                              = 0x2CC;
    constexpr u32 EMC_WDV_MASK                              = 0x2D0;
    constexpr u32 EMC_RDV_EARLY_MASK                        = 0x2D4;
    constexpr u32 EMC_RDV_EARLY                             = 0x2D8;
    constexpr u32 EMC_AUTO_CAL_CONFIG8                      = 0x2DC;
    constexpr u32 EMC_ZCAL_INTERVAL                         = 0x2E0;
    constexpr u32 EMC_ZCAL_WAIT_CNT                         = 0x2E4;
    constexpr u32 EMC_ZCAL_MRW_CMD                          = 0x2E8;
    constexpr u32 EMC_ZQ_CAL                                = 0x2EC;
    constexpr u32 EMC_XM2COMPPADCTRL3                       = 0x2F4;
    constexpr u32 EMC_AUTO_CAL_VREF_SEL_0                   = 0x2F8;
    constexpr u32 EMC_AUTO_CAL_VREF_SEL_1                   = 0x300;
    constexpr u32 EMC_XM2COMPPADCTRL                        = 0x30C;
    constexpr u32 EMC_FDPD_CTRL_DQ                          = 0x310;
    constexpr u32 EMC_FDPD_CTRL_CMD                         = 0x314;
    constexpr u32 EMC_PMACRO_CMD_BRICK_CTRL_FDPD            = 0x318;
    constexpr u32 EMC_PMACRO_DATA_BRICK_CTRL_FDPD           = 0x31C;
    constexpr u32 EMC_SCRATCH0                              = 0x324;
    constexpr u32 EMC_PMACRO_BRICK_CTRL_RFU1                = 0x330;
    constexpr u32 EMC_PMACRO_BRICK_CTRL_RFU2                = 0x334;
    constexpr u32 EMC_CMD_MAPPING_CMD0_0                    = 0x380;
    constexpr u32 EMC_CMD_MAPPING_CMD0_1                    = 0x384;
    constexpr u32 EMC_CMD_MAPPING_CMD0_2                    = 0x388;
    constexpr u32 EMC_CMD_MAPPING_CMD1_0                    = 0x38C;
    constexpr u32 EMC_CMD_MAPPING_CMD1_1                    = 0x390;
    constexpr u32 EMC_CMD_MAPPING_CMD1_2                    = 0x394;
    constexpr u32 EMC_CMD_MAPPING_CMD2_0                    = 0x398;
    constexpr u32 EMC_CMD_MAPPING_CMD2_1                    = 0x39C;
    constexpr u32 EMC_CMD_MAPPING_CMD2_2                    = 0x3A0;
    constexpr u32 EMC_CMD_MAPPING_CMD3_0                    = 0x3A4;
    constexpr u32 EMC_CMD_MAPPING_CMD3_1                    = 0x3A8;
    constexpr u32 EMC_CMD_MAPPING_CMD3_2                    = 0x3AC;
    constexpr u32 EMC_CMD_MAPPING_BYTE                      = 0x3B0;
    constexpr u32 EMC_TR_TIMING_0                           = 0x3B4;
    constexpr u32 EMC_TR_CTRL_0                             = 0x3B8;
    constexpr u32 EMC_TR_CTRL_1                             = 0x3BC;
    constexpr u32 EMC_SWITCH_BACK_CTRL                      = 0x3C0;
    constexpr u32 EMC_TR_RDV                                = 0x3C4;
    constexpr u32 EMC_STALL_THEN_EXE_AFTER_CLKCHANGE        = 0x3CC;
    constexpr u32 EMC_SEL_DPD_CTRL                          = 0x3D8;
    constexpr u32 EMC_PRE_REFRESH_REQ_CNT                   = 0x3DC;
    constexpr u32 EMC_DYN_SELF_REF_CONTROL                  = 0x3E0;
    constexpr u32 EMC_TXSRDLL                               = 0x3E4;
    constexpr u32 EMC_CCFIFO_ADDR                           = 0x3E8;
    constexpr u32 EMC_CCFIFO_DATA                           = 0x3EC;
    constexpr u32 EMC_CCFIFO_STATUS                         = 0x3F0;
    constexpr u32 EMC_TR_QPOP                               = 0x3F4;
    constexpr u32 EMC_TR_RDV_MASK                           = 0x3F8;
    constexpr u32 EMC_TR_QSAFE                              = 0x3FC;
    constexpr u32 EMC_TR_QRST                               = 0x400;
    constexpr u32 EMC_SWIZZLE_RANK0_BYTE0                   = 0x404;
    constexpr u32 EMC_SWIZZLE_RANK0_BYTE1                   = 0x408;
    constexpr u32 EMC_SWIZZLE_RANK0_BYTE2                   = 0x40C;
    constexpr u32 EMC_SWIZZLE_RANK0_BYTE3                   = 0x410;
    constexpr u32 EMC_SWIZZLE_RANK1_BYTE0                   = 0x418;
    constexpr u32 EMC_SWIZZLE_RANK1_BYTE1                   = 0x41C;
    constexpr u32 EMC_SWIZZLE_RANK1_BYTE2                   = 0x420;
    constexpr u32 EMC_SWIZZLE_RANK1_BYTE3                   = 0x424;
    constexpr u32 EMC_ISSUE_QRST                            = 0x428;
    constexpr u32 EMC_AUTO_CAL_CONFIG9                      = 0x42C;
    constexpr u32 EMC_PMC_SCRATCH1                          = 0x440;
    constexpr u32 EMC_PMC_SCRATCH2                          = 0x444;
    constexpr u32 EMC_PMC_SCRATCH3                          = 0x448;
    constexpr u32 EMC_AUTO_CAL_CONFIG2                      = 0x458;
    constexpr u32 EMC_AUTO_CAL_CONFIG3                      = 0x45C;
    constexpr u32 EMC_TR_DVFS                               = 0x460;
    constexpr u32 EMC_AUTO_CAL_CHANNEL                      = 0x464;
    constexpr u32 EMC_IBDLY                                 = 0x468;
    constexpr u32 EMC_OBDLY                                 = 0x46C;
    constexpr u32 EMC_TXDSRVTTGEN                           = 0x480;
    constexpr u32 EMC_WE_DURATION                           = 0x48C;
    constexpr u32 EMC_WS_DURATION                           = 0x490;
    constexpr u32 EMC_WEV                                   = 0x494;
    constexpr u32 EMC_WSV                                   = 0x498;
    constexpr u32 EMC_CFG_3                                 = 0x49C;
    constexpr u32 EMC_MRW5                                  = 0x4A0;
    constexpr u32 EMC_MRW6                                  = 0x4A4;
    constexpr u32 EMC_MRW7                                  = 0x4A8;
    constexpr u32 EMC_MRW8                                  = 0x4AC;
    constexpr u32 EMC_MRW9                                  = 0x4B0;
    constexpr u32 EMC_MRW10                                 = 0x4B4;
    constexpr u32 EMC_MRW11                                 = 0x4B8;
    constexpr u32 EMC_MRW12                                 = 0x4BC;
    constexpr u32 EMC_MRW13                                 = 0x4C0;
    constexpr u32 EMC_MRW14                                 = 0x4C4;
    constexpr u32 EMC_MRW15                                 = 0x4D0;
    constexpr u32 EMC_CFG_SYNC                              = 0x4D4;
    constexpr u32 EMC_FDPD_CTRL_CMD_NO_RAMP                 = 0x4D8;
    constexpr u32 EMC_WDV_CHK                               = 0x4E0;
    constexpr u32 EMC_CFG_PIPE_2                            = 0x554;
    constexpr u32 EMC_CFG_PIPE_CLK                          = 0x558;
    constexpr u32 EMC_CFG_PIPE_1                            = 0x55C;
    constexpr u32 EMC_CFG_PIPE                              = 0x560;
    constexpr u32 EMC_QPOP                                  = 0x564;
    constexpr u32 EMC_QUSE_WIDTH                            = 0x568;
    constexpr u32 EMC_PUTERM_WIDTH                          = 0x56C;
    constexpr u32 EMC_AUTO_CAL_CONFIG7                      = 0x574;
    constexpr u32 EMC_XM2COMPPADCTRL2                       = 0x578;
    constexpr u32 EMC_REFCTRL2                              = 0x580;
    constexpr u32 EMC_FBIO_CFG7                             = 0x584;
    constexpr u32 EMC_DATA_BRLSHFT_0                        = 0x588;
    constexpr u32 EMC_DATA_BRLSHFT_1                        = 0x58C;
    constexpr u32 EMC_RFCPB                                 = 0x590;
    constexpr u32 EMC_DQS_BRLSHFT_0                         = 0x594;
    constexpr u32 EMC_DQS_BRLSHFT_1                         = 0x598;
    constexpr u32 EMC_CMD_BRLSHFT_0                         = 0x59C;
    constexpr u32 EMC_CMD_BRLSHFT_1                         = 0x5A0;
    constexpr u32 EMC_CMD_BRLSHFT_2                         = 0x5A4;
    constexpr u32 EMC_CMD_BRLSHFT_3                         = 0x5A8;
    constexpr u32 EMC_QUSE_BRLSHFT_0                        = 0x5AC;
    constexpr u32 EMC_AUTO_CAL_CONFIG4                      = 0x5B0;
    constexpr u32 EMC_AUTO_CAL_CONFIG5                      = 0x5B4;
    constexpr u32 EMC_QUSE_BRLSHFT_1                        = 0x5B8;
    constexpr u32 EMC_QUSE_BRLSHFT_2                        = 0x5BC;
    constexpr u32 EMC_CCDMW                                 = 0x5C0;
    constexpr u32 EMC_QUSE_BRLSHFT_3                        = 0x5C4;
    constexpr u32 EMC_FBIO_CFG8                             = 0x5C8;
    constexpr u32 EMC_AUTO_CAL_CONFIG6                      = 0x5CC;
    constexpr u32 EMC_PMACRO_DLL_CFG_0                      = 0x5E4;
    constexpr u32 EMC_PMACRO_DLL_CFG_1                      = 0x5E8;
    constexpr u32 EMC_PMACRO_DLL_CFG_2                      = 0x5F8;
    constexpr u32 EMC_CONFIG_SAMPLE_DELAY                   = 0x5F0;
    constexpr u32 EMC_CFG_UPDATE                            = 0x5F4;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_0              = 0x600;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_1              = 0x604;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_2              = 0x608;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_3              = 0x60C;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_4              = 0x610;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK0_5              = 0x614;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_4              = 0x630;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_5              = 0x634;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_0              = 0x620;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_1              = 0x624;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_2              = 0x628;
    constexpr u32 EMC_PMACRO_QUSE_DDLL_RANK1_3              = 0x62C;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_0        = 0x640;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_1        = 0x644;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_2        = 0x648;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_3        = 0x64C;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_4        = 0x650;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_5        = 0x654;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_0        = 0x660;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_1        = 0x664;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_2        = 0x668;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_3        = 0x66C;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_4        = 0x670;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_5        = 0x674;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_0       = 0x680;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_1       = 0x684;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_2       = 0x688;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_3       = 0x68C;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_4       = 0x690;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_5       = 0x694;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_0       = 0x6A0;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_1       = 0x6A4;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_2       = 0x6A8;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_3       = 0x6AC;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_4       = 0x6B0;
    constexpr u32 EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_5       = 0x6B4;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_0       = 0x6C0;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_1       = 0x6C4;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_2       = 0x6C8;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_3       = 0x6CC;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_0       = 0x6E0;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_1       = 0x6E4;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_2       = 0x6E8;
    constexpr u32 EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_3       = 0x6EC;
    constexpr u32 EMC_PMACRO_AUTOCAL_CFG_0                  = 0x700;
    constexpr u32 EMC_PMACRO_AUTOCAL_CFG_1                  = 0x704;
    constexpr u32 EMC_PMACRO_AUTOCAL_CFG_2                  = 0x708;
    constexpr u32 EMC_PMACRO_TX_PWRD_0                      = 0x720;
    constexpr u32 EMC_PMACRO_TX_PWRD_1                      = 0x724;
    constexpr u32 EMC_PMACRO_TX_PWRD_2                      = 0x728;
    constexpr u32 EMC_PMACRO_TX_PWRD_3                      = 0x72C;
    constexpr u32 EMC_PMACRO_TX_PWRD_4                      = 0x730;
    constexpr u32 EMC_PMACRO_TX_PWRD_5                      = 0x734;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_0               = 0x740;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_1               = 0x744;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_3               = 0x74C;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_2               = 0x748;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_4               = 0x750;
    constexpr u32 EMC_PMACRO_TX_SEL_CLK_SRC_5               = 0x754;
    constexpr u32 EMC_PMACRO_DDLL_BYPASS                    = 0x760;
    constexpr u32 EMC_PMACRO_DDLL_PWRD_0                    = 0x770;
    constexpr u32 EMC_PMACRO_DDLL_PWRD_1                    = 0x774;
    constexpr u32 EMC_PMACRO_DDLL_PWRD_2                    = 0x778;
    constexpr u32 EMC_PMACRO_CMD_CTRL_0                     = 0x780;
    constexpr u32 EMC_PMACRO_CMD_CTRL_1                     = 0x784;
    constexpr u32 EMC_PMACRO_CMD_CTRL_2                     = 0x788;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_0 = 0x800;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_1 = 0x804;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_2 = 0x808;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_3 = 0x80C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_0 = 0x810;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_1 = 0x814;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_2 = 0x818;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_3 = 0x81C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_0 = 0x820;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_1 = 0x824;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_2 = 0x828;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_3 = 0x82C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_0 = 0x830;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_1 = 0x834;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_2 = 0x838;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_3 = 0x83C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_0 = 0x840;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_1 = 0x844;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_2 = 0x848;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_3 = 0x84C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_0 = 0x850;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_1 = 0x854;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_2 = 0x858;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_3 = 0x85C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_0 = 0x860;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_1 = 0x864;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_2 = 0x868;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_3 = 0x86C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_0 = 0x870;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_1 = 0x874;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_2 = 0x878;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_3 = 0x87C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_0  = 0x880;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_1  = 0x884;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_2  = 0x888;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_3  = 0x88C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_0  = 0x890;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_1  = 0x894;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_2  = 0x898;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_3  = 0x89C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_0  = 0x8A0;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_1  = 0x8A4;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_2  = 0x8A8;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_3  = 0x8AC;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_0  = 0x8B0;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_1  = 0x8B4;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_2  = 0x8B8;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_3  = 0x8BC;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_0 = 0x900;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_1 = 0x904;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_2 = 0x908;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_3 = 0x90C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_0 = 0x910;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_1 = 0x914;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_2 = 0x918;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_3 = 0x91C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_0 = 0x920;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_1 = 0x924;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_2 = 0x928;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_3 = 0x92C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_0 = 0x930;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_1 = 0x934;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_2 = 0x938;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_3 = 0x93C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_0 = 0x940;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_1 = 0x944;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_2 = 0x948;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_3 = 0x94C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_0 = 0x950;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_1 = 0x954;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_2 = 0x958;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_3 = 0x95C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_0 = 0x960;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_1 = 0x964;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_2 = 0x968;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_3 = 0x96C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_0 = 0x970;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_1 = 0x974;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_2 = 0x978;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_3 = 0x97C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_0  = 0x980;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_1  = 0x984;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_2  = 0x988;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_3  = 0x98C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_0  = 0x990;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_1  = 0x994;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_2  = 0x998;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_3  = 0x99C;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_0  = 0x9A0;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_1  = 0x9A4;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_2  = 0x9A8;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_3  = 0x9AC;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_0  = 0x9B0;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_1  = 0x9B4;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_2  = 0x9B8;
    constexpr u32 EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_3  = 0x9BC;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_0 = 0xA00;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_1 = 0xA04;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_2 = 0xA08;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_0 = 0xA10;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_1 = 0xA14;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_2 = 0xA18;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_0 = 0xA20;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_1 = 0xA24;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_2 = 0xA28;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_0 = 0xA30;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_1 = 0xA34;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_2 = 0xA38;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_0 = 0xA40;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_1 = 0xA44;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_2 = 0xA48;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_0 = 0xA50;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_1 = 0xA54;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_2 = 0xA58;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_0 = 0xA60;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_1 = 0xA64;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_2 = 0xA68;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_0 = 0xA70;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_1 = 0xA74;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_2 = 0xA78;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_0 = 0xB00;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_1 = 0xB04;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_2 = 0xB08;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_0 = 0xB10;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_1 = 0xB14;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_2 = 0xB18;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_0 = 0xB20;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_1 = 0xB24;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_2 = 0xB28;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_0 = 0xB30;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_1 = 0xB34;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_2 = 0xB38;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_0 = 0xB40;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_1 = 0xB44;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_2 = 0xB48;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_0 = 0xB50;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_1 = 0xB54;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_2 = 0xB58;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_0 = 0xB60;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_1 = 0xB64;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_2 = 0xB68;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_0 = 0xB70;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_1 = 0xB74;
    constexpr u32 EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_2 = 0xB78;
    constexpr u32 EMC_PMACRO_IB_VREF_DQ_0                   = 0xBE0;
    constexpr u32 EMC_PMACRO_IB_VREF_DQ_1                   = 0xBE4;
    constexpr u32 EMC_PMACRO_IB_VREF_DQS_0                  = 0xBF0;
    constexpr u32 EMC_PMACRO_IB_VREF_DQS_1                  = 0xBF4;
    constexpr u32 EMC_PMACRO_DDLL_LONG_CMD_0                = 0xC00;
    constexpr u32 EMC_PMACRO_DDLL_LONG_CMD_1                = 0xC04;
    constexpr u32 EMC_PMACRO_DDLL_LONG_CMD_2                = 0xC08;
    constexpr u32 EMC_PMACRO_DDLL_LONG_CMD_3                = 0xC0C;
    constexpr u32 EMC_PMACRO_DDLL_LONG_CMD_4                = 0xC10;
    constexpr u32 EMC_PMACRO_DDLL_SHORT_CMD_0               = 0xC20;
    constexpr u32 EMC_PMACRO_DDLL_SHORT_CMD_1               = 0xC24;
    constexpr u32 EMC_PMACRO_DDLL_SHORT_CMD_2               = 0xC28;
    constexpr u32 EMC_PMACRO_CFG_PM_GLOBAL_0                = 0xC30;
    constexpr u32 EMC_PMACRO_VTTGEN_CTRL_0                  = 0xC34;
    constexpr u32 EMC_PMACRO_VTTGEN_CTRL_1                  = 0xC38;
    constexpr u32 EMC_PMACRO_BG_BIAS_CTRL_0                 = 0xC3C;
    constexpr u32 EMC_PMACRO_PAD_CFG_CTRL                   = 0xC40;
    constexpr u32 EMC_PMACRO_ZCTRL                          = 0xC44;
    constexpr u32 EMC_PMACRO_RX_TERM                        = 0xC48;
    constexpr u32 EMC_PMACRO_CMD_TX_DRV                     = 0xC4C;
    constexpr u32 EMC_PMACRO_CMD_PAD_RX_CTRL                = 0xC50;
    constexpr u32 EMC_PMACRO_DATA_PAD_RX_CTRL               = 0xC54;
    constexpr u32 EMC_PMACRO_CMD_RX_TERM_MODE               = 0xC58;
    constexpr u32 EMC_PMACRO_DATA_RX_TERM_MODE              = 0xC5C;
    constexpr u32 EMC_PMACRO_CMD_PAD_TX_CTRL                = 0xC60;
    constexpr u32 EMC_PMACRO_DATA_PAD_TX_CTRL               = 0xC64;
    constexpr u32 EMC_PMACRO_COMMON_PAD_TX_CTRL             = 0xC68;
    constexpr u32 EMC_PMACRO_DSR_VTTGEN_CTRL_0              = 0xC6C;
    constexpr u32 EMC_PMACRO_DQ_TX_DRV                      = 0xC70;
    constexpr u32 EMC_PMACRO_CA_TX_DRV                      = 0xC74;
    constexpr u32 EMC_PMACRO_AUTOCAL_CFG_COMMON             = 0xC78;
    constexpr u32 EMC_PMACRO_BRICK_MAPPING_0                = 0xC80;
    constexpr u32 EMC_PMACRO_BRICK_MAPPING_1                = 0xC84;
    constexpr u32 EMC_PMACRO_BRICK_MAPPING_2                = 0xC88;
    constexpr u32 EMC_PMACRO_DDLL_PERIODIC_OFFSET           = 0xCE8;
    constexpr u32 EMC_PMACRO_VTTGEN_CTRL_2                  = 0xCF0;
    constexpr u32 EMC_PMACRO_IB_RXRT                        = 0xCF4;
    constexpr u32 EMC_PMACRO_TRAINING_CTRL_0                = 0xCF8;
    constexpr u32 EMC_PMACRO_TRAINING_CTRL_1                = 0xCFC;
    constexpr u32 EMC_PMACRO_DIG_DLL_STATUS_0               = 0xD20;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_0             = 0xD40;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_1             = 0xD44;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_2             = 0xD48;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_3             = 0xD4C;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_4             = 0xD50;
    constexpr u32 EMC_PMACRO_PERBIT_FGCG_CTRL_5             = 0xD54;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_0              = 0xD60;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_1              = 0xD64;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_2              = 0xD68;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_3              = 0xD6C;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_4              = 0xD70;
    constexpr u32 EMC_PMACRO_PERBIT_RFU_CTRL_5              = 0xD74;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_0             = 0xD80;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_1             = 0xD84;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_2             = 0xD88;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_3             = 0xD8C;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_4             = 0xD90;
    constexpr u32 EMC_PMACRO_PERBIT_RFU1_CTRL_5             = 0xD94;
    constexpr u32 EMC_TRAINING_CMD                          = 0xE00;
    constexpr u32 EMC_TRAINING_CTRL                         = 0xE04;
    constexpr u32 EMC_TRAINING_STATUS                       = 0xE08;
    constexpr u32 EMC_TRAINING_QUSE_CORS_CTRL               = 0xE0C;
    constexpr u32 EMC_TRAINING_QUSE_FINE_CTRL               = 0xE10;
    constexpr u32 EMC_TRAINING_QUSE_CTRL_MISC               = 0xE14;
    constexpr u32 EMC_TRAINING_WRITE_FINE_CTRL              = 0xE18;
    constexpr u32 EMC_TRAINING_WRITE_CTRL_MISC              = 0xE1C;
    constexpr u32 EMC_TRAINING_WRITE_VREF_CTRL              = 0xE20;
    constexpr u32 EMC_TRAINING_READ_FINE_CTRL               = 0xE24;
    constexpr u32 EMC_TRAINING_READ_CTRL_MISC               = 0xE28;
    constexpr u32 EMC_TRAINING_READ_VREF_CTRL               = 0xE2C;
    constexpr u32 EMC_TRAINING_CA_FINE_CTRL                 = 0xE30;
    constexpr u32 EMC_TRAINING_CA_CTRL_MISC                 = 0xE34;
    constexpr u32 EMC_TRAINING_CA_CTRL_MISC1                = 0xE38;
    constexpr u32 EMC_TRAINING_CA_VREF_CTRL                 = 0xE3C;
    constexpr u32 EMC_TRAINING_SETTLE                       = 0xE44;
    constexpr u32 EMC_TRAINING_MPC                          = 0xE5C;
    constexpr u32 EMC_TRAINING_PATRAM_CTRL                  = 0xE60;
    constexpr u32 EMC_TRAINING_PATRAM_DQ                    = 0xE64;
    constexpr u32 EMC_TRAINING_PATRAM_DMI                   = 0xE68;
    constexpr u32 EMC_TRAINING_VREF_SETTLE                  = 0xE6C;
    constexpr u32 EMC_TRAINING_RW_OFFSET_IB_BYTE0           = 0xE98;
    constexpr u32 EMC_TRAINING_RW_OFFSET_IB_BYTE1           = 0xE9C;
    constexpr u32 EMC_TRAINING_RW_OFFSET_IB_BYTE2           = 0xEA0;
    constexpr u32 EMC_TRAINING_RW_OFFSET_IB_BYTE3           = 0xEA4;
    constexpr u32 EMC_TRAINING_RW_OFFSET_IB_MISC            = 0xEA8;
    constexpr u32 EMC_TRAINING_RW_OFFSET_OB_BYTE0           = 0xEAC;
    constexpr u32 EMC_TRAINING_RW_OFFSET_OB_BYTE1           = 0xEB0;
    constexpr u32 EMC_TRAINING_RW_OFFSET_OB_BYTE2           = 0xEB4;
    constexpr u32 EMC_TRAINING_RW_OFFSET_OB_BYTE3           = 0xEB8;
    constexpr u32 EMC_TRAINING_RW_OFFSET_OB_MISC            = 0xEBC;
    constexpr u32 EMC_TRAINING_OPT_CA_VREF                  = 0xEC0;
    constexpr u32 EMC_TRAINING_OPT_DQ_OB_VREF               = 0xEC4;
    constexpr u32 EMC_TRAINING_QUSE_VREF_CTRL               = 0xED0;
    constexpr u32 EMC_TRAINING_OPT_DQS_IB_VREF_RANK0        = 0xED4;
    constexpr u32 EMC_TRAINING_OPT_DQS_IB_VREF_RANK1        = 0xED8;

    struct Register emcTable[] = {
        { "EMC_INTSTATUS", EMC_INTSTATUS },
        { "EMC_DBG", EMC_DBG },
        { "EMC_CFG", EMC_CFG },
        { "EMC_ADR_CFG", EMC_ADR_CFG },
        { "EMC_REFCTRL", EMC_REFCTRL },
        { "EMC_PIN", EMC_PIN },
        { "EMC_TIMING_CONTROL", EMC_TIMING_CONTROL },
        { "EMC_RC", EMC_RC },
        { "EMC_RFC", EMC_RFC },
        { "EMC_RAS", EMC_RAS },
        { "EMC_RP", EMC_RP },
        { "EMC_R2W", EMC_R2W },
        { "EMC_W2R", EMC_W2R },
        { "EMC_R2P", EMC_R2P },
        { "EMC_W2P", EMC_W2P },
        { "EMC_RD_RCD", EMC_RD_RCD },
        { "EMC_WR_RCD", EMC_WR_RCD },
        { "EMC_RRD", EMC_RRD },
        { "EMC_REXT", EMC_REXT },
        { "EMC_WDV", EMC_WDV },
        { "EMC_QUSE", EMC_QUSE },
        { "EMC_QRST", EMC_QRST },
        { "EMC_QSAFE", EMC_QSAFE },
        { "EMC_RDV", EMC_RDV },
        { "EMC_REFRESH", EMC_REFRESH },
        { "EMC_BURST_REFRESH_NUM", EMC_BURST_REFRESH_NUM },
        { "EMC_PDEX2WR", EMC_PDEX2WR },
        { "EMC_PDEX2RD", EMC_PDEX2RD },
        { "EMC_PCHG2PDEN", EMC_PCHG2PDEN },
        { "EMC_ACT2PDEN", EMC_ACT2PDEN },
        { "EMC_AR2PDEN", EMC_AR2PDEN },
        { "EMC_RW2PDEN", EMC_RW2PDEN },
        { "EMC_TXSR", EMC_TXSR },
        { "EMC_TCKE", EMC_TCKE },
        { "EMC_TFAW", EMC_TFAW },
        { "EMC_TRPAB", EMC_TRPAB },
        { "EMC_TCLKSTABLE", EMC_TCLKSTABLE },
        { "EMC_TCLKSTOP", EMC_TCLKSTOP },
        { "EMC_TREFBW", EMC_TREFBW },
        { "EMC_TPPD", EMC_TPPD },
        { "EMC_ODT_WRITE", EMC_ODT_WRITE },
        { "EMC_PDEX2MRR", EMC_PDEX2MRR },
        { "EMC_WEXT", EMC_WEXT },
        { "EMC_TRTM", EMC_TRTM },
        { "EMC_RFC_SLR", EMC_RFC_SLR },
        { "EMC_MRS_WAIT_CNT2", EMC_MRS_WAIT_CNT2 },
        { "EMC_MRS_WAIT_CNT", EMC_MRS_WAIT_CNT },
        { "EMC_MRS", EMC_MRS },
        { "EMC_EMRS", EMC_EMRS },
        { "EMC_REF", EMC_REF },
        { "EMC_NOP", EMC_NOP },
        { "EMC_SELF_REF", EMC_SELF_REF },
        { "EMC_MRW", EMC_MRW },
        { "EMC_MRR", EMC_MRR },
        { "EMC_CMDQ", EMC_CMDQ },
        { "EMC_MC2EMCQ", EMC_MC2EMCQ },
        { "EMC_TWTM", EMC_TWTM },
        { "EMC_TRATM", EMC_TRATM },
        { "EMC_FBIO_SPARE", EMC_FBIO_SPARE },
        { "EMC_FBIO_CFG5", EMC_FBIO_CFG5 },
        { "EMC_TWATM", EMC_TWATM },
        { "EMC_TR2REF", EMC_TR2REF },
        { "EMC_PMACRO_DATA_PI_CTRL", EMC_PMACRO_DATA_PI_CTRL },
        { "EMC_PMACRO_CMD_PI_CTRL", EMC_PMACRO_CMD_PI_CTRL },
        { "EMC_PDEX2CKE", EMC_PDEX2CKE },
        { "EMC_CKE2PDEN", EMC_CKE2PDEN },
        { "EMC_CFG_RSV", EMC_CFG_RSV },
        { "EMC_ACPD_CONTROL", EMC_ACPD_CONTROL },
        { "EMC_MPC", EMC_MPC },
        { "EMC_EMRS2", EMC_EMRS2 },
        { "EMC_MRW2", EMC_MRW2 },
        { "EMC_MRW3", EMC_MRW3 },
        { "EMC_MRW3", EMC_MRW3 },
        { "EMC_MRW4", EMC_MRW4 },
        { "EMC_CLKEN_OVERRIDE", EMC_CLKEN_OVERRIDE },
        { "EMC_R2R", EMC_R2R },
        { "EMC_W2W", EMC_W2W },
        { "EMC_EINPUT", EMC_EINPUT },
        { "EMC_EINPUT_DURATION", EMC_EINPUT_DURATION },
        { "EMC_PUTERM_EXTRA", EMC_PUTERM_EXTRA },
        { "EMC_TCKESR", EMC_TCKESR },
        { "EMC_TPD", EMC_TPD },
        { "EMC_AUTO_CAL_CONFIG", EMC_AUTO_CAL_CONFIG },
        { "EMC_AUTO_CAL_INTERVAL", EMC_AUTO_CAL_INTERVAL },
        { "EMC_REQ_CTRL", EMC_REQ_CTRL },
        { "EMC_EMC_STATUS", EMC_EMC_STATUS },
        { "EMC_CFG_2", EMC_CFG_2 },
        { "EMC_CFG_DIG_DLL", EMC_CFG_DIG_DLL },
        { "EMC_CFG_DIG_DLL_PERIOD", EMC_CFG_DIG_DLL_PERIOD },
        { "EMC_DIG_DLL_STATUS", EMC_DIG_DLL_STATUS },
        { "EMC_CFG_DIG_DLL_1", EMC_CFG_DIG_DLL_1 },
        { "EMC_RDV_MASK", EMC_RDV_MASK },
        { "EMC_WDV_MASK", EMC_WDV_MASK },
        { "EMC_RDV_EARLY_MASK", EMC_RDV_EARLY_MASK },
        { "EMC_RDV_EARLY", EMC_RDV_EARLY },
        { "EMC_AUTO_CAL_CONFIG8", EMC_AUTO_CAL_CONFIG8 },
        { "EMC_ZCAL_INTERVAL", EMC_ZCAL_INTERVAL },
        { "EMC_ZCAL_WAIT_CNT", EMC_ZCAL_WAIT_CNT },
        { "EMC_ZCAL_MRW_CMD", EMC_ZCAL_MRW_CMD },
        { "EMC_ZQ_CAL", EMC_ZQ_CAL },
        { "EMC_XM2COMPPADCTRL3", EMC_XM2COMPPADCTRL3 },
        { "EMC_AUTO_CAL_VREF_SEL_0", EMC_AUTO_CAL_VREF_SEL_0 },
        { "EMC_AUTO_CAL_VREF_SEL_1", EMC_AUTO_CAL_VREF_SEL_1 },
        { "EMC_XM2COMPPADCTRL", EMC_XM2COMPPADCTRL },
        { "EMC_FDPD_CTRL_DQ", EMC_FDPD_CTRL_DQ },
        { "EMC_FDPD_CTRL_CMD", EMC_FDPD_CTRL_CMD },
        { "EMC_PMACRO_CMD_BRICK_CTRL_FDPD", EMC_PMACRO_CMD_BRICK_CTRL_FDPD },
        { "EMC_PMACRO_DATA_BRICK_CTRL_FDPD", EMC_PMACRO_DATA_BRICK_CTRL_FDPD },
        { "EMC_SCRATCH0", EMC_SCRATCH0 },
        { "EMC_PMACRO_BRICK_CTRL_RFU1", EMC_PMACRO_BRICK_CTRL_RFU1 },
        { "EMC_PMACRO_BRICK_CTRL_RFU2", EMC_PMACRO_BRICK_CTRL_RFU2 },
        { "EMC_CMD_MAPPING_CMD0_0", EMC_CMD_MAPPING_CMD0_0 },
        { "EMC_CMD_MAPPING_CMD0_1", EMC_CMD_MAPPING_CMD0_1 },
        { "EMC_CMD_MAPPING_CMD0_2", EMC_CMD_MAPPING_CMD0_2 },
        { "EMC_CMD_MAPPING_CMD1_0", EMC_CMD_MAPPING_CMD1_0 },
        { "EMC_CMD_MAPPING_CMD1_1", EMC_CMD_MAPPING_CMD1_1 },
        { "EMC_CMD_MAPPING_CMD1_2", EMC_CMD_MAPPING_CMD1_2 },
        { "EMC_CMD_MAPPING_CMD2_0", EMC_CMD_MAPPING_CMD2_0 },
        { "EMC_CMD_MAPPING_CMD2_1", EMC_CMD_MAPPING_CMD2_1 },
        { "EMC_CMD_MAPPING_CMD2_2", EMC_CMD_MAPPING_CMD2_2 },
        { "EMC_CMD_MAPPING_CMD3_0", EMC_CMD_MAPPING_CMD3_0 },
        { "EMC_CMD_MAPPING_CMD3_1", EMC_CMD_MAPPING_CMD3_1 },
        { "EMC_CMD_MAPPING_CMD3_2", EMC_CMD_MAPPING_CMD3_2 },
        { "EMC_CMD_MAPPING_BYTE", EMC_CMD_MAPPING_BYTE },
        { "EMC_TR_TIMING_0", EMC_TR_TIMING_0 },
        { "EMC_TR_CTRL_0", EMC_TR_CTRL_0 },
        { "EMC_TR_CTRL_1", EMC_TR_CTRL_1 },
        { "EMC_SWITCH_BACK_CTRL", EMC_SWITCH_BACK_CTRL },
        { "EMC_TR_RDV", EMC_TR_RDV },
        { "EMC_STALL_THEN_EXE_AFTER_CLKCHANGE", EMC_STALL_THEN_EXE_AFTER_CLKCHANGE },
        { "EMC_SEL_DPD_CTRL", EMC_SEL_DPD_CTRL },
        { "EMC_PRE_REFRESH_REQ_CNT", EMC_PRE_REFRESH_REQ_CNT },
        { "EMC_DYN_SELF_REF_CONTROL", EMC_DYN_SELF_REF_CONTROL },
        { "EMC_TXSRDLL", EMC_TXSRDLL },
        { "EMC_CCFIFO_ADDR", EMC_CCFIFO_ADDR },
        { "EMC_CCFIFO_DATA", EMC_CCFIFO_DATA },
        { "EMC_CCFIFO_STATUS", EMC_CCFIFO_STATUS },
        { "EMC_TR_QPOP", EMC_TR_QPOP },
        { "EMC_TR_RDV_MASK", EMC_TR_RDV_MASK },
        { "EMC_TR_QSAFE", EMC_TR_QSAFE },
        { "EMC_TR_QRST", EMC_TR_QRST },
        { "EMC_SWIZZLE_RANK0_BYTE0", EMC_SWIZZLE_RANK0_BYTE0 },
        { "EMC_SWIZZLE_RANK0_BYTE1", EMC_SWIZZLE_RANK0_BYTE1 },
        { "EMC_SWIZZLE_RANK0_BYTE2", EMC_SWIZZLE_RANK0_BYTE2 },
        { "EMC_SWIZZLE_RANK0_BYTE3", EMC_SWIZZLE_RANK0_BYTE3 },
        { "EMC_SWIZZLE_RANK1_BYTE0", EMC_SWIZZLE_RANK1_BYTE0 },
        { "EMC_SWIZZLE_RANK1_BYTE1", EMC_SWIZZLE_RANK1_BYTE1 },
        { "EMC_SWIZZLE_RANK1_BYTE2", EMC_SWIZZLE_RANK1_BYTE2 },
        { "EMC_SWIZZLE_RANK1_BYTE3", EMC_SWIZZLE_RANK1_BYTE3 },
        { "EMC_ISSUE_QRST", EMC_ISSUE_QRST },
        { "EMC_AUTO_CAL_CONFIG9", EMC_AUTO_CAL_CONFIG9 },
        { "EMC_PMC_SCRATCH1", EMC_PMC_SCRATCH1 },
        { "EMC_PMC_SCRATCH2", EMC_PMC_SCRATCH2 },
        { "EMC_PMC_SCRATCH3", EMC_PMC_SCRATCH3 },
        { "EMC_AUTO_CAL_CONFIG2", EMC_AUTO_CAL_CONFIG2 },
        { "EMC_AUTO_CAL_CONFIG3", EMC_AUTO_CAL_CONFIG3 },
        { "EMC_TR_DVFS", EMC_TR_DVFS },
        { "EMC_AUTO_CAL_CHANNEL", EMC_AUTO_CAL_CHANNEL },
        { "EMC_IBDLY", EMC_IBDLY },
        { "EMC_OBDLY", EMC_OBDLY },
        { "EMC_TXDSRVTTGEN", EMC_TXDSRVTTGEN },
        { "EMC_WE_DURATION", EMC_WE_DURATION },
        { "EMC_WS_DURATION", EMC_WS_DURATION },
        { "EMC_WEV", EMC_WEV },
        { "EMC_WSV", EMC_WSV },
        { "EMC_CFG_3", EMC_CFG_3 },
        { "EMC_MRW5", EMC_MRW5 },
        { "EMC_MRW6", EMC_MRW6 },
        { "EMC_MRW7", EMC_MRW7 },
        { "EMC_MRW8", EMC_MRW8 },
        { "EMC_MRW9", EMC_MRW9 },
        { "EMC_MRW10", EMC_MRW10 },
        { "EMC_MRW11", EMC_MRW11 },
        { "EMC_MRW12", EMC_MRW12 },
        { "EMC_MRW13", EMC_MRW13 },
        { "EMC_MRW14", EMC_MRW14 },
        { "EMC_MRW15", EMC_MRW15 },
        { "EMC_CFG_SYNC", EMC_CFG_SYNC },
        { "EMC_FDPD_CTRL_CMD_NO_RAMP", EMC_FDPD_CTRL_CMD_NO_RAMP },
        { "EMC_WDV_CHK", EMC_WDV_CHK },
        { "EMC_CFG_PIPE_2", EMC_CFG_PIPE_2 },
        { "EMC_CFG_PIPE_CLK", EMC_CFG_PIPE_CLK },
        { "EMC_CFG_PIPE_1", EMC_CFG_PIPE_1 },
        { "EMC_CFG_PIPE", EMC_CFG_PIPE },
        { "EMC_QPOP", EMC_QPOP },
        { "EMC_QUSE_WIDTH", EMC_QUSE_WIDTH },
        { "EMC_PUTERM_WIDTH", EMC_PUTERM_WIDTH },
        { "EMC_AUTO_CAL_CONFIG7", EMC_AUTO_CAL_CONFIG7 },
        { "EMC_XM2COMPPADCTRL2", EMC_XM2COMPPADCTRL2 },
        { "EMC_REFCTRL2", EMC_REFCTRL2 },
        { "EMC_FBIO_CFG7", EMC_FBIO_CFG7 },
        { "EMC_DATA_BRLSHFT_0", EMC_DATA_BRLSHFT_0 },
        { "EMC_DATA_BRLSHFT_1", EMC_DATA_BRLSHFT_1 },
        { "EMC_RFCPB", EMC_RFCPB },
        { "EMC_DQS_BRLSHFT_0", EMC_DQS_BRLSHFT_0 },
        { "EMC_DQS_BRLSHFT_1", EMC_DQS_BRLSHFT_1 },
        { "EMC_CMD_BRLSHFT_0", EMC_CMD_BRLSHFT_0 },
        { "EMC_CMD_BRLSHFT_1", EMC_CMD_BRLSHFT_1 },
        { "EMC_CMD_BRLSHFT_2", EMC_CMD_BRLSHFT_2 },
        { "EMC_CMD_BRLSHFT_3", EMC_CMD_BRLSHFT_3 },
        { "EMC_QUSE_BRLSHFT_0", EMC_QUSE_BRLSHFT_0 },
        { "EMC_AUTO_CAL_CONFIG4", EMC_AUTO_CAL_CONFIG4 },
        { "EMC_AUTO_CAL_CONFIG5", EMC_AUTO_CAL_CONFIG5 },
        { "EMC_QUSE_BRLSHFT_1", EMC_QUSE_BRLSHFT_1 },
        { "EMC_QUSE_BRLSHFT_2", EMC_QUSE_BRLSHFT_2 },
        { "EMC_CCDMW", EMC_CCDMW },
        { "EMC_QUSE_BRLSHFT_3", EMC_QUSE_BRLSHFT_3 },
        { "EMC_FBIO_CFG8", EMC_FBIO_CFG8 },
        { "EMC_AUTO_CAL_CONFIG6", EMC_AUTO_CAL_CONFIG6 },
        { "EMC_PMACRO_DLL_CFG_0", EMC_PMACRO_DLL_CFG_0 },
        { "EMC_PMACRO_DLL_CFG_1", EMC_PMACRO_DLL_CFG_1 },
        { "EMC_PMACRO_DLL_CFG_2", EMC_PMACRO_DLL_CFG_2 },
        { "EMC_CONFIG_SAMPLE_DELAY", EMC_CONFIG_SAMPLE_DELAY },
        { "EMC_CFG_UPDATE", EMC_CFG_UPDATE },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_0", EMC_PMACRO_QUSE_DDLL_RANK0_0 },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_1", EMC_PMACRO_QUSE_DDLL_RANK0_1 },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_2", EMC_PMACRO_QUSE_DDLL_RANK0_2 },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_3", EMC_PMACRO_QUSE_DDLL_RANK0_3 },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_4", EMC_PMACRO_QUSE_DDLL_RANK0_4 },
        { "EMC_PMACRO_QUSE_DDLL_RANK0_5", EMC_PMACRO_QUSE_DDLL_RANK0_5 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_4", EMC_PMACRO_QUSE_DDLL_RANK1_4 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_5", EMC_PMACRO_QUSE_DDLL_RANK1_5 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_0", EMC_PMACRO_QUSE_DDLL_RANK1_0 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_1", EMC_PMACRO_QUSE_DDLL_RANK1_1 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_2", EMC_PMACRO_QUSE_DDLL_RANK1_2 },
        { "EMC_PMACRO_QUSE_DDLL_RANK1_3", EMC_PMACRO_QUSE_DDLL_RANK1_3 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_0", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_0 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_1", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_1 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_2", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_2 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_3", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_3 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_4", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_4 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_5", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK0_5 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_0", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_0 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_1", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_1 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_2", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_2 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_3", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_3 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_4", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_4 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_5", EMC_PMACRO_OB_DDLL_LONG_DQ_RANK1_5 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_0", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_0 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_1", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_1 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_2", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_2 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_3", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_3 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_4", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_4 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_5", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK0_5 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_0", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_0 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_1", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_1 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_2", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_2 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_3", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_3 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_4", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_4 },
        { "EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_5", EMC_PMACRO_OB_DDLL_LONG_DQS_RANK1_5 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_0", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_0 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_1", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_1 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_2", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_2 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_3", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK0_3 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_0", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_0 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_1", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_1 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_2", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_2 },
        { "EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_3", EMC_PMACRO_IB_DDLL_LONG_DQS_RANK1_3 },
        { "EMC_PMACRO_AUTOCAL_CFG_0", EMC_PMACRO_AUTOCAL_CFG_0 },
        { "EMC_PMACRO_AUTOCAL_CFG_1", EMC_PMACRO_AUTOCAL_CFG_1 },
        { "EMC_PMACRO_AUTOCAL_CFG_2", EMC_PMACRO_AUTOCAL_CFG_2 },
        { "EMC_PMACRO_TX_PWRD_0", EMC_PMACRO_TX_PWRD_0 },
        { "EMC_PMACRO_TX_PWRD_1", EMC_PMACRO_TX_PWRD_1 },
        { "EMC_PMACRO_TX_PWRD_2", EMC_PMACRO_TX_PWRD_2 },
        { "EMC_PMACRO_TX_PWRD_3", EMC_PMACRO_TX_PWRD_3 },
        { "EMC_PMACRO_TX_PWRD_4", EMC_PMACRO_TX_PWRD_4 },
        { "EMC_PMACRO_TX_PWRD_5", EMC_PMACRO_TX_PWRD_5 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_0", EMC_PMACRO_TX_SEL_CLK_SRC_0 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_1", EMC_PMACRO_TX_SEL_CLK_SRC_1 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_3", EMC_PMACRO_TX_SEL_CLK_SRC_3 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_2", EMC_PMACRO_TX_SEL_CLK_SRC_2 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_4", EMC_PMACRO_TX_SEL_CLK_SRC_4 },
        { "EMC_PMACRO_TX_SEL_CLK_SRC_5", EMC_PMACRO_TX_SEL_CLK_SRC_5 },
        { "EMC_PMACRO_DDLL_BYPASS", EMC_PMACRO_DDLL_BYPASS },
        { "EMC_PMACRO_DDLL_PWRD_0", EMC_PMACRO_DDLL_PWRD_0 },
        { "EMC_PMACRO_DDLL_PWRD_1", EMC_PMACRO_DDLL_PWRD_1 },
        { "EMC_PMACRO_DDLL_PWRD_2", EMC_PMACRO_DDLL_PWRD_2 },
        { "EMC_PMACRO_CMD_CTRL_0", EMC_PMACRO_CMD_CTRL_0 },
        { "EMC_PMACRO_CMD_CTRL_1", EMC_PMACRO_CMD_CTRL_1 },
        { "EMC_PMACRO_CMD_CTRL_2", EMC_PMACRO_CMD_CTRL_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE0_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE1_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE2_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE3_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE4_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE5_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE6_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_BYTE7_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD0_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD1_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD2_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK0_CMD3_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE0_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE1_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE2_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE3_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE4_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE5_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE6_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_BYTE7_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD0_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD1_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD2_3 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_0", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_0 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_1", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_1 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_2", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_2 },
        { "EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_3", EMC_PMACRO_OB_DDLL_SHORT_DQ_RANK1_CMD3_3 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE0_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE1_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE2_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE3_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE4_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE5_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE6_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK0_BYTE7_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE0_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE1_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE2_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE3_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE4_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE5_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE6_2 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_0", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_0 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_1", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_1 },
        { "EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_2", EMC_PMACRO_IB_DDLL_SHORT_DQ_RANK1_BYTE7_2 },
        { "EMC_PMACRO_IB_VREF_DQ_0", EMC_PMACRO_IB_VREF_DQ_0 },
        { "EMC_PMACRO_IB_VREF_DQ_1", EMC_PMACRO_IB_VREF_DQ_1 },
        { "EMC_PMACRO_IB_VREF_DQS_0", EMC_PMACRO_IB_VREF_DQS_0 },
        { "EMC_PMACRO_IB_VREF_DQS_1", EMC_PMACRO_IB_VREF_DQS_1 },
        { "EMC_PMACRO_DDLL_LONG_CMD_0", EMC_PMACRO_DDLL_LONG_CMD_0 },
        { "EMC_PMACRO_DDLL_LONG_CMD_1", EMC_PMACRO_DDLL_LONG_CMD_1 },
        { "EMC_PMACRO_DDLL_LONG_CMD_2", EMC_PMACRO_DDLL_LONG_CMD_2 },
        { "EMC_PMACRO_DDLL_LONG_CMD_3", EMC_PMACRO_DDLL_LONG_CMD_3 },
        { "EMC_PMACRO_DDLL_LONG_CMD_4", EMC_PMACRO_DDLL_LONG_CMD_4 },
        { "EMC_PMACRO_DDLL_SHORT_CMD_0", EMC_PMACRO_DDLL_SHORT_CMD_0 },
        { "EMC_PMACRO_DDLL_SHORT_CMD_1", EMC_PMACRO_DDLL_SHORT_CMD_1 },
        { "EMC_PMACRO_DDLL_SHORT_CMD_2", EMC_PMACRO_DDLL_SHORT_CMD_2 },
        { "EMC_PMACRO_CFG_PM_GLOBAL_0", EMC_PMACRO_CFG_PM_GLOBAL_0 },
        { "EMC_PMACRO_VTTGEN_CTRL_0", EMC_PMACRO_VTTGEN_CTRL_0 },
        { "EMC_PMACRO_VTTGEN_CTRL_1", EMC_PMACRO_VTTGEN_CTRL_1 },
        { "EMC_PMACRO_BG_BIAS_CTRL_0", EMC_PMACRO_BG_BIAS_CTRL_0 },
        { "EMC_PMACRO_PAD_CFG_CTRL", EMC_PMACRO_PAD_CFG_CTRL },
        { "EMC_PMACRO_ZCTRL", EMC_PMACRO_ZCTRL },
        { "EMC_PMACRO_RX_TERM", EMC_PMACRO_RX_TERM },
        { "EMC_PMACRO_CMD_TX_DRV", EMC_PMACRO_CMD_TX_DRV },
        { "EMC_PMACRO_CMD_PAD_RX_CTRL", EMC_PMACRO_CMD_PAD_RX_CTRL },
        { "EMC_PMACRO_DATA_PAD_RX_CTRL", EMC_PMACRO_DATA_PAD_RX_CTRL },
        { "EMC_PMACRO_CMD_RX_TERM_MODE", EMC_PMACRO_CMD_RX_TERM_MODE },
        { "EMC_PMACRO_DATA_RX_TERM_MODE", EMC_PMACRO_DATA_RX_TERM_MODE },
        { "EMC_PMACRO_CMD_PAD_TX_CTRL", EMC_PMACRO_CMD_PAD_TX_CTRL },
        { "EMC_PMACRO_DATA_PAD_TX_CTRL", EMC_PMACRO_DATA_PAD_TX_CTRL },
        { "EMC_PMACRO_COMMON_PAD_TX_CTRL", EMC_PMACRO_COMMON_PAD_TX_CTRL },
        { "EMC_PMACRO_DSR_VTTGEN_CTRL_0", EMC_PMACRO_DSR_VTTGEN_CTRL_0 },
        { "EMC_PMACRO_DQ_TX_DRV", EMC_PMACRO_DQ_TX_DRV },
        { "EMC_PMACRO_CA_TX_DRV", EMC_PMACRO_CA_TX_DRV },
        { "EMC_PMACRO_AUTOCAL_CFG_COMMON", EMC_PMACRO_AUTOCAL_CFG_COMMON },
        { "EMC_PMACRO_BRICK_MAPPING_0", EMC_PMACRO_BRICK_MAPPING_0 },
        { "EMC_PMACRO_BRICK_MAPPING_1", EMC_PMACRO_BRICK_MAPPING_1 },
        { "EMC_PMACRO_BRICK_MAPPING_2", EMC_PMACRO_BRICK_MAPPING_2 },
        { "EMC_PMACRO_DDLL_PERIODIC_OFFSET", EMC_PMACRO_DDLL_PERIODIC_OFFSET },
        { "EMC_PMACRO_VTTGEN_CTRL_2", EMC_PMACRO_VTTGEN_CTRL_2 },
        { "EMC_PMACRO_IB_RXRT", EMC_PMACRO_IB_RXRT },
        { "EMC_PMACRO_TRAINING_CTRL_0", EMC_PMACRO_TRAINING_CTRL_0 },
        { "EMC_PMACRO_TRAINING_CTRL_1", EMC_PMACRO_TRAINING_CTRL_1 },
        { "EMC_PMACRO_DIG_DLL_STATUS_0", EMC_PMACRO_DIG_DLL_STATUS_0 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_0", EMC_PMACRO_PERBIT_FGCG_CTRL_0 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_1", EMC_PMACRO_PERBIT_FGCG_CTRL_1 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_2", EMC_PMACRO_PERBIT_FGCG_CTRL_2 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_3", EMC_PMACRO_PERBIT_FGCG_CTRL_3 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_4", EMC_PMACRO_PERBIT_FGCG_CTRL_4 },
        { "EMC_PMACRO_PERBIT_FGCG_CTRL_5", EMC_PMACRO_PERBIT_FGCG_CTRL_5 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_0", EMC_PMACRO_PERBIT_RFU_CTRL_0 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_1", EMC_PMACRO_PERBIT_RFU_CTRL_1 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_2", EMC_PMACRO_PERBIT_RFU_CTRL_2 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_3", EMC_PMACRO_PERBIT_RFU_CTRL_3 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_4", EMC_PMACRO_PERBIT_RFU_CTRL_4 },
        { "EMC_PMACRO_PERBIT_RFU_CTRL_5", EMC_PMACRO_PERBIT_RFU_CTRL_5 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_0", EMC_PMACRO_PERBIT_RFU1_CTRL_0 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_1", EMC_PMACRO_PERBIT_RFU1_CTRL_1 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_2", EMC_PMACRO_PERBIT_RFU1_CTRL_2 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_3", EMC_PMACRO_PERBIT_RFU1_CTRL_3 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_4", EMC_PMACRO_PERBIT_RFU1_CTRL_4 },
        { "EMC_PMACRO_PERBIT_RFU1_CTRL_5", EMC_PMACRO_PERBIT_RFU1_CTRL_5 },
        { "EMC_TRAINING_CMD", EMC_TRAINING_CMD },
        { "EMC_TRAINING_CTRL", EMC_TRAINING_CTRL },
        { "EMC_TRAINING_STATUS", EMC_TRAINING_STATUS },
        { "EMC_TRAINING_QUSE_CORS_CTRL", EMC_TRAINING_QUSE_CORS_CTRL },
        { "EMC_TRAINING_QUSE_FINE_CTRL", EMC_TRAINING_QUSE_FINE_CTRL },
        { "EMC_TRAINING_QUSE_CTRL_MISC", EMC_TRAINING_QUSE_CTRL_MISC },
        { "EMC_TRAINING_WRITE_FINE_CTRL", EMC_TRAINING_WRITE_FINE_CTRL },
        { "EMC_TRAINING_WRITE_CTRL_MISC", EMC_TRAINING_WRITE_CTRL_MISC },
        { "EMC_TRAINING_WRITE_VREF_CTRL", EMC_TRAINING_WRITE_VREF_CTRL },
        { "EMC_TRAINING_READ_FINE_CTRL", EMC_TRAINING_READ_FINE_CTRL },
        { "EMC_TRAINING_READ_CTRL_MISC", EMC_TRAINING_READ_CTRL_MISC },
        { "EMC_TRAINING_READ_VREF_CTRL", EMC_TRAINING_READ_VREF_CTRL },
        { "EMC_TRAINING_CA_FINE_CTRL", EMC_TRAINING_CA_FINE_CTRL },
        { "EMC_TRAINING_CA_CTRL_MISC", EMC_TRAINING_CA_CTRL_MISC },
        { "EMC_TRAINING_CA_CTRL_MISC1", EMC_TRAINING_CA_CTRL_MISC1 },
        { "EMC_TRAINING_CA_VREF_CTRL", EMC_TRAINING_CA_VREF_CTRL },
        { "EMC_TRAINING_SETTLE", EMC_TRAINING_SETTLE },
        { "EMC_TRAINING_MPC", EMC_TRAINING_MPC },
        { "EMC_TRAINING_PATRAM_CTRL", EMC_TRAINING_PATRAM_CTRL },
        { "EMC_TRAINING_PATRAM_DQ", EMC_TRAINING_PATRAM_DQ },
        { "EMC_TRAINING_PATRAM_DMI", EMC_TRAINING_PATRAM_DMI },
        { "EMC_TRAINING_VREF_SETTLE", EMC_TRAINING_VREF_SETTLE },
        { "EMC_TRAINING_RW_OFFSET_IB_BYTE0", EMC_TRAINING_RW_OFFSET_IB_BYTE0 },
        { "EMC_TRAINING_RW_OFFSET_IB_BYTE1", EMC_TRAINING_RW_OFFSET_IB_BYTE1 },
        { "EMC_TRAINING_RW_OFFSET_IB_BYTE2", EMC_TRAINING_RW_OFFSET_IB_BYTE2 },
        { "EMC_TRAINING_RW_OFFSET_IB_BYTE3", EMC_TRAINING_RW_OFFSET_IB_BYTE3 },
        { "EMC_TRAINING_RW_OFFSET_IB_MISC", EMC_TRAINING_RW_OFFSET_IB_MISC },
        { "EMC_TRAINING_RW_OFFSET_OB_BYTE0", EMC_TRAINING_RW_OFFSET_OB_BYTE0 },
        { "EMC_TRAINING_RW_OFFSET_OB_BYTE1", EMC_TRAINING_RW_OFFSET_OB_BYTE1 },
        { "EMC_TRAINING_RW_OFFSET_OB_BYTE2", EMC_TRAINING_RW_OFFSET_OB_BYTE2 },
        { "EMC_TRAINING_RW_OFFSET_OB_BYTE3", EMC_TRAINING_RW_OFFSET_OB_BYTE3 },
        { "EMC_TRAINING_RW_OFFSET_OB_MISC", EMC_TRAINING_RW_OFFSET_OB_MISC },
        { "EMC_TRAINING_OPT_CA_VREF", EMC_TRAINING_OPT_CA_VREF },
        { "EMC_TRAINING_OPT_DQ_OB_VREF", EMC_TRAINING_OPT_DQ_OB_VREF },
        { "EMC_TRAINING_QUSE_VREF_CTRL", EMC_TRAINING_QUSE_VREF_CTRL },
        { "EMC_TRAINING_OPT_DQS_IB_VREF_RANK0", EMC_TRAINING_OPT_DQS_IB_VREF_RANK0 },
        { "EMC_TRAINING_OPT_DQS_IB_VREF_RANK1", EMC_TRAINING_OPT_DQS_IB_VREF_RANK1 },
    };

    constexpr inline size_t EmcTableSize = std::size(emcTable);
    constexpr u32 emc0Base = 0x7001b000;
    constexpr u32 emc1Base = 0x7001e000;
    constexpr u32 emc2Base = 0x7001f000;

}
