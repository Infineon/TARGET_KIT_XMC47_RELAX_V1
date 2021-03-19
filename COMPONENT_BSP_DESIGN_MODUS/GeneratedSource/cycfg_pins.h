/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.3.0.3651
* mtb-xmclib-cat3 3.0.0.276
* personalities 5.0.0.0
* udd 3.0.0.905
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "xmc_gpio.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_USER_BTN2_ENABLED 1U
#define CYBSP_USER_BTN2_PORT XMC_GPIO_PORT15
#define CYBSP_USER_BTN2_PORT_NUM 15U
#define CYBSP_USER_BTN2_PIN 12U
#ifndef ioss_0_port_15_pin_12_INPUT
	#define ioss_0_port_15_pin_12_INPUT 0U
#endif
#define CYBSP_USER_BTN2_MODE (XMC_GPIO_MODE_INPUT_TRISTATE | ioss_0_port_15_pin_12_INPUT)
#ifndef ioss_0_port_15_pin_12_HWCTRL
	#define ioss_0_port_15_pin_12_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_BTN2_HWCTRL ioss_0_port_15_pin_12_HWCTRL
#define CYBSP_USER_BTN_ENABLED 1U
#define CYBSP_USER_BTN1_ENABLED CYBSP_USER_BTN_ENABLED
#define CYBSP_USER_BTN_PORT XMC_GPIO_PORT15
#define CYBSP_USER_BTN1_PORT CYBSP_USER_BTN_PORT
#define CYBSP_USER_BTN_PORT_NUM 15U
#define CYBSP_USER_BTN1_PORT_NUM CYBSP_USER_BTN_PORT_NUM
#define CYBSP_USER_BTN_PIN 13U
#define CYBSP_USER_BTN1_PIN CYBSP_USER_BTN_PIN
#ifndef ioss_0_port_15_pin_13_INPUT
	#define ioss_0_port_15_pin_13_INPUT 0U
#endif
#define CYBSP_USER_BTN_MODE (XMC_GPIO_MODE_INPUT_TRISTATE | ioss_0_port_15_pin_13_INPUT)
#define CYBSP_USER_BTN1_MODE CYBSP_USER_BTN_MODE
#ifndef ioss_0_port_15_pin_13_HWCTRL
	#define ioss_0_port_15_pin_13_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_BTN_HWCTRL ioss_0_port_15_pin_13_HWCTRL
