# KIT_XMC47_RELAX_V1 BSP Release Notes
This is Early Access Software for XMC devices in ModusToolbox. This software is made available for evaluation purposes only and is not recommended for production development. <p>The XMC4700 Relax Kit is an XMC4700 based microcontroller evaluation kit with Ethernet connection, CAN node and microSD Card slot included. It is hardware compatible with 3.3V Arduino™ Shields.

NOTE: BSPs are versioned by family. This means that version 1.2.0 of any BSP in a family (eg: PSoC 6) will have the same software maturity level. However, not all updates are necessarily applicable for each BSP in the family so not all version numbers will exist for each board. Additionally, new BSPs may not start at version 1.0.0. In the event of adding a common feature across all BSPs, the libraries are assigned the same version number. For example if BSP_A is at v1.3.0 and BSP_B is at v1.2.0, the event will trigger a version update to v1.4.0 for both BSP_A and BSP_B. This allows the common feature to be tracked in a consistent way.

### What's Included?
The KIT_XMC47_RELAX_V1 library includes the following:
* BSP specific makefile to configure the build process for the board
* cybsp.c/h files to initialize the board and any system peripherals
* cybsp_types.h file describing basic board setup
* Linker script & startup code for GCC, IAR, ARM toolchains
* Configurator design files (and generated code) to setup board specific peripherals
* .lib file references for all dependent libraries
* API documentation

### What Changed?
#### v0.5.0
* Initial pre-production release

### Supported Software and Tools
This version of the KIT_XMC47_RELAX_V1 BSP was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| ModusToolbox Software Environment         | 2.2.1   |
| GCC Compiler                              | 9.2     |
| IAR Compiler                              | 8.4     |
| ARM Compiler                              | 6.11    |

Minimum required ModusToolbox Software Environment: v2.2.1

### More information
* [KIT_XMC47_RELAX_V1 BSP API Reference Manual][api]
* [KIT_XMC47_RELAX_V1 Documentation](https://www.infineon.com/cms/en/product/evaluation-boards/kit_xmc47_relax_v1/)
* [Cypress Semiconductor, an Infineon Technologies Company](http://www.cypress.com)
* [Cypress Semiconductor GitHub](https://github.com/cypresssemiconductorco)
* [ModusToolbox](https://www.cypress.com/products/modustoolbox-software-environment)

[api]: modules.html

---
© Cypress Semiconductor Corporation, 2019-2020.