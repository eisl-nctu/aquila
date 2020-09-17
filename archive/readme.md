This is the archive directory for old versions of the Aquila SoC.

Note that for aquila 0.9, the ebf file format is different from those of version 1.0 and above. It only appends a 4-byte size header to a bin file. Also, there is no TCM support for aquila 0.9. The boot code is loaded into DDR3 memory by the BDM module before the reset signal and the starting address signal of Aquila is triggered.  Anyway, we only keep this version for historical reasons.
