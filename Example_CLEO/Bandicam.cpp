{$CLEO .csa}
jump @EncryptMax

:EncryptMax
0000: NOP
jump @Axel
0662: printstring "You won't be able to compile cleo on this one locked" 
0662: printstring "if possible the cleo code is broken and not messed up" 
0662: printstring "You won't be able to steal or re-edit this cleo Lol" 
0662: printstring "Encrypted By Axel Blaze" 
{$Include Include\Encrypt_1.h}

// This example script was created by Axel Blaze
// SanAndreasMixMod.blogspot.com
:Bandicam
    if
    0390: load_txd_dictionary 'AB' 
    038F: load_texture "bandicam_texture" as 7 // Load dictionary with 0390 first 
    03F0: enable_text_draw 0
    03E3: set_texture_to_be_drawn_antialiased 1 
    038D: draw_texture 7 position 320.0 224.0 size 1110.0 448.0 RGBA 255 255 255 255 
return

{$Include Include\Encrypt_2.h}
