{$CLEO .csa}

{$Include Include\Encrypt_1.h}

// This example script was created by Axel Blaze
// SanAndreasMixMod.blogspot.com
float SensValue
const SensVAddres = 0x6A9F30

:AB_SensTouch
0AF2: SensValue = read_float_from_ini_file "AxelBlaze\SensTouchSA.ini" section "SensTouch" key "SettValue" // com.rockstargames.gtasa/files/AxelBlaze/SensTouchSA.ini
0DD9: write_mem_addr SensVAddres value SenSvalue size 4 add_ib 1 protect 1
return

{$Include Include\Encrypt_2.h}
