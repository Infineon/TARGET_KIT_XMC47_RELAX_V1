# KIT_XMC47_RELAX_V1 BSP

## Overview

The XMC4700 Relax Kit is an XMC4700 based microcontroller evaluation kit with Ethernet connection, CAN node and microSD Card slot included. It is hardware compatible with 3.3V Arduino Shields.     
**Note:**
Programming this kit requires installing 
[SEGGER J-Link software](https://www.segger.com/downloads/jlink/#J-LinkSoftwareAndDocumentationPack)

![](docs/html/board.png)

To use code from the BSP, simply include a reference to `cybsp.h`.

## Features

### Kit Features:

* XMC4700 (ARM® Cortex®-M4 based) Microcontroller in a LQFP144 package
* On-board Debug Probe with USB interface supporting SWD + SWO
* Detachable J-Link debugger and UART virtual COM port, with micro USB connector
* Virtual COM Port via Debug Probe
* 2 x User Push-Buttons and 2 x User LED and 1 x Reset Push-Button
* Voltage Regulator 5 V -> 3.3 V
* USB (Micro USB Plug)
* 12 MHz Crystal
* 32.768 kHz RTC Crystal
* 0 Ohm Bridges for 3.3 V Arduino shields
* Ethernet PHY and RJ45 Jack
* 32 Mbit Quad-SPI Flash Memory
* microSD Card Slot
* CAN Transceiver

### Kit Contents:

* KIT_XMC47_RELAX_V1 evaluation board

## BSP Configuration

The BSP has a few hooks that allow its behavior to be configured. Some of these items are enabled by default while others must be explicitly enabled. Items enabled by default are specified in the KIT_XMC47_RELAX_V1.mk file. The items that are enabled can be changed by creating a custom BSP or by editing the application makefile.

Components:
* Device specific category reference (e.g.: CAT1) - This component, enabled by default, pulls in any device specific code for this board.

Defines:
* CYBSP_WIFI_CAPABLE - This define, disabled by default, causes the BSP to initialize the interface to an onboard wireless chip if it has one.
* CY_USING_HAL - This define, enabled by default, specifies that the HAL is intended to be used by the application. This will cause the BSP to include the applicable header file and to initialize the system level drivers.
* CYBSP_CUSTOM_SYSCLK_PM_CALLBACK - This define, disabled by default, causes the BSP to skip registering its default SysClk Power Management callback, if any, and instead to invoke the application-defined function `cybsp_register_custom_sysclk_pm_callback` to register an application-specific callback.



See the [BSP Setttings][settings] for additional board specific configuration settings.

## API Reference Manual

The KIT_XMC47_RELAX_V1 Board Support Package provides a set of APIs to configure, initialize and use the board resources.

See the [BSP API Reference Manual][api] for the complete list of the provided interfaces.

## More information
* [KIT_XMC47_RELAX_V1 BSP API Reference Manual][api]
* [KIT_XMC47_RELAX_V1 Documentation](https://www.infineon.com/cms/en/product/evaluation-boards/kit_xmc47_relax_v1/)
* [Cypress Semiconductor, an Infineon Technologies Company](http://www.cypress.com)
* [Infineon GitHub](https://github.com/infineon)
* [ModusToolbox™](https://www.cypress.com/products/modustoolbox-software-environment)

[api]: https://infineon.github.io/TARGET_KIT_XMC47_RELAX_V1/html/modules.html
[settings]: https://infineon.github.io/TARGET_KIT_XMC47_RELAX_V1/html/md_bsp_settings.html

---
© Cypress Semiconductor Corporation (an Infineon company) or an affiliate of Cypress Semiconductor Corporation, 2019-2022.