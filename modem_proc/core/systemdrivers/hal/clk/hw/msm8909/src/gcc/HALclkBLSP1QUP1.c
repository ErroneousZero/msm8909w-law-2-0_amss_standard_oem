/*
==============================================================================

FILE:         HALclkBLSP1QUP1.c

DESCRIPTION:
   This auto-generated file contains the clock HAL code for the 
   BLSP1 QUP1 clocks.

   List of clock domains:
   -HAL_clk_mGCCBLSP1QUP1I2CClkDomain
   -HAL_clk_mGCCBLSP1QUP1SPIClkDomain


==============================================================================

                             Edit History

$Header: //components/rel/core.mpss/3.5.c12.3/systemdrivers/hal/clk/hw/msm8909/src/gcc/HALclkBLSP1QUP1.c#1 $

when          who     what, where, why
----------    ---     --------------------------------------------------------
09/26/2013            Auto-generated.

==============================================================================
            Copyright (c) 2013 QUALCOMM Technologies Incorporated.
                    All Rights Reserved.
                  QUALCOMM Proprietary/GTDR
==============================================================================
*/

/*============================================================================

                     INCLUDE FILES FOR MODULE

============================================================================*/


#include <HALhwio.h>

#include "HALclkInternal.h"
#include "HALclkTest.h"
#include "HALclkGeneric.h"
#include "HALclkHWIO.h"


/*============================================================================

             DEFINITIONS AND DECLARATIONS FOR MODULE

=============================================================================*/


/* ============================================================================
**    Prototypes
** ==========================================================================*/


/* ============================================================================
**    Externs
** ==========================================================================*/

extern HAL_clk_ClockDomainControlType  HAL_clk_mGCCClockDomainControl;


/* ============================================================================
**    Data
** ==========================================================================*/

                                    
/*                           
 *  HAL_clk_mBLSP1QUP1I2CClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mBLSP1QUP1I2CClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_blsp1_qup1_i2c_apps_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_BLSP1_QUP1_I2C_APPS_CBCR), HWIO_OFFS(GCC_BLSP1_QUP1_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_BLSP1_QUP1_I2C_APPS_CLK
  },
};


/*
 * HAL_clk_mGCCBLSP1QUP1I2CClkDomain
 *
 * BLSP1 QUP1 I2C clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCBLSP1QUP1I2CClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_BLSP1_QUP1_I2C_APPS_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mBLSP1QUP1I2CClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mBLSP1QUP1I2CClkDomainClks)/sizeof(HAL_clk_mBLSP1QUP1I2CClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl,
  /* .pmNextClockDomain    = */ NULL
};


                                    
/*                           
 *  HAL_clk_mBLSP1QUP1SPIClkDomainClks
 *                  
 *  List of clocks supported by this domain.
 */
static HAL_clk_ClockDescType HAL_clk_mBLSP1QUP1SPIClkDomainClks[] =
{
  {
    /* .szClockName      = */ "gcc_blsp1_qup1_spi_apps_clk",
    /* .mRegisters       = */ { HWIO_OFFS(GCC_BLSP1_QUP1_SPI_APPS_CBCR), HWIO_OFFS(GCC_BLSP1_QUP1_BCR), {0, 0} },
    /* .pmControl        = */ &HAL_clk_mGenericClockControl,
    /* .nTestClock       = */ HAL_CLK_GCC_TEST_GCC_BLSP1_QUP1_SPI_APPS_CLK
  },
};


/*
 * HAL_clk_mGCCBLSP1QUP1SPIClkDomain
 *
 * BLSP1 QUP1 SPI clock domain.
 */
HAL_clk_ClockDomainDescType HAL_clk_mGCCBLSP1QUP1SPIClkDomain =
{
  /* .nCGRAddr             = */ HWIO_OFFS(GCC_BLSP1_QUP1_SPI_APPS_CMD_RCGR),
  /* .pmClocks             = */ HAL_clk_mBLSP1QUP1SPIClkDomainClks,
  /* .nClockCount          = */ sizeof(HAL_clk_mBLSP1QUP1SPIClkDomainClks)/sizeof(HAL_clk_mBLSP1QUP1SPIClkDomainClks[0]),
  /* .pmControl            = */ &HAL_clk_mGCCClockDomainControl,
  /* .pmNextClockDomain    = */ NULL
};

