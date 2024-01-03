/* SPDX-License-Identifier: Apache-2.0 */

#ifndef __SUN8IW8_REG_CCU_H__
#define __SUN8IW8_REG_CCU_H__

#include <reg-ncat.h>

#define CCU_BASE (0x01c20000)

#define CCU_PLL_CPU_CTRL (0x000)
#define CCU_PLL_AUDIO_CTRL (0x008)
#define CCU_PLL_VIDEO_CTRL (0x010)
#define CCU_PLL_VE_CTRL (0x018)
#define CCU_PLL_DDR0_CTRL (0x020)
#define CCU_PLL_PERIPH0_CTRL (0x028)
#define CCU_PLL_ISP_CTRL (0x02c)
#define CCU_PLL_PERIPH1_CTRL (0x044)
#define CCU_PLL_DDR1_CTRL (0x04c)

#define CCU_CPU_AXI_CFG (0x050)
#define CCU_AHB_APB0_CFG (0x054)
#define CCU_APB1_CFG (0x058)
#define CCU_AHB2_CFG (0x05c)

#define CCU_BUS_CLK_GATE0 (0x060)
#define CCU_BUS_CLK_GATE1 (0x064)
#define CCU_BUS_CLK_GATE2 (0x068)
#define CCU_BUS_CLK_GATE3 (0x06c)
#define CCU_BUS_CLK_GATE4 (0x070)

#define CCU_SDMMC0_CLK (0x088)
#define CCU_SDMMC1_CLK (0x08c)
#define CCU_SDMMC2_CLK (0x090)
#define CCU_CE_CLK (0x09c)
#define CCU_SPI0_CLK (0x0a0)
#define CCU_USBPHY_CFG (0x0cc)
#define CCU_DRAM_CFG (0x0f4)
#define CCU_PLL_DDR1_CFG (0x0f8)
#define CCU_MBUS_RST (0x0fc)
#define CCU_DRAM_CLK_GATE (0x100)
#define CCU_TCON_CLK (0x118)
#define CCU_CSI_MISC_CLK (0x130)
#define CCU_CSI_CLK (0x134)
#define CCU_VE_CLK (0x13c)
#define CCU_AC_DIG_CLK (0x140)
#define CCU_AVS_CLK (0x144)
#define CCU_MBUS_CLK (0x15c)
#define CCU_MIPI_CSI_CLK (0x16c)

#define CCU_PLL_STABLE_TIME0 (0x200)
#define CCU_PLL_STABLE_TIME1 (0x204)
#define CCU_PLL_CPU_BIAS (0x220)
#define CCU_PLL_AUDIO_BIAS (0x224)
#define CCU_PLL_VIDEO_BIAS (0x228)
#define CCU_PLL_VE_BIAS (0x22c)
#define CCU_PLL_DDR0_BIAS (0x230)
#define CCU_PLL_PERIPH0_BIAS (0x234)
#define CCU_PLL_ISP_BIAS (0x238)
#define CCU_PLL_PERIPH1_BIAS (0x244)
#define CCU_PLL_DDR1_BIAS (0x24C)
#define CCU_PLL_CPU_TUN (0x250)
#define CCU_PLL_DDR0_TUN (0x260)
#define CCU_PLL_CPU_PAT (0x280)
#define CCU_PLL_AUDIO_PAT (0x284)
#define CCU_PLL_VIDEO_PAT (0x288)
#define CCU_PLL_VE_PAT (0x28c)
#define CCU_PLL_DDR0_PAT (0x290)
#define CCU_PLL_ISP_PAT (0x298)
#define CCU_PLL_PERIPH1_PAT (0x2a4)
#define CCU_PLL_DDR1_PAT0 (0x2ac)
#define CCU_PLL_DDR1_PAT1 (0x2b0)

#define CCU_BUS_SOFT_RST0 (0x2c0)
#define CCU_BUS_SOFT_RST1 (0x2c4)
#define CCU_BUS_SOFT_RST2 (0x2c8)
#define CCU_BUS_SOFT_RST3 (0x2d0)
#define CCU_BUS_SOFT_RST4 (0x2d8)

#define CCU_PS_CTRL (0x300)
#define CCU_PS_CNT (0x304)

#endif// __SUN8IW8_REG_CCU_H__
