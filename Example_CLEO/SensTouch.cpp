{$CLEO .csa}
jump @EncryptMax

:EncryptMax
    0000: NOP
    jump @AB_SensTouch
    0662: printstring "You won't be able to compile cleo on this one locked" 
    0662: printstring "if possible the cleo code is broken and not messed up" 
    0662: printstring "You won't be able to steal or re-edit this cleo Lol" 
    0662: printstring "Encrypted By Axel Blaze" 
{$Include Includes\Encrypted_1.h}

// This example script was created by Axel Blaze
// SanAndreasMixMod.blogspot.com
float SensValue
const SensVAddres = 0x6A9F30

:AB_SensTouch
    0AF2: SensValue = read_float_from_ini_file "AxelBlaze\SensTouchSA.ini" section "SensTouch" key "SettValue" // com.rockstargames.gtasa/files/AxelBlaze/SensTouchSA.ini
    0DD9: write_mem_addr SensVAddres value SenSvalue size 4 add_ib 1 protect 1
return

{$Include Includes\Encrypted_2.h}
