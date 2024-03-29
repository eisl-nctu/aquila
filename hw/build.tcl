#*****************************************************************************************
# Vivado (TM) v2022.1 (64-bit)
#
# aquila_soc.tcl: Tcl script for re-creating project 'aquila_soc'
#
# This file contains the Vivado Tcl commands for re-creating the project to the state*
# when this script was generated. In order to re-create the project, please source this
# file in the Vivado Tcl Shell.
#
# * Note that the created project will be configured the same way as the original project,
#   however they will not be launched automatically. To regenerate the run results please
#   launch the synthesis/implementation runs as needed.
#
#*****************************************************************************************
#  This file was auto-generated by Vivado and manually edited by Chun-Jen Tsai on
#  7/31/2021 to allow Vivado and IP version independency.
#
#  The variable $ip_repo_dir must point to the user IP repository.
#  The project will be created under aquila_soc in the current directory
#*****************************************************************************************

# Set the user IP repository directory
set ip_repo_src "."

# Set the project name
set proj_name "aquila_soc"

# Create project and set project platform for KC-705
create_project $proj_name $proj_name -part xc7k325tffg900-2
set_property -name "board_part" -value "xilinx.com:kc705:part0:1.6" -objects [current_project]

# Create project and set project platform for Genesis II
#create_project $proj_name $proj_name -part xc7a100tcsg324-1
#set_property -name "board_part" -value "digilentinc.com:arty-a7-100:part0:1.0" -objects [current_project]

# Create 'sources_1' fileset (if not found)
if {[string equal [get_filesets -quiet sources_1] ""]} {
  create_fileset -srcset sources_1
}

# Set IP repository paths
file copy -force $ip_repo_src/ip_repo $proj_name/
file rename $proj_name/ip_repo/aquila/hdl/xdc/aquila_ooc_arty.xdc $proj_name/ip_repo/aquila/hdl/xdc/aquila_ooc.xdc
set obj [get_filesets sources_1]
if { $obj != {} } {
   set_property "ip_repo_paths" "[file normalize "$proj_name/ip_repo"]" $obj

   # Rebuild user ip_repo's index before adding any source files
   update_ip_catalog -rebuild
}

# Define the target board to "KC705" for synthesis
set_property verilog_define KC705=true [get_filesets sources_1]

