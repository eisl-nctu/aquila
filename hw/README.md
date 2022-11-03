# How to Create an Vivado Project Workspace for Aquila.
This is the hardware source tree of the Aquila SoC.

To create a complete Xilinx Vivado project workspace, simply download the source tree to a local directory, then run the following command under a DOS or Linux console:

```
<<Vivado Installation directory>>/bin/vivado -mode batch -source build.tcl
```

The created project workspace will be in the directory aquila_soc/. The user IP repository that contains the Aquila core will also be "copied" into this directory. Therefore, your modifications to the Aquila IP source code will be local to your project.


Note that, the tcl script, build.tcl, for project creation have been tested using Vivado 2022.1.

