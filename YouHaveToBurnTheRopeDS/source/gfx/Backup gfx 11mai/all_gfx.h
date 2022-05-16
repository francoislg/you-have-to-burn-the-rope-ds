//Gfx converted using Mollusk's PAGfx Converter

//This file contains all the .h, for easier inclusion in a project

#ifndef ALL_GFX_H
#define ALL_GFX_H

#ifndef PAGfx_struct
    typedef struct{
    void *Map;
    int MapSize;
    void *Tiles;
    int TileSize;
    void *Palette;
    int *Info;
} PAGfx_struct;
#endif


// Sprite files : 
extern const unsigned char SpriteAnim_Sprite[18432] __attribute__ ((aligned (4))) ;  // Pal : sprite0_Pal
extern const unsigned char Axe_Sprite[256] __attribute__ ((aligned (4))) ;  // Pal : sprite0_Pal
extern const unsigned char Fire_Sprite[3072] __attribute__ ((aligned (4))) ;  // Pal : sprite0_Pal
extern const unsigned char Stick_Sprite[256] __attribute__ ((aligned (4))) ;  // Pal : sprite0_Pal

// Background files : 
extern const int BG0_Info[3]; // BgMode, Width, Height
extern const unsigned short BG0_Map[3072] __attribute__ ((aligned (4))) ;  // Pal : BG0_Pal
extern const unsigned char BG0_Tiles[5568] __attribute__ ((aligned (4))) ;  // Pal : BG0_Pal
extern PAGfx_struct BG0; // background pointer

extern const int BGCollision_Info[3]; // BgMode, Width, Height
extern const unsigned short BGCollision_Map[3072] __attribute__ ((aligned (4))) ;  // Pal : BGCollision_Pal
extern const unsigned char BGCollision_Tiles[448] __attribute__ ((aligned (4))) ;  // Pal : BGCollision_Pal
extern PAGfx_struct BGCollision; // background pointer

extern const int platformcollisionmap3_Info[3]; // BgMode, Width, Height
extern const unsigned short platformcollisionmap3_Map[3072] __attribute__ ((aligned (4))) ;  // Pal : platformcollisionmap3_Pal
extern const unsigned char platformcollisionmap3_Tiles[256] __attribute__ ((aligned (4))) ;  // Pal : platformcollisionmap3_Pal
extern PAGfx_struct platformcollisionmap3; // background pointer


// Palette files : 
extern const unsigned short sprite0_Pal[14] __attribute__ ((aligned (4))) ;
extern const unsigned short BG0_Pal[10] __attribute__ ((aligned (4))) ;
extern const unsigned short BGCollision_Pal[4] __attribute__ ((aligned (4))) ;
extern const unsigned short platformcollisionmap3_Pal[4] __attribute__ ((aligned (4))) ;


#endif

