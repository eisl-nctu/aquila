This is the hardware source tree of the Aquila SoC.

To create a complete Xilinx Vivado project workspace, simply download the source tree to a local directory, then run the following command under a DOS or Linux console:

```
C:\> <<Vivado Installation directory>>/bin/vivado.bat -mode batch -source build.tcl
```

The created project workspace will be in the directory aquila_soc/. Note that, the tcl script, build.tcl, for project creation was exported from Vivado 2018.2.

Note that the tcl script is sensitive to Vivado versions. If you are using a newer one, you may have to change the version ID of the related IPs in the tcl script and in the block design file, aquila_soc.bd.
