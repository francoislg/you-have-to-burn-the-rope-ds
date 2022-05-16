//Gfx converted using Mollusk's PAGfx Converter

//This file contains all the .c, for easier inclusion in a project

#ifdef __cplusplus
extern "C" {
#endif

#include "all_gfx.h"


// Sprite files : 
#include "SpriteAnim.c"
#include "Axe.c"
#include "Fire.c"
#include "Stick.c"

// Background files : 
#include "BG0.c"
#include "BGCollision.c"
#include "platformcollisionmap3.c"

// Palette files : 
#include "sprite0.pal.c"
#include "BG0.pal.c"
#include "BGCollision.pal.c"
#include "platformcollisionmap3.pal.c"

// Background Pointers :
PAGfx_struct BG0 = {(void*)BG0_Map, 3072, (void*)BG0_Tiles, 5568, (void*)BG0_Pal, (int*)BG0_Info };
PAGfx_struct BGCollision = {(void*)BGCollision_Map, 3072, (void*)BGCollision_Tiles, 448, (void*)BGCollision_Pal, (int*)BGCollision_Info };
PAGfx_struct platformcollisionmap3 = {(void*)platformcollisionmap3_Map, 3072, (void*)platformcollisionmap3_Tiles, 256, (void*)platformcollisionmap3_Pal, (int*)platformcollisionmap3_Info };


#ifdef __cplusplus
}
#endif