# Proc to create_block_design_aquila_soc
proc create_block_design_aquila_soc { parentCell } {

  # CHANGE DESIGN NAME HERE
  set design_name aquila_soc

  common::send_gid_msg -ssname BD::TCL -id 2010 -severity "INFO" "Currently there is no design <$design_name> in project, so creating one..."

  create_bd_design $design_name

  set bCheckIPsPassed 1
  ##################################################################
  # CHECK IPs
  ##################################################################
  set bCheckIPs 1
  if { $bCheckIPs == 1 } {
     set list_check_ips "\
  xilinx.com:user:aquila:*\
  xilinx.com:ip:axi_quad_spi:*\
  xilinx.com:ip:smartconnect:*\
  xilinx.com:ip:axi_uartlite:*\
  xilinx.com:ip:mig_7series:*\
  xilinx.com:ip:proc_sys_reset:*\
  "

   set list_ips_missing ""
   common::send_gid_msg -ssname BD::TCL -id 2011 -severity "INFO" "Checking if the following IPs exist in the project's IP catalog: $list_check_ips ."

   foreach ip_vlnv $list_check_ips {
      set ip_obj [get_ipdefs -all $ip_vlnv]
      if { $ip_obj eq "" } {
         lappend list_ips_missing $ip_vlnv
      }
   }

   if { $list_ips_missing ne "" } {
      catch {common::send_gid_msg -ssname BD::TCL -id 2012 -severity "ERROR" "The following IPs are not found in the IP Catalog:\n  $list_ips_missing\n\nResolution: Please add the repository containing the IP(s) to the project." }
      set bCheckIPsPassed 0
   }

  }

  if { $bCheckIPsPassed != 1 } {
    common::send_gid_msg -ssname BD::TCL -id 2023 -severity "WARNING" "Will not continue with creation of design due to the error(s) above."
    return 3
  }


  ##################################################################
  # MIG PRJ FILE TCL PROCs
  ##################################################################

  proc write_mig_file_aquila_soc_mig_7series_0_0 { str_mig_prj_filepath } {
     file mkdir [ file dirname "$str_mig_prj_filepath" ]
     set mig_prj_file [open $str_mig_prj_filepath  w+]

	puts $mig_prj_file {<?xml version='1.0' encoding='UTF-8'?>}
	puts $mig_prj_file {<!-- IMPORTANT: This is an internal file that has been generated by the MIG software. Any direct editing or changes made to this file may result in unpredictable behavior or data corruption. It is strongly advised that users do not edit the contents of this file. Re-run the MIG GUI with the required settings if any of the options provided below need to be altered. -->}
	puts $mig_prj_file {<Project NoOfControllers="1" >}
	puts $mig_prj_file {    <ModuleName>sys_mb_ddr3_mig_1_1_0</ModuleName>}
	puts $mig_prj_file {    <dci_inouts_inputs>1</dci_inouts_inputs>}
	puts $mig_prj_file {    <dci_inputs>1</dci_inputs>}
	puts $mig_prj_file {    <Debug_En>OFF</Debug_En>}
	puts $mig_prj_file {    <DataDepth_En>1024</DataDepth_En>}
	puts $mig_prj_file {    <LowPower_En>ON</LowPower_En>}
	puts $mig_prj_file {    <XADC_En>Enabled</XADC_En>}
	puts $mig_prj_file {    <TargetFPGA>xc7k325t-ffg900/-2</TargetFPGA>}
	puts $mig_prj_file {    <Version>1.9</Version>}
	puts $mig_prj_file {    <SystemClock>Differential</SystemClock>}
	puts $mig_prj_file {    <ReferenceClock>Use System Clock</ReferenceClock>}
	puts $mig_prj_file {    <SysResetPolarity>ACTIVE HIGH</SysResetPolarity>}
	puts $mig_prj_file {    <BankSelectionFlag>FALSE</BankSelectionFlag>}
	puts $mig_prj_file {    <InternalVref>0</InternalVref>}
	puts $mig_prj_file {    <dci_hr_inouts_inputs>50 Ohms</dci_hr_inouts_inputs>}
	puts $mig_prj_file {    <dci_cascade>1</dci_cascade>}
	puts $mig_prj_file {    <Controller number="0" >}
	puts $mig_prj_file {        <MemoryDevice>DDR3_SDRAM/SODIMMs/MT8JTF12864HZ-1G6</MemoryDevice>}
	puts $mig_prj_file {        <TimePeriod>1250</TimePeriod>}
	puts $mig_prj_file {        <VccAuxIO>1.8V</VccAuxIO>}
	puts $mig_prj_file {        <PHYRatio>4:1</PHYRatio>}
	puts $mig_prj_file {        <InputClkFreq>200</InputClkFreq>}
	puts $mig_prj_file {		<UIExtraClocks>1</UIExtraClocks>}
	puts $mig_prj_file {        <MMCMClkOut0> 8.000</MMCMClkOut0>}
	puts $mig_prj_file {        <MMCMClkOut1>1</MMCMClkOut1>}
	puts $mig_prj_file {        <MMCMClkOut2>1</MMCMClkOut2>}
	puts $mig_prj_file {        <MMCMClkOut3>1</MMCMClkOut3>}
	puts $mig_prj_file {        <MMCMClkOut4>1</MMCMClkOut4>}
	puts $mig_prj_file {        <DataWidth>64</DataWidth>}
	puts $mig_prj_file {        <DeepMemory>1</DeepMemory>}
	puts $mig_prj_file {        <DataMask>1</DataMask>}
	puts $mig_prj_file {        <ECC>Disabled</ECC>}
	puts $mig_prj_file {        <Ordering>Normal</Ordering>}
	puts $mig_prj_file {        <CustomPart>FALSE</CustomPart>}
	puts $mig_prj_file {        <NewPartName></NewPartName>}
	puts $mig_prj_file {        <RowAddress>14</RowAddress>}
	puts $mig_prj_file {        <ColAddress>10</ColAddress>}
	puts $mig_prj_file {        <BankAddress>3</BankAddress>}
	puts $mig_prj_file {        <MemoryVoltage>1.5V</MemoryVoltage>}
	puts $mig_prj_file {        <UserMemoryAddressMap>BANK_ROW_COLUMN</UserMemoryAddressMap>}
	puts $mig_prj_file {        <PinSelection>}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AH12" SLEW="FAST" name="ddr3_addr[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AF13" SLEW="FAST" name="ddr3_addr[10]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AE13" SLEW="FAST" name="ddr3_addr[11]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AJ11" SLEW="FAST" name="ddr3_addr[12]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AH11" SLEW="FAST" name="ddr3_addr[13]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AG13" SLEW="FAST" name="ddr3_addr[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AG12" SLEW="FAST" name="ddr3_addr[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AF12" SLEW="FAST" name="ddr3_addr[3]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AJ12" SLEW="FAST" name="ddr3_addr[4]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AJ13" SLEW="FAST" name="ddr3_addr[5]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AJ14" SLEW="FAST" name="ddr3_addr[6]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AH14" SLEW="FAST" name="ddr3_addr[7]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AK13" SLEW="FAST" name="ddr3_addr[8]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AK14" SLEW="FAST" name="ddr3_addr[9]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AH9" SLEW="FAST" name="ddr3_ba[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AG9" SLEW="FAST" name="ddr3_ba[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AK9" SLEW="FAST" name="ddr3_ba[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AC11" SLEW="FAST" name="ddr3_cas_n" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15" PADName="AH10" SLEW="FAST" name="ddr3_ck_n[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15" PADName="AG10" SLEW="FAST" name="ddr3_ck_p[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AF10" SLEW="FAST" name="ddr3_cke[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AC12" SLEW="FAST" name="ddr3_cs_n[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="Y16" SLEW="FAST" name="ddr3_dm[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AB17" SLEW="FAST" name="ddr3_dm[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AF17" SLEW="FAST" name="ddr3_dm[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AE16" SLEW="FAST" name="ddr3_dm[3]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AK5" SLEW="FAST" name="ddr3_dm[4]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AJ3" SLEW="FAST" name="ddr3_dm[5]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AF6" SLEW="FAST" name="ddr3_dm[6]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AC7" SLEW="FAST" name="ddr3_dm[7]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AA15" SLEW="FAST" name="ddr3_dq[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC19" SLEW="FAST" name="ddr3_dq[10]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD17" SLEW="FAST" name="ddr3_dq[11]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AA18" SLEW="FAST" name="ddr3_dq[12]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AB18" SLEW="FAST" name="ddr3_dq[13]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE18" SLEW="FAST" name="ddr3_dq[14]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD18" SLEW="FAST" name="ddr3_dq[15]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AG19" SLEW="FAST" name="ddr3_dq[16]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK19" SLEW="FAST" name="ddr3_dq[17]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AG18" SLEW="FAST" name="ddr3_dq[18]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF18" SLEW="FAST" name="ddr3_dq[19]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AA16" SLEW="FAST" name="ddr3_dq[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH19" SLEW="FAST" name="ddr3_dq[20]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ19" SLEW="FAST" name="ddr3_dq[21]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE19" SLEW="FAST" name="ddr3_dq[22]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD19" SLEW="FAST" name="ddr3_dq[23]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK16" SLEW="FAST" name="ddr3_dq[24]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ17" SLEW="FAST" name="ddr3_dq[25]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AG15" SLEW="FAST" name="ddr3_dq[26]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF15" SLEW="FAST" name="ddr3_dq[27]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH17" SLEW="FAST" name="ddr3_dq[28]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AG14" SLEW="FAST" name="ddr3_dq[29]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC14" SLEW="FAST" name="ddr3_dq[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH15" SLEW="FAST" name="ddr3_dq[30]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK15" SLEW="FAST" name="ddr3_dq[31]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK8" SLEW="FAST" name="ddr3_dq[32]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK6" SLEW="FAST" name="ddr3_dq[33]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AG7" SLEW="FAST" name="ddr3_dq[34]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF7" SLEW="FAST" name="ddr3_dq[35]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF8" SLEW="FAST" name="ddr3_dq[36]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK4" SLEW="FAST" name="ddr3_dq[37]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ8" SLEW="FAST" name="ddr3_dq[38]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ6" SLEW="FAST" name="ddr3_dq[39]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD14" SLEW="FAST" name="ddr3_dq[3]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH5" SLEW="FAST" name="ddr3_dq[40]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH6" SLEW="FAST" name="ddr3_dq[41]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ2" SLEW="FAST" name="ddr3_dq[42]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH2" SLEW="FAST" name="ddr3_dq[43]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AH4" SLEW="FAST" name="ddr3_dq[44]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ4" SLEW="FAST" name="ddr3_dq[45]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AK1" SLEW="FAST" name="ddr3_dq[46]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AJ1" SLEW="FAST" name="ddr3_dq[47]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF1" SLEW="FAST" name="ddr3_dq[48]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF2" SLEW="FAST" name="ddr3_dq[49]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AA17" SLEW="FAST" name="ddr3_dq[4]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE4" SLEW="FAST" name="ddr3_dq[50]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE3" SLEW="FAST" name="ddr3_dq[51]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF3" SLEW="FAST" name="ddr3_dq[52]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AF5" SLEW="FAST" name="ddr3_dq[53]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE1" SLEW="FAST" name="ddr3_dq[54]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE5" SLEW="FAST" name="ddr3_dq[55]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC1" SLEW="FAST" name="ddr3_dq[56]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD3" SLEW="FAST" name="ddr3_dq[57]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC4" SLEW="FAST" name="ddr3_dq[58]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC5" SLEW="FAST" name="ddr3_dq[59]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AB15" SLEW="FAST" name="ddr3_dq[5]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE6" SLEW="FAST" name="ddr3_dq[60]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD6" SLEW="FAST" name="ddr3_dq[61]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AC2" SLEW="FAST" name="ddr3_dq[62]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD4" SLEW="FAST" name="ddr3_dq[63]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AE15" SLEW="FAST" name="ddr3_dq[6]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="Y15" SLEW="FAST" name="ddr3_dq[7]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AB19" SLEW="FAST" name="ddr3_dq[8]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15_T_DCI" PADName="AD16" SLEW="FAST" name="ddr3_dq[9]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AC15" SLEW="FAST" name="ddr3_dqs_n[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="Y18" SLEW="FAST" name="ddr3_dqs_n[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AK18" SLEW="FAST" name="ddr3_dqs_n[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AJ16" SLEW="FAST" name="ddr3_dqs_n[3]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AJ7" SLEW="FAST" name="ddr3_dqs_n[4]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AH1" SLEW="FAST" name="ddr3_dqs_n[5]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG3" SLEW="FAST" name="ddr3_dqs_n[6]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AD1" SLEW="FAST" name="ddr3_dqs_n[7]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AC16" SLEW="FAST" name="ddr3_dqs_p[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="Y19" SLEW="FAST" name="ddr3_dqs_p[1]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AJ18" SLEW="FAST" name="ddr3_dqs_p[2]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AH16" SLEW="FAST" name="ddr3_dqs_p[3]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AH7" SLEW="FAST" name="ddr3_dqs_p[4]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG2" SLEW="FAST" name="ddr3_dqs_p[5]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AG4" SLEW="FAST" name="ddr3_dqs_p[6]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="DIFF_SSTL15_T_DCI" PADName="AD2" SLEW="FAST" name="ddr3_dqs_p[7]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AD8" SLEW="FAST" name="ddr3_odt[0]" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AD9" SLEW="FAST" name="ddr3_ras_n" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="LVCMOS15" PADName="AK3" SLEW="FAST" name="ddr3_reset_n" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="NORMAL" IOSTANDARD="SSTL15" PADName="AE9" SLEW="FAST" name="ddr3_we_n" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="DONTCARE" IOSTANDARD="DIFF_SSTL15" PADName="AD11" SLEW="" name="sys_clk_n" IN_TERM="" />}
	puts $mig_prj_file {            <Pin VCCAUX_IO="DONTCARE" IOSTANDARD="DIFF_SSTL15" PADName="AD12" SLEW="" name="sys_clk_p" IN_TERM="" />}
	puts $mig_prj_file {        </PinSelection>}
	puts $mig_prj_file {        <System_Clock>}
	puts $mig_prj_file {            <Pin PADName="AD12/AD11(CC_P/N)" Bank="33" name="sys_clk_p/n" />}
	puts $mig_prj_file {        </System_Clock>}
	puts $mig_prj_file {        <System_Control>}
	puts $mig_prj_file {            <Pin PADName="No connect" Bank="Select Bank" name="sys_rst" />}
	puts $mig_prj_file {            <Pin PADName="No connect" Bank="Select Bank" name="init_calib_complete" />}
	puts $mig_prj_file {            <Pin PADName="No connect" Bank="Select Bank" name="tg_compare_error" />}
	puts $mig_prj_file {        </System_Control>}
	puts $mig_prj_file {        <TimingParameters>}
	puts $mig_prj_file {            <Parameters twtr="7.5" trrd="6" trefi="7.8" tfaw="30" trtp="7.5" tcke="5" trfc="110" trp="13.75" tras="35" trcd="13.75" />}
	puts $mig_prj_file {        </TimingParameters>}
	puts $mig_prj_file {        <mrBurstLength name="Burst Length" >8 - Fixed</mrBurstLength>}
	puts $mig_prj_file {        <mrBurstType name="Read Burst Type and Length" >Sequential</mrBurstType>}
	puts $mig_prj_file {        <mrCasLatency name="CAS Latency" >11</mrCasLatency>}
	puts $mig_prj_file {        <mrMode name="Mode" >Normal</mrMode>}
	puts $mig_prj_file {        <mrDllReset name="DLL Reset" >No</mrDllReset>}
	puts $mig_prj_file {        <mrPdMode name="DLL control for precharge PD" >Slow Exit</mrPdMode>}
	puts $mig_prj_file {        <emrDllEnable name="DLL Enable" >Enable</emrDllEnable>}
	puts $mig_prj_file {        <emrOutputDriveStrength name="Output Driver Impedance Control" >RZQ/7</emrOutputDriveStrength>}
	puts $mig_prj_file {        <emrMirrorSelection name="Address Mirroring" >Disable</emrMirrorSelection>}
	puts $mig_prj_file {        <emrCSSelection name="Controller Chip Select Pin" >Enable</emrCSSelection>}
	puts $mig_prj_file {        <emrRTT name="RTT (nominal) - On Die Termination (ODT)" >RZQ/6</emrRTT>}
	puts $mig_prj_file {        <emrPosted name="Additive Latency (AL)" >0</emrPosted>}
	puts $mig_prj_file {        <emrOCD name="Write Leveling Enable" >Disabled</emrOCD>}
	puts $mig_prj_file {        <emrDQS name="TDQS enable" >Enabled</emrDQS>}
	puts $mig_prj_file {        <emrRDQS name="Qoff" >Output Buffer Enabled</emrRDQS>}
	puts $mig_prj_file {        <mr2PartialArraySelfRefresh name="Partial-Array Self Refresh" >Full Array</mr2PartialArraySelfRefresh>}
	puts $mig_prj_file {        <mr2CasWriteLatency name="CAS write latency" >8</mr2CasWriteLatency>}
	puts $mig_prj_file {        <mr2AutoSelfRefresh name="Auto Self Refresh" >Enabled</mr2AutoSelfRefresh>}
	puts $mig_prj_file {        <mr2SelfRefreshTempRange name="High Temparature Self Refresh Rate" >Normal</mr2SelfRefreshTempRange>}
	puts $mig_prj_file {        <mr2RTTWR name="RTT_WR - Dynamic On Die Termination (ODT)" >Dynamic ODT off</mr2RTTWR>}
	puts $mig_prj_file {        <PortInterface>AXI</PortInterface>}
	puts $mig_prj_file {        <AXIParameters>}
	puts $mig_prj_file {            <C0_C_RD_WR_ARB_ALGORITHM>RD_PRI_REG</C0_C_RD_WR_ARB_ALGORITHM>}
	puts $mig_prj_file {            <C0_S_AXI_ADDR_WIDTH>32</C0_S_AXI_ADDR_WIDTH>}
	puts $mig_prj_file {            <C0_S_AXI_DATA_WIDTH>512</C0_S_AXI_DATA_WIDTH>}
	puts $mig_prj_file {            <C0_S_AXI_ID_WIDTH>1</C0_S_AXI_ID_WIDTH>}
	puts $mig_prj_file {            <C0_S_AXI_SUPPORTS_NARROW_BURST>0</C0_S_AXI_SUPPORTS_NARROW_BURST>}
	puts $mig_prj_file {        </AXIParameters>}
	puts $mig_prj_file {    </Controller>}
	puts $mig_prj_file {</Project>}

     close $mig_prj_file
  }
  # End of write_mig_file_aquila_soc_mig_7series_0_0()

  ##################################################################
  # Constraint FILE TCL PROCs
  ##################################################################
  proc write_constraint_file { str_constraint_filepath } {
    file mkdir [ file dirname "$str_constraint_filepath" ]
    set constraint_file [open $str_constraint_filepath  w+]
    puts $constraint_file {set_property -dict {PACKAGE_PIN AC20 IOSTANDARD LVCMOS25} [get_ports io1_i_0];}
    puts $constraint_file {set_property -dict {PACKAGE_PIN AB22 IOSTANDARD LVCMOS25} [get_ports io0_o_0];}
    puts $constraint_file {set_property -dict {PACKAGE_PIN AB23 IOSTANDARD LVCMOS25} [get_ports sck_o_0];}
    puts $constraint_file {set_property -dict {PACKAGE_PIN AC21 IOSTANDARD LVCMOS25} [get_ports ss_o_0 ];}
    close $constraint_file
  }
  # End of write_constraint_file()

  variable script_folder

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2090 -severity "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2091 -severity "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set ddr3_sdram [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 ddr3_sdram ]

  set rs232_uart [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:uart_rtl:1.0 rs232_uart ]

  set sys_diff_clock [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:diff_clock_rtl:1.0 sys_diff_clock ]
  set_property -dict [ list \
   CONFIG.FREQ_HZ {100000000} \
  ] $sys_diff_clock


  # Create ports
  set io0_o_0 [ create_bd_port -dir O io0_o_0 ]
  set io1_i_0 [ create_bd_port -dir I io1_i_0 ]
  set reset [ create_bd_port -dir I -type rst reset ]
  set_property -dict [ list \
   CONFIG.POLARITY {ACTIVE_HIGH} \
 ] $reset
  set sck_o_0 [ create_bd_port -dir O sck_o_0 ]
  set ss_o_0 [ create_bd_port -dir O -from 0 -to 0 ss_o_0 ]

  # Create instance: aquila_0, and set properties
  set aquila_0 [ create_bd_cell -type ip -vlnv xilinx.com:user:aquila aquila_0 ]
  set_property -dict [ list \
   CONFIG.C_M_DMEM_PORT_RUSER_WIDTH {0} \
   CONFIG.C_M_DMEM_PORT_WUSER_WIDTH {0} \
   CONFIG.C_M_IMEM_PORT_ARUSER_WIDTH {0} \
   CONFIG.C_M_IMEM_PORT_AWUSER_WIDTH {0} \
   CONFIG.C_M_IMEM_PORT_BUSER_WIDTH {0} \
   CONFIG.C_M_IMEM_PORT_RUSER_WIDTH {0} \
   CONFIG.C_M_IMEM_PORT_WUSER_WIDTH {0} \
 ] $aquila_0

  # Create instance: axi_periph, and set properties
  set axi_periph [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect axi_periph ]
  set_property -dict [ list \
   CONFIG.NUM_MI {2} \
 ] $axi_periph

  # Create instance: axi_quad_spi_0, and set properties
  set axi_quad_spi_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_quad_spi axi_quad_spi_0 ]
  set_property -dict [ list \
   CONFIG.C_FIFO_DEPTH {256} \
   CONFIG.C_SCK_RATIO {4} \
   CONFIG.C_USE_STARTUP {0} \
   CONFIG.C_USE_STARTUP_INT {0} \
   CONFIG.C_TYPE_OF_AXI4_INTERFACE {1} \
 ] $axi_quad_spi_0

  # Create instance: axi_smc, and set properties
  set axi_smc [ create_bd_cell -type ip -vlnv xilinx.com:ip:smartconnect axi_smc ]
  set_property -dict [ list \
   CONFIG.NUM_CLKS {2} \
   CONFIG.NUM_SI {2} \
 ] $axi_smc

  # Create instance: axi_uartlite_0, and set properties
  set axi_uartlite_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_uartlite axi_uartlite_0 ]
  set_property -dict [ list \
   CONFIG.C_BAUDRATE {115200} \
   CONFIG.UARTLITE_BOARD_INTERFACE {rs232_uart} \
   CONFIG.USE_BOARD_FLOW {true} \
 ] $axi_uartlite_0

  # Create instance: mig_7series_0, and set properties
  set mig_7series_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:mig_7series mig_7series_0 ]

  # Generate the PRJ File for MIG
  set str_mig_folder [get_property IP_DIR [ get_ips [ get_property CONFIG.Component_Name $mig_7series_0 ] ] ]
  set str_mig_file_name board.prj
  set str_mig_file_path ${str_mig_folder}/${str_mig_file_name}

  set_property -dict [ list \
   CONFIG.BOARD_MIG_PARAM {ddr3_sdram} \
   CONFIG.RESET_BOARD_INTERFACE {reset} \
   CONFIG.XML_INPUT_FILE {board.prj} \
 ] $mig_7series_0

  write_mig_file_aquila_soc_mig_7series_0_0 $str_mig_file_path

  # Create instance: rst_mig_7series_0_200M, and set properties
  set rst_mig_7series_0_200M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset rst_mig_7series_0_200M ]

  # Create interface connections
  connect_bd_intf_net -intf_net aquila_0_M_DEVICE_PORT [get_bd_intf_pins aquila_0/M_DEVICE_PORT] [get_bd_intf_pins axi_periph/S00_AXI]
  connect_bd_intf_net -intf_net aquila_0_M_DMEM_PORT [get_bd_intf_pins aquila_0/M_DMEM_PORT] [get_bd_intf_pins axi_smc/S01_AXI]
  connect_bd_intf_net -intf_net aquila_0_M_IMEM_PORT [get_bd_intf_pins aquila_0/M_IMEM_PORT] [get_bd_intf_pins axi_smc/S00_AXI]
  connect_bd_intf_net -intf_net axi_periph_M00_AXI [get_bd_intf_pins axi_periph/M00_AXI] [get_bd_intf_pins axi_uartlite_0/S_AXI]
  connect_bd_intf_net -intf_net axi_periph_M01_AXI [get_bd_intf_pins axi_periph/M01_AXI] [get_bd_intf_pins axi_quad_spi_0/AXI_FULL]
  connect_bd_intf_net -intf_net axi_uartlite_0_UART [get_bd_intf_ports rs232_uart] [get_bd_intf_pins axi_uartlite_0/UART]
  connect_bd_intf_net -intf_net mig_7series_0_DDR3 [get_bd_intf_ports ddr3_sdram] [get_bd_intf_pins mig_7series_0/DDR3]
  connect_bd_intf_net -intf_net smartconnect_0_M00_AXI [get_bd_intf_pins axi_smc/M00_AXI] [get_bd_intf_pins mig_7series_0/S_AXI]
  connect_bd_intf_net -intf_net sys_diff_clock_1 [get_bd_intf_ports sys_diff_clock] [get_bd_intf_pins mig_7series_0/SYS_CLK]

  # Create port connections
  connect_bd_net -net axi_quad_spi_0_io0_o [get_bd_ports io0_o_0] [get_bd_pins axi_quad_spi_0/io0_o]
  connect_bd_net -net axi_quad_spi_0_sck_o [get_bd_ports sck_o_0] [get_bd_pins axi_quad_spi_0/sck_o]
  connect_bd_net -net axi_quad_spi_0_ss_o [get_bd_ports ss_o_0] [get_bd_pins axi_quad_spi_0/ss_o]
  connect_bd_net -net io1_i_0_1 [get_bd_ports io1_i_0] [get_bd_pins axi_quad_spi_0/io1_i]
  connect_bd_net -net mig_7series_0_mmcm_locked [get_bd_pins mig_7series_0/mmcm_locked] [get_bd_pins rst_mig_7series_0_200M/dcm_locked]
  connect_bd_net -net mig_7series_0_ui_addn_clk_0 [get_bd_pins aquila_0/device_aclk] [get_bd_pins aquila_0/mem_aclk] [get_bd_pins axi_periph/ACLK] [get_bd_pins axi_periph/M00_ACLK] [get_bd_pins axi_periph/M01_ACLK] [get_bd_pins axi_periph/S00_ACLK] [get_bd_pins axi_quad_spi_0/ext_spi_clk] [get_bd_pins axi_quad_spi_0/s_axi4_aclk] [get_bd_pins axi_smc/aclk1] [get_bd_pins axi_uartlite_0/s_axi_aclk] [get_bd_pins mig_7series_0/ui_addn_clk_0] [get_bd_pins rst_mig_7series_0_200M/slowest_sync_clk]
  connect_bd_net -net mig_7series_0_ui_clk [get_bd_pins axi_smc/aclk] [get_bd_pins mig_7series_0/ui_clk]
  connect_bd_net -net mig_7series_0_ui_clk_sync_rst [get_bd_pins mig_7series_0/ui_clk_sync_rst] [get_bd_pins rst_mig_7series_0_200M/ext_reset_in]
  connect_bd_net -net reset_1 [get_bd_ports reset] [get_bd_pins mig_7series_0/sys_rst]
  connect_bd_net -net rst_mig_7series_0_200M_peripheral_aresetn [get_bd_pins aquila_0/device_aresetn] [get_bd_pins aquila_0/mem_aresetn] [get_bd_pins axi_periph/ARESETN] [get_bd_pins axi_periph/M00_ARESETN] [get_bd_pins axi_periph/M01_ARESETN] [get_bd_pins axi_periph/S00_ARESETN] [get_bd_pins axi_quad_spi_0/s_axi4_aresetn] [get_bd_pins axi_smc/aresetn] [get_bd_pins axi_uartlite_0/s_axi_aresetn] [get_bd_pins mig_7series_0/aresetn] [get_bd_pins rst_mig_7series_0_200M/peripheral_aresetn]

  # Create address segments
  assign_bd_address -offset 0xC2000000 -range 0x00800000 -target_address_space [get_bd_addr_spaces aquila_0/M_DEVICE_PORT] [get_bd_addr_segs axi_quad_spi_0/aximm/MEM0] -force
  assign_bd_address -offset 0xC0000000 -range 0x00010000 -target_address_space [get_bd_addr_spaces aquila_0/M_DEVICE_PORT] [get_bd_addr_segs axi_uartlite_0/S_AXI/Reg] -force
  assign_bd_address -offset 0x80000000 -range 0x40000000 -target_address_space [get_bd_addr_spaces aquila_0/M_DMEM_PORT] [get_bd_addr_segs mig_7series_0/memmap/memaddr] -force
  assign_bd_address -offset 0x80000000 -range 0x40000000 -target_address_space [get_bd_addr_spaces aquila_0/M_IMEM_PORT] [get_bd_addr_segs mig_7series_0/memmap/memaddr] -force

  # Perform GUI Layout
  regenerate_bd_layout -layout_string {
   "ActiveEmotionalView":"Default View",
   "Default View_ScaleFactor":"0.911392",
   "Default View_TopLeft":"-148,-60",
   "ExpandedHierarchyInLayout":"",
   "guistr":"# # String gsaved with Nlview 7.0r6  2020-01-29 bk=1.5227 VDI=41 GEI=36 GUI=JA:9.0 non-TLS
#  -string -flagsOSRD
preplace port ddr3_sdram -pg 1 -lvl 4 -x 1120 -y 210 -defaultsOSRD
preplace port rs232_uart -pg 1 -lvl 4 -x 1120 -y 80 -defaultsOSRD
preplace port sys_diff_clock -pg 1 -lvl 0 -x -20 -y 280 -defaultsOSRD
preplace port reset -pg 1 -lvl 0 -x -20 -y 60 -defaultsOSRD
preplace port io0_o_0 -pg 1 -lvl 4 -x 1120 -y 450 -defaultsOSRD
preplace port io1_i_0 -pg 1 -lvl 0 -x -20 -y 360 -defaultsOSRD
preplace port sck_o_0 -pg 1 -lvl 4 -x 1120 -y 470 -defaultsOSRD
preplace portBus ss_o_0 -pg 1 -lvl 4 -x 1120 -y 490 -defaultsOSRD
preplace inst axi_periph -pg 1 -lvl 2 -x 550 -y 420 -defaultsOSRD
preplace inst axi_smc -pg 1 -lvl 2 -x 550 -y 170 -defaultsOSRD
preplace inst axi_uartlite_0 -pg 1 -lvl 3 -x 900 -y 90 -defaultsOSRD
preplace inst mig_7series_0 -pg 1 -lvl 3 -x 900 -y 260 -defaultsOSRD
preplace inst rst_mig_7series_0_200M -pg 1 -lvl 1 -x 190 -y 460 -defaultsOSRD
preplace inst aquila_0 -pg 1 -lvl 1 -x 190 -y 150 -defaultsOSRD
preplace inst axi_quad_spi_0 -pg 1 -lvl 3 -x 900 -y 470 -defaultsOSRD
preplace netloc mig_7series_0_mmcm_locked 1 0 4 20 600 NJ 600 NJ 600 1060
preplace netloc mig_7series_0_ui_addn_clk_0 1 0 4 20 240 390 270 740 580 1050
preplace netloc mig_7series_0_ui_clk 1 1 3 390 10 NJ 10 1050
preplace netloc mig_7series_0_ui_clk_sync_rst 1 0 4 10 610 NJ 610 NJ 610 1070
preplace netloc reset_1 1 0 3 0J 50 NJ 50 750J
preplace netloc rst_mig_7series_0_200M_peripheral_aresetn 1 0 3 10 60 370 70 710
preplace netloc axi_quad_spi_0_io0_o 1 3 1 1080 440n
preplace netloc io1_i_0_1 1 0 4 N 360 360 590 N 590 1040
preplace netloc axi_quad_spi_0_sck_o 1 3 1 1080 470n
preplace netloc axi_quad_spi_0_ss_o 1 3 1 1080 490n
preplace netloc axi_periph_M00_AXI 1 2 1 720 70n
preplace netloc axi_periph_M01_AXI 1 2 1 700 430n
preplace netloc aquila_0_M_DEVICE_PORT 1 1 1 380 170n
preplace netloc aquila_0_M_DMEM_PORT 1 1 1 N 150
preplace netloc aquila_0_M_IMEM_PORT 1 1 1 N 130
preplace netloc axi_uartlite_0_UART 1 3 1 NJ 80
preplace netloc mig_7series_0_DDR3 1 3 1 NJ 210
preplace netloc smartconnect_0_M00_AXI 1 2 1 730 170n
preplace netloc sys_diff_clock_1 1 0 3 NJ 280 NJ 280 730J
levelinfo -pg 1 -20 190 550 900 1120
pagesize -pg 1 -db -bbox -sgen -160 0 1250 700
"
}

  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
  close_bd_design $design_name
}
# End of create_block_design_aquila_soc()
create_block_design_aquila_soc ""

# Add a constraint file
set str_xdc_folder "${proj_name}/${proj_name}.srcs/constrs_1/new"
file mkdir ${str_xdc_folder}
set str_xdc_file_name ${proj_name}_wrapper.xdc
set str_xdc_file_path ${str_xdc_folder}/${str_xdc_file_name}
close [ open ${str_xdc_file_path} w+ ]
add_files -fileset constrs_1 ${str_xdc_file_path}
write_constraint_file ${str_xdc_file_path}

make_wrapper -files [get_files ${proj_name}/${proj_name}.srcs/sources_1/bd/${proj_name}/${proj_name}.bd] -top
add_files -norecurse ${proj_name}/${proj_name}.srcs/sources_1/bd/${proj_name}/hdl/${proj_name}_wrapper.v
update_compile_order -fileset sources_1
