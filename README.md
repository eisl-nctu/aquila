# Aquila
Aquila is an open-source 32-bit RISC-V compliant processor for Xilinx FPGAs. The processor core is encapsulated as a reusable IP for Xilinx Vivado EDA tools. You can use the Vivado Block Diagram Editor to integrates Aquila with thousands of Vivado IPs to create an application processor SoC for different applications.

Currently, the microarchitecture of Aquila implements the classical five-stage pipeline RISC architecture with in-order execution. Since Aquila is intended for HW-SW codesigned intelligent systems, heavy-lifting tasks will be handled by HW accelerators. Therefore, we are not in a hurry to move over to a superscalar architecture. System-level stability and full-feature OS support will be the focus of development for now.

Aquila is designed for implementing intelligent system SoCs for Xilinx FPGAs from scratch. Therefore, in this preview version of Aquila, the default behavior of Aquila, when configured into a Xilinx FPGA, will execute a boot ROM to load a binary executable from the Host PC through the UART connection. We will provide different boot ROMs in the future to boot the system from other devices (such as the SD card).

# Specification
The current version of Aquila is 0.9. This is a pre-view version with the following specification:

- RV32IM ISA-compliant.
- CSRs & related instructions for M mode supported.
- L1 data and instruction caches implemented.
- CLINT implemented.

The following features are under development and should be ready by summer:

- Atomic instructions.
- MMU.
- S-mode CSRs.
- Multi-core support.
- Support for SD card I/O.

# Synthesis of Aquila
Aquila is developed and tested using Xilinx KC-705 development platform. Implementing an Aquila SoC would be fairly straightforward if you are familiar with the GUI IDE of Vivado. If you have to modify the boot ROM memory file (inside the BDM IP), the source code and build script of the boot ROM is under sw/uartboot/. Please refer to the User’s Guide for more details about the Aquila SoC.

We will provide Vivado workspace for other less expensive platforms, such as the Arty, soon. However, KC-705 will most likely the main development platform for Aquila SoCs.

# User's Guide
A simple user's guide to Aquila is available [here](https://github.com/eisl-nctu/aquila/blob/master/docs/aquila_manual.pdf).

# Snapshots of Vivado workspace of Aquila
It would be more convenient for users to test out Aquila if we archive different versions of the Vivado workspaces for Aquila. So, here it is.

- Aquila version [0.9 preview](https://github.com/eisl-nctu/aquila/tree/master/archive/aquila_soc_0.9_preview.tgz). Tested with Vivado 2018.2 on Xilinx KC705.

# Acknowledgment
This work is partly funded by the Chip Implementation Center (CIC), National Applied Research Laboratories, Taiwan, ROC.

# Contact Info
Embedded Intelligent Systems Lab (EISL)  
Department of Computer Science  
National Chiao Tung University  
  
eisl.nctu-at-gmail
