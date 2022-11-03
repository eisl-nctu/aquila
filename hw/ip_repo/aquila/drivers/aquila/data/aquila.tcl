

proc generate {drv_handle} {
	xdefine_include_file $drv_handle "xparameters.h" "aquila" "NUM_INSTANCES" "DEVICE_ID"  "C_S_CONFIG_PORT_BASEADDR" "C_S_CONFIG_PORT_HIGHADDR"
}
