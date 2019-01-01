/**
  ******************************************************************************
  * @file    stm32l0xx_hal_cryp_ex.h
  * @author  MCD Application Team
  * @version V1.5.0
  * @date    8-January-2016
  * @brief   Header file of CRYPEx HAL module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L0xx_HAL_CRYP_EX_H
#define __STM32L0xx_HAL_CRYP_EX_H

#ifdef __cplusplus
 extern "C" {
#endif
   
#if defined (STM32L021xx) || defined (STM32L041xx) || defined (STM32L061xx) || defined (STM32L062xx) || defined (STM32L063xx) || (STM32L081xx) || defined (STM32L082xx) || defined (STM32L083xx)

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal_def.h"

/** @addtogroup STM32L0xx_HAL_Driver
  * @{
  */

/** @defgroup CRYPEx CRYPEx
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/ 
/* Exported constants --------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/** @defgroup CRYPEx_Exported_Functions CRYPEx Exported Functions
  * @{
  */

/** @defgroup CRYPEx_Exported_Functions_Group1 Extended features functions
  * @{
  */

/* CallBack functions  ********************************************************/
void HAL_CRYPEx_ComputationCpltCallback(CRYP_HandleTypeDef *hcryp);

/**
  * @}
  */ 

/**
  * @}
  */

/**
  * @}
  */ 

/**
  * @}
  */ 
  
#endif /* STM32L021xx || STM32L041xx || STM32L061xx || STM32L062xx || STM32L063xx || STM32L081xx || STM32L082xx || STM32L083xx */

#ifdef __cplusplus
}
#endif

#endif /* __STM32L0xx_HAL_CRYP_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

