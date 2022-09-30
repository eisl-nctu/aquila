# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "C_M_DMEM_PORT_ID_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "C_M_DMEM_PORT_ADDR_WIDTH" -parent ${Page_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_DMEM_PORT_DATA_WIDTH" -parent ${Page_0} -widget comboBox
  ipgui::add_param $IPINST -name "C_M_DMEM_PORT_AWUSER_WIDTH" -parent ${Page_0}
  ipgui::add_param $IPINST -name "C_M_DMEM_PORT_ARUSER_WIDTH" -parent ${Page_0}
  set C_M_DMEM_PORT_WUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_DMEM_PORT_WUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Write Data Bus} ${C_M_DMEM_PORT_WUSER_WIDTH}
  set C_M_DMEM_PORT_RUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_DMEM_PORT_RUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Read Data Bus} ${C_M_DMEM_PORT_RUSER_WIDTH}
  set C_M_DMEM_PORT_BUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_DMEM_PORT_BUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Response Bus} ${C_M_DMEM_PORT_BUSER_WIDTH}
  set C_M_DEVICE_PORT_ADDR_WIDTH [ipgui::add_param $IPINST -name "C_M_DEVICE_PORT_ADDR_WIDTH" -parent ${Page_0} -widget comboBox]
  set_property tooltip {Width of M_AXI address bus.      // The master generates the read and write addresses of width specified as C_M_AXI_ADDR_WIDTH.} ${C_M_DEVICE_PORT_ADDR_WIDTH}
  set C_M_DEVICE_PORT_DATA_WIDTH [ipgui::add_param $IPINST -name "C_M_DEVICE_PORT_DATA_WIDTH" -parent ${Page_0} -widget comboBox]
  set_property tooltip {Width of M_AXI data bus.      // The master issues write data and accept read data where the width of the data bus is C_M_AXI_DATA_WIDTH} ${C_M_DEVICE_PORT_DATA_WIDTH}
  set C_M_IMEM_PORT_ID_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_ID_WIDTH" -parent ${Page_0}]
  set_property tooltip {Thread ID Width} ${C_M_IMEM_PORT_ID_WIDTH}
  set C_M_IMEM_PORT_ADDR_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_ADDR_WIDTH" -parent ${Page_0} -widget comboBox]
  set_property tooltip {Width of Address Bus} ${C_M_IMEM_PORT_ADDR_WIDTH}
  set C_M_IMEM_PORT_DATA_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_DATA_WIDTH" -parent ${Page_0} -widget comboBox]
  set_property tooltip {Width of Data Bus} ${C_M_IMEM_PORT_DATA_WIDTH}
  set C_M_IMEM_PORT_AWUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_AWUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Write Address Bus} ${C_M_IMEM_PORT_AWUSER_WIDTH}
  set C_M_IMEM_PORT_ARUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_ARUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Read Address Bus} ${C_M_IMEM_PORT_ARUSER_WIDTH}
  set C_M_IMEM_PORT_WUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_WUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Write Data Bus} ${C_M_IMEM_PORT_WUSER_WIDTH}
  set C_M_IMEM_PORT_RUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_RUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Read Data Bus} ${C_M_IMEM_PORT_RUSER_WIDTH}
  set C_M_IMEM_PORT_BUSER_WIDTH [ipgui::add_param $IPINST -name "C_M_IMEM_PORT_BUSER_WIDTH" -parent ${Page_0}]
  set_property tooltip {Width of User Response Bus} ${C_M_IMEM_PORT_BUSER_WIDTH}


}

proc update_PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_ADDR_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_ADDR_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH } {
	# Procedure called to update C_M_IMEM_PORT_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH { PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH } {
	# Procedure called to validate C_M_IMEM_PORT_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_ID_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_ID_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_ADDR_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_ADDR_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_DATA_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_AWUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_AWUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_ARUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_ARUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_WUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_WUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_RUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_RUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH } {
	# Procedure called to update C_M_DMEM_PORT_BUSER_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH { PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH } {
	# Procedure called to validate C_M_DMEM_PORT_BUSER_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH } {
	# Procedure called to update C_M_DEVICE_PORT_ADDR_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH { PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH } {
	# Procedure called to validate C_M_DEVICE_PORT_ADDR_WIDTH
	return true
}

proc update_PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH { PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH } {
	# Procedure called to update C_M_DEVICE_PORT_DATA_WIDTH when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH { PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH } {
	# Procedure called to validate C_M_DEVICE_PORT_DATA_WIDTH
	return true
}


proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH { MODELPARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_DMEM_PORT_BUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH { MODELPARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH}] ${MODELPARAM_VALUE.C_M_DEVICE_PORT_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH { MODELPARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_DEVICE_PORT_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_ID_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_ADDR_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_DATA_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_AWUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_ARUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_WUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_RUSER_WIDTH}
}

proc update_MODELPARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH { MODELPARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH}] ${MODELPARAM_VALUE.C_M_IMEM_PORT_BUSER_WIDTH}
}

