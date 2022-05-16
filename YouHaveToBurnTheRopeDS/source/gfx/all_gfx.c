//Gfx converted using Mollusk's PAGfx Converter

//This file contains all the .c, for easier inclusion in a project

#ifdef __cplusplus
extern "C" {
#endif

#include "all_gfx.h"


// Sprite files : 
#include "SpriteAnim.c"
#include "SpriteSuper.c"
#include "SpriteSteel.c"
#include "Axe.c"
#include "Fire.c"
#include "Stick.c"
#include "Dust.c"
#include "Puff.c"
#include "Chandelier1.c"
#include "Chandelier2.c"
#include "Chandelier3.c"
#include "Chandelier4.c"
#include "Chandelier5.c"
#include "Chandelier6.c"
#include "bigboss1x1.c"
#include "bigboss1x2.c"
#include "bigboss1x3.c"
#include "bigboss2x1.c"
#include "bigboss2x2.c"
#include "bigboss2x3.c"
#include "bigboss3x1.c"
#include "bigboss3x2.c"
#include "bigboss3x3.c"
#include "bigboss4x1.c"
#include "bigboss4x2.c"
#include "bigboss4x3.c"
#include "bullet.c"
#include "door.c"
#include "healthbar1.c"
#include "healthbar2.c"
#include "healthredbar.c"
#include "Flashing.c"
#include "miniboss.c"
#include "minidoor.c"
#include "minifire.c"
#include "minichandelier.c"
#include "achievement1.c"
#include "achievement2.c"
#include "achievement3.c"
#include "achievement4.c"
#include "achievement5.c"
#include "achievement6.c"
#include "achievement7.c"
#include "achievement8.c"
#include "achievement9.c"
#include "achievement10.c"
#include "achievement11.c"
#include "achievement12.c"
#include "achievement13.c"
#include "achievement14.c"
#include "achievement15.c"
#include "achievement16.c"
#include "achievement1F.c"
#include "achievement2F.c"
#include "achievement3F.c"
#include "achievement4F.c"
#include "achievement5F.c"
#include "achievement6F.c"
#include "achievement7F.c"
#include "achievement8F.c"
#include "achievement9F.c"
#include "achievement10F.c"
#include "achievement11F.c"
#include "achievement12F.c"
#include "achievement13F.c"
#include "achievement14F.c"
#include "achievement15F.c"
#include "achievement16F.c"
#include "LAZOR.c"
#include "Gun.c"
#include "star.c"
#include "hideChar.c"
#include "hideBoss.c"
#include "redbar.c"

// Background files : 
#include "splashbottom.c"
#include "splashtop.c"
#include "RPGMap.c"
#include "BG0.c"
#include "BGCollision.c"
#include "MAP.c"
#include "thanksforplaying_top.c"
#include "skip_bottom.c"
#include "designcode_bottom.c"
#include "designcode_top.c"
#include "music_top.c"
#include "music_bottom.c"
#include "additional_top.c"
#include "additional_bottom.c"
#include "special_bottom.c"
#include "special_top.c"
#include "nowyoureaheroimg.c"
#include "youmanagedto.c"
#include "beatthewhole.c"
#include "werehappy.c"
#include "buthowareyou.c"
#include "therest.c"
#include "maybewatch.c"
#include "maybepress.c"
#include "andstartagain.c"
#include "yesitsover.c"
#include "wedidntwant.c"
#include "makea.c"
#include "thisisit.c"
#include "iswear.c"
#include "oohhohh.c"
#include "presstostartagain.c"
#include "TitleScreen.c"
#include "TitleScreen2.c"
#include "TitleBottomScreen.c"
#include "TitleBottomStartGame.c"
#include "TitleBottomChangelog.c"
#include "TitleBottomAchievements.c"
#include "TitleBottomAchievements2.c"
#include "TitleBottomMods.c"
#include "TitleBottomStartGameF.c"
#include "TitleBottomAchievementsF.c"
#include "TitleBottomAchievements2F.c"
#include "TitleBottomModsF.c"

// Palette files : 
#include "sprite0.pal.c"
#include "sprite7.pal.c"
#include "sprite1.pal.c"
#include "sprite2.pal.c"
#include "sprite3.pal.c"
#include "sprite4.pal.c"
#include "sprite5.pal.c"
#include "sprite6.pal.c"
#include "splashbottom.pal.c"
#include "splashtop.pal.c"
#include "RPGMap.pal.c"
#include "BG0.pal.c"
#include "BGCollision.pal.c"
#include "MAP.pal.c"
#include "thanksforplaying_top.pal.c"
#include "skip_bottom.pal.c"
#include "designcode_bottom.pal.c"
#include "designcode_top.pal.c"
#include "music_top.pal.c"
#include "music_bottom.pal.c"
#include "additional_top.pal.c"
#include "additional_bottom.pal.c"
#include "special_bottom.pal.c"
#include "special_top.pal.c"
#include "nowyoureaheroimg.pal.c"
#include "youmanagedto.pal.c"
#include "beatthewhole.pal.c"
#include "werehappy.pal.c"
#include "buthowareyou.pal.c"
#include "therest.pal.c"
#include "maybewatch.pal.c"
#include "maybepress.pal.c"
#include "andstartagain.pal.c"
#include "yesitsover.pal.c"
#include "wedidntwant.pal.c"
#include "makea.pal.c"
#include "thisisit.pal.c"
#include "iswear.pal.c"
#include "oohhohh.pal.c"
#include "presstostartagain.pal.c"
#include "TitleScreen.pal.c"
#include "TitleScreen2.pal.c"
#include "TitleBottomScreen.pal.c"
#include "TitleBottomStartGame.pal.c"
#include "TitleBottomChangelog.pal.c"
#include "TitleBottomAchievements.pal.c"
#include "TitleBottomAchievements2.pal.c"
#include "TitleBottomMods.pal.c"
#include "TitleBottomStartGameF.pal.c"
#include "TitleBottomAchievementsF.pal.c"
#include "TitleBottomAchievements2F.pal.c"
#include "TitleBottomModsF.pal.c"

// Background Pointers :
PAGfx_struct splashbottom = {(void*)splashbottom_Map, 768, (void*)splashbottom_Tiles, 39488, (void*)splashbottom_Pal, (int*)splashbottom_Info };
PAGfx_struct splashtop = {(void*)splashtop_Map, 768, (void*)splashtop_Tiles, 24768, (void*)splashtop_Pal, (int*)splashtop_Info };
PAGfx_struct RPGMap = {(void*)RPGMap_Map, 768, (void*)RPGMap_Tiles, 5312, (void*)RPGMap_Pal, (int*)RPGMap_Info };
PAGfx_struct BG0 = {(void*)BG0_Map, 131072, (void*)BG0_Tiles, 91584, (void*)BG0_Pal, (int*)BG0_Info };
PAGfx_struct BGCollision = {(void*)BGCollision_Map, 131072, (void*)BGCollision_Tiles, 3904, (void*)BGCollision_Pal, (int*)BGCollision_Info };
PAGfx_struct MAP = {(void*)MAP_Map, 768, (void*)MAP_Tiles, 20160, (void*)MAP_Pal, (int*)MAP_Info };
PAGfx_struct thanksforplaying_top = {(void*)thanksforplaying_top_Map, 768, (void*)thanksforplaying_top_Tiles, 4800, (void*)thanksforplaying_top_Pal, (int*)thanksforplaying_top_Info };
PAGfx_struct skip_bottom = {(void*)skip_bottom_Map, 768, (void*)skip_bottom_Tiles, 1280, (void*)skip_bottom_Pal, (int*)skip_bottom_Info };
PAGfx_struct designcode_bottom = {(void*)designcode_bottom_Map, 768, (void*)designcode_bottom_Tiles, 11072, (void*)designcode_bottom_Pal, (int*)designcode_bottom_Info };
PAGfx_struct designcode_top = {(void*)designcode_top_Map, 768, (void*)designcode_top_Tiles, 4032, (void*)designcode_top_Pal, (int*)designcode_top_Info };
PAGfx_struct music_top = {(void*)music_top_Map, 768, (void*)music_top_Tiles, 6656, (void*)music_top_Pal, (int*)music_top_Info };
PAGfx_struct music_bottom = {(void*)music_bottom_Map, 768, (void*)music_bottom_Tiles, 5504, (void*)music_bottom_Pal, (int*)music_bottom_Info };
PAGfx_struct additional_top = {(void*)additional_top_Map, 768, (void*)additional_top_Tiles, 12096, (void*)additional_top_Pal, (int*)additional_top_Info };
PAGfx_struct additional_bottom = {(void*)additional_bottom_Map, 768, (void*)additional_bottom_Tiles, 7488, (void*)additional_bottom_Pal, (int*)additional_bottom_Info };
PAGfx_struct special_bottom = {(void*)special_bottom_Map, 768, (void*)special_bottom_Tiles, 9216, (void*)special_bottom_Pal, (int*)special_bottom_Info };
PAGfx_struct special_top = {(void*)special_top_Map, 768, (void*)special_top_Tiles, 12352, (void*)special_top_Pal, (int*)special_top_Info };
PAGfx_struct nowyoureaheroimg = {(void*)nowyoureaheroimg_Map, 768, (void*)nowyoureaheroimg_Tiles, 3136, (void*)nowyoureaheroimg_Pal, (int*)nowyoureaheroimg_Info };
PAGfx_struct youmanagedto = {(void*)youmanagedto_Map, 768, (void*)youmanagedto_Tiles, 3072, (void*)youmanagedto_Pal, (int*)youmanagedto_Info };
PAGfx_struct beatthewhole = {(void*)beatthewhole_Map, 768, (void*)beatthewhole_Tiles, 6336, (void*)beatthewhole_Pal, (int*)beatthewhole_Info };
PAGfx_struct werehappy = {(void*)werehappy_Map, 768, (void*)werehappy_Tiles, 4416, (void*)werehappy_Pal, (int*)werehappy_Info };
PAGfx_struct buthowareyou = {(void*)buthowareyou_Map, 768, (void*)buthowareyou_Tiles, 5696, (void*)buthowareyou_Pal, (int*)buthowareyou_Info };
PAGfx_struct therest = {(void*)therest_Map, 768, (void*)therest_Tiles, 3968, (void*)therest_Pal, (int*)therest_Info };
PAGfx_struct maybewatch = {(void*)maybewatch_Map, 768, (void*)maybewatch_Tiles, 4224, (void*)maybewatch_Pal, (int*)maybewatch_Info };
PAGfx_struct maybepress = {(void*)maybepress_Map, 768, (void*)maybepress_Tiles, 3968, (void*)maybepress_Pal, (int*)maybepress_Info };
PAGfx_struct andstartagain = {(void*)andstartagain_Map, 768, (void*)andstartagain_Tiles, 2688, (void*)andstartagain_Pal, (int*)andstartagain_Info };
PAGfx_struct yesitsover = {(void*)yesitsover_Map, 768, (void*)yesitsover_Tiles, 2944, (void*)yesitsover_Pal, (int*)yesitsover_Info };
PAGfx_struct wedidntwant = {(void*)wedidntwant_Map, 768, (void*)wedidntwant_Tiles, 3520, (void*)wedidntwant_Pal, (int*)wedidntwant_Info };
PAGfx_struct makea = {(void*)makea_Map, 768, (void*)makea_Tiles, 4224, (void*)makea_Pal, (int*)makea_Info };
PAGfx_struct thisisit = {(void*)thisisit_Map, 768, (void*)thisisit_Tiles, 1280, (void*)thisisit_Pal, (int*)thisisit_Info };
PAGfx_struct iswear = {(void*)iswear_Map, 768, (void*)iswear_Tiles, 2432, (void*)iswear_Pal, (int*)iswear_Info };
PAGfx_struct oohhohh = {(void*)oohhohh_Map, 768, (void*)oohhohh_Tiles, 2176, (void*)oohhohh_Pal, (int*)oohhohh_Info };
PAGfx_struct presstostartagain = {(void*)presstostartagain_Map, 768, (void*)presstostartagain_Tiles, 4160, (void*)presstostartagain_Pal, (int*)presstostartagain_Info };
PAGfx_struct TitleScreen = {(void*)TitleScreen_Map, 768, (void*)TitleScreen_Tiles, 4160, (void*)TitleScreen_Pal, (int*)TitleScreen_Info };
PAGfx_struct TitleScreen2 = {(void*)TitleScreen2_Map, 768, (void*)TitleScreen2_Tiles, 3968, (void*)TitleScreen2_Pal, (int*)TitleScreen2_Info };
PAGfx_struct TitleBottomScreen = {(void*)TitleBottomScreen_Map, 768, (void*)TitleBottomScreen_Tiles, 3520, (void*)TitleBottomScreen_Pal, (int*)TitleBottomScreen_Info };
PAGfx_struct TitleBottomStartGame = {(void*)TitleBottomStartGame_Map, 768, (void*)TitleBottomStartGame_Tiles, 13376, (void*)TitleBottomStartGame_Pal, (int*)TitleBottomStartGame_Info };
PAGfx_struct TitleBottomChangelog = {(void*)TitleBottomChangelog_Map, 768, (void*)TitleBottomChangelog_Tiles, 5248, (void*)TitleBottomChangelog_Pal, (int*)TitleBottomChangelog_Info };
PAGfx_struct TitleBottomAchievements = {(void*)TitleBottomAchievements_Map, 768, (void*)TitleBottomAchievements_Tiles, 24576, (void*)TitleBottomAchievements_Pal, (int*)TitleBottomAchievements_Info };
PAGfx_struct TitleBottomAchievements2 = {(void*)TitleBottomAchievements2_Map, 768, (void*)TitleBottomAchievements2_Tiles, 17216, (void*)TitleBottomAchievements2_Pal, (int*)TitleBottomAchievements2_Info };
PAGfx_struct TitleBottomMods = {(void*)TitleBottomMods_Map, 768, (void*)TitleBottomMods_Tiles, 19008, (void*)TitleBottomMods_Pal, (int*)TitleBottomMods_Info };
PAGfx_struct TitleBottomStartGameF = {(void*)TitleBottomStartGameF_Map, 768, (void*)TitleBottomStartGameF_Tiles, 15168, (void*)TitleBottomStartGameF_Pal, (int*)TitleBottomStartGameF_Info };
PAGfx_struct TitleBottomAchievementsF = {(void*)TitleBottomAchievementsF_Map, 768, (void*)TitleBottomAchievementsF_Tiles, 22464, (void*)TitleBottomAchievementsF_Pal, (int*)TitleBottomAchievementsF_Info };
PAGfx_struct TitleBottomAchievements2F = {(void*)TitleBottomAchievements2F_Map, 768, (void*)TitleBottomAchievements2F_Tiles, 15104, (void*)TitleBottomAchievements2F_Pal, (int*)TitleBottomAchievements2F_Info };
PAGfx_struct TitleBottomModsF = {(void*)TitleBottomModsF_Map, 768, (void*)TitleBottomModsF_Tiles, 18752, (void*)TitleBottomModsF_Pal, (int*)TitleBottomModsF_Info };


#ifdef __cplusplus
}
#endif

