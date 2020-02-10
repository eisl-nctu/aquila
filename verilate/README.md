# Verilator
## TODO
* bootrom for simulation
    1. set the stack pointer to __stack_start ~ __stack_top
    2. jump to main
    3. jump to 0x80000000 to start program
* full system simulation
    + remove cache outward port wrapper
    + create mock ideal local memory (icache/Dcache)
    + keep S_CONFIG , DEVICE ,port

