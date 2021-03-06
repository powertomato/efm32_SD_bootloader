/**************************************************************************//**
 * @file
 * @brief USART code for the EFM32 bootloader
 * @author Energy Micro AS
 * @version 1.65
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2013 Energy Micro AS, http://www.energymicro.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 * 4. The source and compiled code may only be used on Energy Micro "EFM32"
 *    microcontrollers and "EFR4" radios.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no
 * obligation to support this Software. Energy Micro AS is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Energy Micro AS will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 *****************************************************************************/

#ifndef _UART_H
#define _UART_H

#include <stdint.h>
#include "em_device.h"
#include "compiler.h"

__RAMFUNC_PRE void USART_printHex(uint32_t integer) __RAMFUNC_POST;
__RAMFUNC_PRE int USART_txByte(uint8_t data) __RAMFUNC_POST;
__RAMFUNC_PRE uint8_t USART_rxByte(void) __RAMFUNC_POST;
__RAMFUNC_PRE void USART_printString(uint8_t *string) __RAMFUNC_POST;
void USART_init(uint32_t clkdiv);

#endif