#define CYBSP_USER_BTN1_HWCTRL CYBSP_USER_BTN_HWCTRL
#define CYBSP_ETH_CLK_PORT XMC_GPIO_PORT15
#define CYBSP_ETH_CLK_PORT_NUM 15U
#define CYBSP_ETH_CLK_PIN 8U
#define CYBSP_ETH_CRS_PORT XMC_GPIO_PORT15
#define CYBSP_ETH_CRS_PORT_NUM 15U
#define CYBSP_ETH_CRS_PIN 9U
#define CYBSP_CAN_TX_PORT XMC_GPIO_PORT1
#define CYBSP_CAN_TX_PORT_NUM 1U
#define CYBSP_CAN_TX_PIN 12U
#define CYBSP_CAN_RX_PORT XMC_GPIO_PORT1
#define CYBSP_CAN_RX_PORT_NUM 1U
#define CYBSP_CAN_RX_PIN 13U
#define CYBSP_DEBUG_UART_RX_PORT XMC_GPIO_PORT1
#define CYBSP_DEBUG_UART_RX_PORT_NUM 1U
#define CYBSP_DEBUG_UART_RX_PIN 4U
#define CYBSP_DEBUG_UART_TX_PORT XMC_GPIO_PORT1
#define CYBSP_DEBUG_UART_TX_PORT_NUM 1U
#define CYBSP_DEBUG_UART_TX_PIN 5U
#define CYBSP_MMC_DAT1_PORT XMC_GPIO_PORT1
#define CYBSP_MMC_DAT1_PORT_NUM 1U
#define CYBSP_MMC_DAT1_PIN 6U
#define CYBSP_MMC_DAT2_PORT XMC_GPIO_PORT1
#define CYBSP_MMC_DAT2_PORT_NUM 1U
#define CYBSP_MMC_DAT2_PIN 7U
#define CYBSP_ETH_MDIO_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_MDIO_PORT_NUM 2U
#define CYBSP_ETH_MDIO_PIN 0U
#define CYBSP_SWO_PORT XMC_GPIO_PORT2
#define CYBSP_SWO_PORT_NUM 2U
#define CYBSP_SWO_PIN 1U
#define CYBSP_ETH_RXD0_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_RXD0_PORT_NUM 2U
#define CYBSP_ETH_RXD0_PIN 2U
#define CYBSP_ETH_RXD1_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_RXD1_PORT_NUM 2U
#define CYBSP_ETH_RXD1_PIN 3U
#define CYBSP_ETH_RXER_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_RXER_PORT_NUM 2U
#define CYBSP_ETH_RXER_PIN 4U
#define CYBSP_ETH_TXEN_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_TXEN_PORT_NUM 2U
#define CYBSP_ETH_TXEN_PIN 5U
#define CYBSP_ETH_MDC_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_MDC_PORT_NUM 2U
#define CYBSP_ETH_MDC_PIN 7U
#define CYBSP_ETH_TXD0_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_TXD0_PORT_NUM 2U
#define CYBSP_ETH_TXD0_PIN 8U
#define CYBSP_ETH_TXD1_PORT XMC_GPIO_PORT2
#define CYBSP_ETH_TXD1_PORT_NUM 2U
#define CYBSP_ETH_TXD1_PIN 9U
#define CYBSP_MMC_CMD_PORT XMC_GPIO_PORT3
#define CYBSP_MMC_CMD_PORT_NUM 3U
#define CYBSP_MMC_CMD_PIN 5U
#define CYBSP_MMC_CLK_PORT XMC_GPIO_PORT3
#define CYBSP_MMC_CLK_PORT_NUM 3U
#define CYBSP_MMC_CLK_PIN 6U
#define CYBSP_MMC_DAT3_PORT XMC_GPIO_PORT4
#define CYBSP_MMC_DAT3_PORT_NUM 4U
#define CYBSP_MMC_DAT3_PIN 0U
#define CYBSP_MMC_DAT0_PORT XMC_GPIO_PORT4
#define CYBSP_MMC_DAT0_PORT_NUM 4U
#define CYBSP_MMC_DAT0_PIN 1U
#define CYBSP_QSPI_SCK_PORT XMC_GPIO_PORT4
#define CYBSP_QSPI_SCK_PORT_NUM 4U
#define CYBSP_QSPI_SCK_PIN 2U
#define CYBSP_SS_PORT XMC_GPIO_PORT4
#define CYBSP_SS_PORT_NUM 4U
#define CYBSP_SS_PIN 3U
#define CYBSP_QSPI_D3_PORT XMC_GPIO_PORT4
#define CYBSP_QSPI_D3_PORT_NUM 4U
#define CYBSP_QSPI_D3_PIN 4U
#define CYBSP_QSPI_D2_PORT XMC_GPIO_PORT4
#define CYBSP_QSPI_D2_PORT_NUM 4U
#define CYBSP_QSPI_D2_PIN 5U
#define CYBSP_QSPI_D1_PORT XMC_GPIO_PORT4
#define CYBSP_QSPI_D1_PORT_NUM 4U
#define CYBSP_QSPI_D1_PIN 6U
#define CYBSP_QSPI_D0_PORT XMC_GPIO_PORT4
#define CYBSP_QSPI_D0_PORT_NUM 4U
#define CYBSP_QSPI_D0_PIN 7U
#define CYBSP_USER_LED2_ENABLED 1U
#define CYBSP_USER_LED2_PORT XMC_GPIO_PORT5
#define CYBSP_USER_LED2_PORT_NUM 5U
#define CYBSP_USER_LED2_PIN 8U
#ifndef ioss_0_port_5_pin_8_ALT
	#define ioss_0_port_5_pin_8_ALT 0U
#endif
#define CYBSP_USER_LED2_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_5_pin_8_ALT)
#ifndef ioss_0_port_5_pin_8_HWCTRL
	#define ioss_0_port_5_pin_8_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED2_HWCTRL ioss_0_port_5_pin_8_HWCTRL
#define CYBSP_USER_LED_ENABLED 1U
#define CYBSP_USER_LED1_ENABLED CYBSP_USER_LED_ENABLED
#define CYBSP_USER_LED_PORT XMC_GPIO_PORT5
#define CYBSP_USER_LED1_PORT CYBSP_USER_LED_PORT
#define CYBSP_USER_LED_PORT_NUM 5U
#define CYBSP_USER_LED1_PORT_NUM CYBSP_USER_LED_PORT_NUM
#define CYBSP_USER_LED_PIN 9U
#define CYBSP_USER_LED1_PIN CYBSP_USER_LED_PIN
#ifndef ioss_0_port_5_pin_9_ALT
	#define ioss_0_port_5_pin_9_ALT 0U
#endif
#define CYBSP_USER_LED_MODE (XMC_GPIO_MODE_OUTPUT_PUSH_PULL | ioss_0_port_5_pin_9_ALT)
#define CYBSP_USER_LED1_MODE CYBSP_USER_LED_MODE
#ifndef ioss_0_port_5_pin_9_HWCTRL
	#define ioss_0_port_5_pin_9_HWCTRL XMC_GPIO_HWCTRL_DISABLED
#endif
#define CYBSP_USER_LED_HWCTRL ioss_0_port_5_pin_9_HWCTRL
#define CYBSP_USER_LED1_HWCTRL CYBSP_USER_LED_HWCTRL

extern const XMC_GPIO_CONFIG_t CYBSP_USER_BTN2_config;
extern const XMC_GPIO_CONFIG_t CYBSP_USER_BTN_config;
#define CYBSP_USER_BTN1_config CYBSP_USER_BTN_config
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED2_config;
extern const XMC_GPIO_CONFIG_t CYBSP_USER_LED_config;
#define CYBSP_USER_LED1_config CYBSP_USER_LED_config

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
