{$CLEO .csa}
jump @EncryptMax

:EncryptMax
    0000: NOP
    jump @Axel
    0662: printstring "You won't be able to compile cleo on this one locked" 
    0662: printstring "if possible the cleo code is broken and not messed up" 
    0662: printstring "You won't be able to steal or re-edit this cleo Lol" 
    0662: printstring "Encrypted By Axel Blaze" 
{$Include Includes\Encrypted_1.h}

// This example cleo script was created by Axel Blaze
// SanAndreasMixMod.blogspot.com
int AxelBlaze

:Axel
    wait 0
    if
    00DF:   actor AxelBlaze driving 
    jf @Blaze
    0581: enable_radar 1
    0826: enable_hud 0
jump @Blaze

:Blaze
    wait 0
    if
    80DF:   not actor AxelBlaze driving 
    jf @Axel
    0581: enable_radar 0
    0826: enable_hud 1
jump @Axel

{$Include Includes\Encrypted_2.h}
