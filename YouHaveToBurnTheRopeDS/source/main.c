/* 	April 5th 2009 : Woot. Accepted by YouHaveToBurnTheRope creator. Got graphics/sounds
				Copied my script from another test. Sprite is moving.
				Dang, cannot have flip & zoom out ?
	April 6th : Starting Axe Coding. I tried to change collision setting. Result : No.
				Axe, Collision, Arc On Shooting working. Need to be slower.
				Still don't have rotation, should be tommorow.
	April 16th :Fire Included. No Stick. Anim is there. No Flip. No Torch.
	April 19th :Stick. Flipping. Quite easy. I love PaLib :)
				Sprite always "jump" up while left or right collision, dunno why.
	April 21th :Arc shooting is slower. Never though just adding /4 would slow it ^^'.
				Awesome. Flipping and Rotation for Axes *Perfecly* working on 1st try.
	April 22th :Scrolling Added. Working well. Except when going to the ''2nd part'', 
				collision is bugged. I'll fix it tommorow, or later.
				COLLISION FIXED. Not for scrolling though.
	April 25th :Tried to find a way for scrolling. Nothing. Tried for better gravity too.
	April 26th :CAN'T DO PHYSICS. Can't find a way to have more realistic one. 
				Really don't know why scrolling collision is bad.
	May 5th : 	Didn't worked on it since last comment. I worked on another project in C#.
				HUGE SUCCESS. I should come back soon, when I will have less work for school.
	May 7th : 	Looked for scrolling collision problems. Still don't understand...
				Lot of testing. Found that it was PAgfx problem with LargeMap thing. FINALLY !
	May 8th :	It's 2h38 Morning. Scrolling. Bugs. Collisions. ALL FIXED!
	May 10th : 	Tried to rework collision. GetFire is Done. Torches too.
	May 11th :	±20h. Map is now 4092x768. Was 1024x192. 
				23h26. Map is now 8192x1024. It's finished ( phew, finally )
	May 20th : 	Worked a bit on fixing things. There is now Dust.
	May 21th : 	Attemp on going DualScreen-ed... before TF2 Spy VS Sniper update ;)
				After lot of work, decided to let it as it is. Dual working, but not as I would have wanted
	May 24th :	Though of something about Dual. Hope it will work. 
				It did half the work. Scrolling Worked and everything.
				I needed to add a Fix for Y. Still have the ''duplicate sprite bug''.
				I started the "BurnTheRopeSequence", as I called it.
				Discovered Fun glitch when messing with Left+Right. Nothing bad for gameplay.
	May 25th :	Tried to fix Torches. OMG. It worked ! Fire is now animated and on both screen
				Duplicate sprite bug is fixed, don't ask me why.
				I was thinking all day about it and ... the Left+Right glitch cannot be done on a true DS ^^;
	May 26th :	I've done the chandelier. I forgot to hide Single Screen too.
				I added a timer to know what time you did pass the game =D Unfortunatly, can't be tried on a Emulator
				Fixed some stuff with scrolly and Axe. Did some Code Cleaning. -200 lines of Code xD
	May 27th :	Changed from ProgrammerNotepad to Visual C++ 2008 Express because I accidentaly found a tutorial
				and I like better Visual Studio :)
	May 30th :	Started working on Puffs when you kill the boss. It's long. Very long. And Dull
	May 31th :	It's 00:20. I wan't to work on sound a little because i'm bored of Puffes. 
				Problem, cannot input more than 4mb of sound. We NEED the song.
	June 3th :	Beggining of a new month. Being the second one while on the project ;) Reworked sound.
				Though the only way was to tranfer the sound into .raw or .mod, but it can read .mp3. Phew.
				I can now listen to "Now you're a hero" while playing :) And it only takes 0.9mb, no more 4mb problem.
	June 4th :	Added more sound and music.
	June 5th :	Even more sound and music !
	June 6th :	SO MANY SOUNDS AND MUSIC... well actually there are not that many.
				I continued the BurnTheRopeSequence a lot. The "video" is now starting until "Thanks for playing"
	June 7th :	Did "Code,Graphics,Blabla" thing. "Music" now. "Additional Design" now. "Special" now. I added a timer.
	June 8th :	Oh noes. I need to cut the Grinning Collossus in 4 because palib doesn't take more than DoubleSize(64x64)
				What a pain...
				I FREAKING HATE THE WRAP THAT SPRITES DO !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	June 16th : It's been one freaking week that I search about the wrap with DoubleSize(64x64). I'm freaking tired.
				My solution for now will be to cut the grinning collosus in 16.... awesome and fun job...
				Holy God. I will modify the "Side" Boss so it can fit in 3x4 squares.
				It's now 12 squares instead of 16, but it's still a wonderful and entertaining job...
				The greatful and amazing job worked. Boss can flip and move. It "look" at you.
				I will be doing attacks soon, which will be the biggest part. And oh, I commented a lot today !
	June 17th :	Starting the boss attacking. I'm having problems with velocity thing.
	June 18th : Found another way with Palib using Sin and Cos things. Working perfectly. :)
				Bullets now need collision. Collision works. Axe on Boss too. Did the door closing.
				Phew. Took about 1 hour just to do the animation when you get hit. I will now do Boss AI. Then it is almost finished !
	June 19th : Boss AI is OK, i emailed to know mathetical things. Boss now has a life bar.
				What is left to do : Lyrics, Map on top screen, and fun things.
				Did some fixes, removed the debug screen. Added the MAP. Flashing things too. It's really fun doing mini-things ! =D
	June 20th : I calculated achievements I could do. There is 45 sprites left for me. Guess that will be 45 achievements.
				I will finish the lyrics. They are now done. 
				Oh oh. Big Big BIG problem. It seems I can't reload the game when it's finished... Due to 8bitBG and Test and all.
				BIG Background problems... I don't have time to finish. Will fix tommorrow. 
				Midnight+8 minutes. Found a new way, think it would work. Midnight+104 minutes, still not working. Though of something for tommorow.
	June 21th : Idea working a bit, for now... YES ! PERFECT !
				Main menu is done with 2 options : Load Game,See Changelog.
				I've done a little thing to have english and french language
				I've added Pause button. And... Uploaded it on the net. 
	June 28th : Back from a trip, bla-bla-bla. I'll be trying to do a saving function for time & achievements.
				Can't try it on a emulator. I need to get my flashcart. All I need is saving, I have 3 achievements done :)
				Had a small problem because sprites were taking much RAM. By chance, there was a function to help my cause.
				5 achievements. It's a really fun thing to do. Discovered it's 127 sprites per screen. Some sprites are 1 screen only, so maybe more achievements !
	July 1th :	I've got the numbers I wanted. There is a timer. 30 for attack, 30 for doing nothing, 100 for moving.A random number activates when timer is finished.
				I've fixed bullets too. PA_Distance Day. I've added 5 more achievements for a total of 10.
				Added an "Achivement Screen" where you can see names of all achievements on main menu.
	July 2th :	Did simple camera moving with stylus. Restricted unless I wanted to change a LOT of things... darn.
				*gasp* Decided to do it finally... It works marvelously. I'll do 2 achievements.
	July 3th :	+1 mod for now. Added an achievement counter. +1 Achievement related to the mod. I'll stop a little for now.
	July 5th :	Discussed with a friend. Gave me mods ideas : Bullet mod and Hyperspeed. +2 Achievements not mod-related.
	July 6th :	More translation.
	July 12th :	+1 Mod. Achievement #5 now require this mod.
	July 13th : +1 Mod. It is kinda strange. A lot of graphical glitches and all. But hey, it's exactly what I wanted. Now 10 mods, 15 achievements
				I should stick to that. I will maybe start a new project soon
	July 17th : I started a new project. A Diablo2-like game using 3D functions. But i'm coming back here because I want to do the final update :
				Saving
				Real...Pain... I'll be putting "Checkpoints" instead of cartridge saving. I really don't understand how it works =/
	July 18th : Will try some testing today too.
	August 2nd:	Release for Neo Compo Summer Coding. No saving, it's still not working.
	August 07 : OH NOOOOOOOOOOOOOOOOOOOES. I updated Palib and it all screwed my game. The Neo Compo Release is completly BROKEN.
				Reverted Back to Good Old Palib. Perfect.
	August 09 :	Actually not.
				Finally Fixed ! I think. I HOPE !
	August 11 : I decided to add a simple thing that Strike achievement names when they are done, by 'popular' demand...
	August 12 : Added bounds so you could not achieve the Black-Out and No-Map while being out of bounds.
	August 16 : I have 1 place for 1 more achievement. I'm asking the community what to add. I want to add at least 5 mods too.
				Franz24 got a great idea : Finding 5 stars in the game, then it gives the achievement. I did it.
				I've added 3 mods too : Low gravity, 27 seconds timer and a Gun mod. The gun is pretty fun
	August 17 : Still not going to bed. I got another mail which had a good idea : Doing an Axe Mod. Everything would be Axe-Based.
				"You can't burn the rope". Would require 10 maybe more achievements.
				I'll be doing an extreme mod. It will be awesome.
	August 18 : I continue my extreme mod.
				I must say it is finished. The game may now be called "Finaly, You don't have to burn the rope..."
	August 19 : I will do 2 new mods. A "olymipic mode" and an "automatic walker" mod.
				They were pretty easy to do. And the olympic mod will be fun ;)
	June 28th 2010 : It's midnight and I'm reading this. Wow. I worked hard to make it work ^^
				Good days... good days... Here is the end. I've won 4th place ( a new flashcart ! ) for Neo-Compo.
				The Diablo2-Like mentioned before was stopped because of a lot of problems.
				Reading this makes me want to do another game and enter the contest again. Maybe no PaLib this time.
				Anyway. You Have To Burn The Rope DS was a great experience.
*/

// 19-27'39-41'49-73'78-81'83-106'118-127  -- 1+12+9+6+3+13+1  -- 45 sprites for achievements

//0-RedBar1 1-RedBar2 2-Bar1 3-Bar2 4'18-Axe 20-Dust 21-Dust 22-Flashing 23-Miniboss 24-Minidoor 25-minifire 26-MiniChandelier 40-Fire 50'60-Puff 61'72-Boss 79-Stick 80-Sprite 84'99-Bullet 100'105-Chandelier 119-Door 120'126-Fire

#include <PA9.h>
#include "gfx/all_gfx.c"
//Sounds
#include "attack.h"
#include "burn.h"
#include "bustabuss.h"
#include "cave.h"
#include "closedoor.h"
#include "explosionbig.h"
#include "explosionsmall.h"
#include "fallhit.h"
#include "monsterAttack.h"
#include "nowyoureahero.h"
#include "playerjump.h"
#include "takedamage.h"

typedef struct{
	s32 x,y,j;
	bool coli;
	bool shoot;
	u16 rot;
	bool flip;
}axeinfo;

axeinfo Axe[18];

typedef struct{
   unsigned long x, y;
}pointinfo;
pointinfo ballvel[10];
pointinfo Chandelier;
pointinfo torch[7];

typedef struct{
   unsigned long x, y;
   bool flipped;
   bool shooting;
   bool hitted;
   s32 life;
   bool alive;
   bool moving;
}thebossinfo;
thebossinfo boss;

typedef struct{
	s32 min,max;
}minmaxinfo;

typedef struct{
	minmaxinfo damage;
	s32 ID;
	s32 type;
}weaponinfo;
weaponinfo weapon[100];

typedef struct{
	int x,y;
	 bool flipped;
}bosspartinfo;
bosspartinfo bosspart[12];

typedef struct{
   pointinfo up, down, left, right, downtouching;
   bool flipped;
}hitboxinfo;

typedef struct{
	s32 x, y;
	s32 vy, centerjump;
	bool jumping;
	bool walking;
	u8 shotted;
	hitboxinfo hitbox;
}spritetype;
spritetype sprite;

typedef struct{
   unsigned long x, y,vy;
   bool flipped;
   bool shooting;
   s16 life;
   bool alive;
}minibossinfo;
minibossinfo miniboss[10];

typedef struct{
	s32 x, y;
	s32 velx,vely;
	bool alive;
	s32 initx,inity;
	s32 spritex,spritey;
}bullettype;
bullettype bullet[96];

u8 numberofthesprite[128];

typedef struct{
	bool done;
	bool finished;
	u32 frames;
}achievementinfo;
achievementinfo achievement[17];

typedef struct{
	bool alive;
	s32 x,y;
}starinfo;
starinfo star[5];

bool mods[16];

char version[]=		"Release Aug19";

char lastNTC[]=		"Nothing";
char lastmajor[]=	"+1 ach, +5 mods";
char lastminor[]=	"Many Bugfixing";
char addit[]=		"Find all 16 achievements";
char addit2[]=		"Try 15 new mods";
char addit3[]=		"Find the secret mod";
char addit4[]=		"-You need 5 achievements";

char lastNTCF[] =	"Rien";
char lastmajorF[]=	"+1 ach, +5 mods";
char lastminorF[]=	"Plusieurs fixs";
char additF[]=		"Trouvez les 16 Succès";
char addit2F[]=		"Essayez les 15 Mods";
char addit3F[]=		"Trouvez le mod secret";
char addit4F[]=		"-Vous devez avoir 5 succès";

#define levellength 1024
#define levelheight 128

#define FIXY 48
#define SPEED 768
#define JUMP -1600
#define AXESHOOTJ -9

#define TOP_OUT				( PA_SetBrightness(1,-64) )
#define TOP_IN				( PA_SetBrightness(1,0) )
#define norm_fix(x)			((x)<<8)
#define fix_norm(x)			((x)>>8)
#define PADNEWPRESS			((Pad.Newpress.A) || (Pad.Newpress.B) || (Pad.Newpress.X) || (Pad.Newpress.Y) || (Pad.Newpress.Start) || (Pad.Newpress.Select) || (Pad.Newpress.L) || (Pad.Newpress.R) || (Pad.Newpress.Left) || (Pad.Newpress.Right) || (Pad.Newpress.Up) || (Pad.Newpress.Down))


void MoveMiniBoss(void);
void MoveSpriteRPG(void);
void runRPG(void);
void MySplash(void);
void reinit(void);
void AttackBoss(void);
void MoveBoss(void);
void TheVideo(void);
void TheEnding2(void);
void TheEnding(void);
void Fire(void);
void MoveAxe(void); 
void MoveSprite(void);
void init(void);
void AxeShooting(void);
void CheckCollisions(void);
u8 AxeDownCollision(void);

void CheckMiniBossCollisions(int a);
u8 MiniBossTileCollision(pointinfo point,int c);
u8 MiniBossanycollision(u8 tile, hitboxinfo hitbox,int b);

u8 GetTile(s16 x, s16 y);
u8 TouchingGround(void);
u8 tilecollsion(s32,s32,u8,u8);
u8 allcollision();
u8 TouchingGroundTile(u8 touchingtile,hitboxinfo hitbox); 

bool leftwalking=0;
bool rightwalking=0;
int persoexp=0;
int persolvl=1;
int persolife=0;
int gravity=40;
u8 starstotal=0;
bool nodebug=1;
u8 achievementspage=0;
bool doorclosed=0;
u16 angle = 0;
u8 axenumber = 4;
int bulletnumber = 85;
bool GetFire = 0;
bool spriteflipped = 0;
s32 scrollx = 0;
s32 scrolly = norm_fix(24);
u8 selectswitch = 0;  // Changer pour l'écran du haut. 2= Minimap. 1 = Debug. 0 = Double Écran.
bool fallinghigh = 0;
int puffnumber=50;
int maxtimer=0;
u32 cooldown=0;
u32 cooldownaxe=0;
u32 axescount=0;
u32 ceilingcount=0;
u32 stylusinitx=0;
u32 stylusinity=0;
u32 scrollxinit=0;
u32 scrollyinit=0;
u8 achievementstotal=0;

//--- Pour synchroniser la fin
bool dontrunthiswhilevideo=0;
bool chandelierfall=0;
bool finish = 0;
bool chandelierfinish=0;
u32 bosstimer=0;
u32 fireframes=0;
u32 moreframes=0;
u32 frames = 0;
u32 framepause=0;
u32 framesnow=0;
u32 framesnow2=0;
u32 framesboss=0;
u32 dontmoveframe=0;
u32 onlyonetime=0;
u32 minutes=0;
u32 seconds=0;
u32 timerseconds=0;
u32 lastseconds=0;
u32 lastminutes=0;
u32 cheatcodeachievements=0;
u32 cheatcodeachievements10=0;
u32 cheatcodeachievements5=0;

s32 startx = 37000;			// 37000 Start		// 1045440	Rope		// 883000 Door
s32 starty = 0;				// 0				// 78000				// 210000

s32 test = 1;

int main(int argc, char ** argv)	{
	init();

	while(1)
	{
		MoveSprite();
		MoveAxe();
		AxeShooting();
		Fire();
		TheEnding();
		PA_WaitForVBL();
		frames++;
		moreframes++;
	}
	
	return 0;
}

void init(){

	PA_Init();
	PA_InitVBL();

	PA_InitText(1, 0);
	PA_InitText(0, 0);
	
	PA_VBLFunctionInit(AS_SoundVBL);
	AS_Init(AS_MODE_MP3 | AS_MODE_SURROUND | AS_MODE_16CH);
	AS_SetDefaultSettings(AS_PCM_8BIT, 44100, AS_SURROUND);
	PA_DualLoadSpritePal(0,(void*)sprite0_Pal);
	PA_DualLoadSpritePal(1,(void*)sprite1_Pal);
	PA_DualLoadSpritePal(7,(void*)sprite7_Pal);
	PA_LoadSpritePal(1,2,(void*)sprite2_Pal);
	PA_LoadSpritePal(1,3,(void*)sprite3_Pal);
	PA_LoadSpritePal(1,4,(void*)sprite4_Pal);
	PA_LoadSpritePal(1,5,(void*)sprite5_Pal);
	PA_LoadSpritePal(1,6,(void*)sprite6_Pal);
	star[0].alive=1;
	star[1].alive=1;
	star[2].alive=1;
	star[3].alive=1;
	star[4].alive=1;

	MySplash();

	reinit();


}
void AxeShooting(void){
	if ( cooldownaxe > 0 ) cooldownaxe--;
	
	if(mods[12]==0) {
		if (mods[9]==1 && cooldownaxe<=0) {
			AS_SoundDefaultPlay((u8*)attack,(u32)attack_size,32,64,false,0);
					Axe[axenumber].shoot = 1;
					PA_SetSpriteXY(0, axenumber, -250, -250);
					PA_SetSpriteMode(0, axenumber, 0);
					if(mods[6]==0) { Axe[axenumber].x = (sprite.x>>8)+20-(spriteflipped*40); Axe[axenumber].y = (sprite.y>>8)+2;}
					if(mods[6]==1) { Axe[axenumber].x = (sprite.x>>8)+10-(spriteflipped*20); Axe[axenumber].y = (sprite.y>>8)+12;}
					Axe[axenumber].j = AXESHOOTJ;
					if(spriteflipped == 1) Axe[axenumber].flip = 1;
					if(spriteflipped == 0) Axe[axenumber].flip = 0;
					PA_SetSpriteAnim(0, axenumber, 0);
					axenumber++;
					if (axenumber >= 18) axenumber = 4;
					cooldownaxe=60;
					}
		if ((Pad.Newpress.A || Pad.Newpress.Down) && sprite.shotted==0 && !(sprite.x<42000 && sprite.y<52000) ){
			axescount++;
			AS_SoundDefaultPlay((u8*)attack,(u32)attack_size,32,64,false,0);
			GetFire = 0;
			if(mods[0]==1) if(fireframes>20)fireframes-=20;
			Axe[axenumber].shoot = 1;
			PA_SetSpriteXY(0, axenumber, -250, -250);
			PA_SetSpriteMode(0, axenumber, 0);
			if(mods[6]==0) { Axe[axenumber].x = (sprite.x>>8)+20-(spriteflipped*40); Axe[axenumber].y = (sprite.y>>8)+2;}
			if(mods[6]==1) { Axe[axenumber].x = (sprite.x>>8)+10-(spriteflipped*20); Axe[axenumber].y = (sprite.y>>8)+12;}
			Axe[axenumber].j = AXESHOOTJ;
			if(spriteflipped == 1) Axe[axenumber].flip = 1;
			if(spriteflipped == 0) Axe[axenumber].flip = 0;
			PA_SetSpriteAnim(0, axenumber, 0);
			axenumber++;
			if (axenumber >= 12) axenumber = 4;
		}
		}
		if(mods[12]==1){
			if (mods[9]==1 && cooldownaxe<=0) {
				AS_SoundDefaultPlay((u8*)monsterAttack,(u32)monsterAttack_size,32,64,false,0);
					Axe[axenumber].shoot = 1;
					PA_SetSpriteXY(0, axenumber, -250, -250);
					PA_SetSpriteMode(0, axenumber, 0);
					if(mods[6]==0) { Axe[axenumber].x = (sprite.x>>8)+20-(spriteflipped*40); Axe[axenumber].y = (sprite.y>>8)+12;}
					if(mods[6]==1) { Axe[axenumber].x = (sprite.x>>8)+10-(spriteflipped*20); Axe[axenumber].y = (sprite.y>>8)+12;}
					Axe[axenumber].j = 0;
					if(spriteflipped == 1) Axe[axenumber].flip = 1;
					if(spriteflipped == 0) Axe[axenumber].flip = 0;
					PA_SetSpriteAnim(0, axenumber, 0);
					axenumber++;
					if (axenumber >= 18) axenumber = 4;
					cooldownaxe=40;
					}
		if ((Pad.Newpress.A || Pad.Newpress.Down) && sprite.shotted==0 && !(sprite.x<42000 && sprite.y<52000)&& cooldownaxe<=0 ){
			AS_SoundDefaultPlay((u8*)monsterAttack,(u32)monsterAttack_size,32,64,false,0);
			GetFire = 0;
			Axe[axenumber].shoot = 1;
			PA_SetSpriteXY(0, axenumber, -250, -250);
			PA_SetSpriteMode(0, axenumber, 0);
			if(mods[6]==0) { Axe[axenumber].x = (sprite.x>>8)+20-(spriteflipped*40); Axe[axenumber].y = (sprite.y>>8)+12;}
			if(mods[6]==1) { Axe[axenumber].x = (sprite.x>>8)+10-(spriteflipped*20); Axe[axenumber].y = (sprite.y>>8)+12;}
			Axe[axenumber].j = 0;
			if(spriteflipped == 1) Axe[axenumber].flip = 1;
			if(spriteflipped == 0) Axe[axenumber].flip = 0;
			PA_SetSpriteAnim(0, axenumber, 0);
			axenumber++;
			if (axenumber >= 12) axenumber = 4;
			cooldownaxe=5;
		}
		}
}

void MoveAxe(void) {
	int i;
	int n;
	if(mods[12]==0) {
	for(i=4;i<12;i++) {
			if ( (GetTile((Axe[i].x)+7, (Axe[i].y))) || Axe[i].x > fix_norm(sprite.x)+128 || Axe[i].x < fix_norm(sprite.x)-128) // x7 y15
				{ 
				PA_SetSpriteAnim(0, i, 1);
				PA_SetSpriteXY(0, i,-250,-250);
				Axe[i].j = AXESHOOTJ;
				Axe[i].shoot = 0;
				Axe[i].rot = 50;
				}
			else if (Axe[i].shoot == 1) 
			{
			if (selectswitch == 1) PA_OutputText(1,1,6, " Axe[%d] .x= %d .y= %d ", i, Axe[i].x,Axe[i].y);
				if ( Axe[i].flip == 0 ) { Axe[i].x = Axe[i].x+2*mods[5]; Axe[i].rot = Axe[i].rot-15*mods[5]; if ( sprite.walking == 1 ) Axe[i].x += 2*mods[5]; }
				if ( Axe[i].flip == 1 ) { Axe[i].x = Axe[i].x-2*mods[5]; Axe[i].rot = Axe[i].rot+15*mods[5]; if ( sprite.walking == 1 ) Axe[i].x -= 2*mods[5]; }
			Axe[i].j = Axe[i].j+1*mods[5];
			Axe[i].y = Axe[i].y+(Axe[i].j/3)*mods[5];
			if(mods[6]==0) PA_SetRotsetNoZoom(0, i, Axe[i].rot);
			if(mods[6]==1) PA_SetRotset(0,i,Axe[i].rot,512,512); 
				if (Axe[i].x-256<fix_norm(scrollx) && Axe[i].x+256>fix_norm(scrollx) && Axe[i].y-384<fix_norm(scrolly))
					PA_SetSpriteXY(0, i, Axe[i].x-fix_norm(scrollx)+8, Axe[i].y-fix_norm(scrolly)+FIXY+12);
				else PA_SetSpriteXY(0,i,-250,-250);
			if (boss.life>=0) {
			if ( Axe[i].x < boss.x+192 && Axe[i].x > boss.x && Axe[i].y > boss.y-64) { // Collide with boss
				AS_SoundDefaultPlay((u8*)takedamage,(u32)takedamage_size,16,64,false,0);
				boss.life = boss.life-15+mods[0]*10;
				if(mods[0]==1) boss.life=boss.life-=persolvl/2;
				PA_SetSpriteAnim(0, i, 1);
				PA_SetSpriteXY(0, i,-250,-250);
				Axe[i].j = AXESHOOTJ;
				Axe[i].shoot = 0;
				Axe[i].rot = 50;
				}
			for(n=0;n<11;n++) {
				if ( Axe[i].x < miniboss[n].x+15 && Axe[i].x > miniboss[n].x-15 && Axe[i].y > miniboss[n].y-64) { // Collide with boss
					AS_SoundDefaultPlay((u8*)takedamage,(u32)takedamage_size,16,64,false,0);
					miniboss[n].alive=0;
					miniboss[n].x=-250;
					miniboss[n].y=-250;
					persoexp+=50/persolvl*2;
					PA_DualSetSpriteXY(n+28,-250,-250);
					PA_SetSpriteAnim(0, i, 1);
					PA_SetSpriteXY(0, i,-250,-250);
					Axe[i].j = AXESHOOTJ;
					Axe[i].shoot = 0;
					Axe[i].rot = 50;
					}
				}
			}
			if (boss.alive==0&&mods[6]==1&&Axe[i].x < fix_norm(1080000)+192 && Axe[i].x > fix_norm(1080000) && Axe[i].y > fix_norm(212859)-96-80-64 &&achievement[5].done==0&&achievement[5].finished==0) { achievement[5].done=1; achievement[5].frames=moreframes; }
			}
		}
	}
	if(mods[12]==1) {
	for(i=4;i<12;i++) {
			if ( (GetTile((Axe[i].x)+7, (Axe[i].y))) || Axe[i].x > fix_norm(sprite.x)+140 || Axe[i].x < fix_norm(sprite.x)-140) // x7 y15
				{ 
				PA_SetSpriteAnim(0, i, 1);
				PA_SetSpriteXY(0, i,-250,-250);
				Axe[i].j = 0;
				Axe[i].shoot = 0;
				Axe[i].rot = 50;
				}
			else if (Axe[i].shoot == 1) 
			{
			if (selectswitch == 1) PA_OutputText(1,1,6, " Axe[%d] .x= %d .y= %d ", i, Axe[i].x,Axe[i].y);
				if ( Axe[i].flip == 0 ) { Axe[i].x = Axe[i].x+3*mods[5];
											if ( sprite.walking == 1 ) Axe[i].x += 2*mods[5]; }
				if ( Axe[i].flip == 1 ) { Axe[i].x = Axe[i].x-3*mods[5]; 
											if ( sprite.walking == 1 ) Axe[i].x -= 2*mods[5]; }
			if(mods[6]==0) PA_SetRotsetNoAngle(0,i,256,256);
			if(mods[6]==1) PA_SetRotsetNoAngle(0,i,512,512); 
				if (Axe[i].x-256<fix_norm(scrollx) && Axe[i].x+256>fix_norm(scrollx) && Axe[i].y-384<fix_norm(scrolly))
					PA_SetSpriteXY(0, i, Axe[i].x-fix_norm(scrollx)+8, Axe[i].y-fix_norm(scrolly)+FIXY+12);
				else PA_SetSpriteXY(0,i,-250,-250);
			if (boss.life>=0) {
			if ( Axe[i].x < boss.x+192 && Axe[i].x > boss.x && Axe[i].y > boss.y-64) { // Collide with boss
				AS_SoundDefaultPlay((u8*)takedamage,(u32)takedamage_size,16,64,false,0);
				boss.life = boss.life-30;
				PA_SetSpriteAnim(0, i, 1);
				PA_SetSpriteXY(0, i,-250,-250);
				Axe[i].j = 0;
				Axe[i].shoot = 0;
				Axe[i].rot = 50;
				}
			}
			if (boss.alive==0&&mods[6]==1&&Axe[i].x < fix_norm(1080000)+192 && Axe[i].x > fix_norm(1080000) && Axe[i].y > fix_norm(212859)-96-80-64 &&achievement[5].done==0&&achievement[5].finished==0) { achievement[5].done=1; achievement[5].frames=moreframes; }
			}
		}
	}
}


void MoveSprite(void){
	

	int i=0;
	int p=0;

	//----------Debug Purpose--------------//
	if(nodebug==0) {if(Pad.Newpress.Start) {sprite.y = starty; sprite.x = startx; sprite.vy = 0; GetFire = 0; scrollx = 0; scrolly = 0; frames=0; finish=0; chandelierfall=0;sprite.shotted=0;}
	if (Pad.Newpress.R) test++;
	if (Pad.Newpress.L) test--;
	if (Pad.Held.X) test += 1;
	if (Pad.Held.Y) test -= 1;
	}
	if(Pad.Held.R && Pad.Held.L && Pad.Held.Down && Pad.Newpress.Select) { nodebug++; selectswitch=1; }
	if (nodebug==2) nodebug=0;
	//----------Debug Purpose--------------//
	if(PA_CheckLid()==1) p=1;
	if(nodebug==1 && Pad.Newpress.Start) { PA_WaitFor(Pad.Released.Start);p=1;}
	while (p==1) {
		AS_MP3Pause();
		PA_ShowBg(1, 0);
		if(PA_UserInfo.Language==2){
		PA_OutputText(1,9,5, "%c1Partie en pause"); // 11-26
		PA_OutputText(1,6,6, "%c1Start pour continuer"); //8-28
		PA_OutputText(1,4,7, "%c1Garder Select pour arreter"); // 5-31
		}
		else {
		PA_OutputText(1,10,5, "%c1Game Paused"); // 10-22
		PA_OutputText(1,8,6, "%c1Start to Unpause"); //8-24
		PA_OutputText(1,4,7, "%c1Hold Select to Restart"); // 4-26
		}
	PA_DualStopSpriteAnim(80);
	if(Pad.Newpress.B||Pad.Newpress.Start) {p=0; AS_MP3Unpause();}
	if(Pad.Newpress.Select) framepause=0;
	if(Pad.Held.Select && framepause==120) { PA_EasyBgLoad(1,2,thanksforplaying_top);
			PA_EasyBgLoad(0,2,skip_bottom); AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                "); reinit(); }
	framepause++;
	PA_WaitForVBL();
	}

	// Achievement #1 : Don't move for 60 seconds
	if(PADNEWPRESS) dontmoveframe=frames;
	if(dontmoveframe+3600==frames&&achievement[1].done==0&& achievement[1].finished==0) { achievement[1].done=1; achievement[1].frames=frames; }
	if(frames<=achievement[1].frames+64  && frames>=achievement[1].frames && achievement[1].done==1&& achievement[1].finished==0) { PA_SetSpriteXY(1,19,191, frames-achievement[1].frames-64) ; }
	if(frames>=achievement[1].frames+301 && frames<=achievement[1].frames+364 && achievement[1].done==1&& achievement[1].finished==0) { PA_SetSpriteXY(1,19,191, -(frames-achievement[1].frames+300-88) ); }
	if(frames>=achievement[1].frames+366&& achievement[1].done==1) achievement[1].finished=1;

	// Achievement #2 : Touch yourself... er, I mean, your SPRITE
	if(Stylus.Newpress&&PA_SpriteTouched(80)&&achievement[2].done==0&& achievement[2].finished==0) { achievement[2].done=1; achievement[2].frames=frames; }
	if(frames<=achievement[2].frames+64  && frames>=achievement[2].frames && achievement[2].done==1&& achievement[2].finished==0) { PA_SetSpriteXY(1,20,191, frames-achievement[2].frames-64) ; }
	if(frames>=achievement[2].frames+301 && frames<=achievement[2].frames+364 && achievement[2].done==1&& achievement[2].finished==0) { PA_SetSpriteXY(1,20,191, -(frames-achievement[2].frames+300-88) ); }
	if(frames>=achievement[2].frames+366&& achievement[2].done==1) achievement[2].finished=1;

	// Achievement #3 : Beat the game under 27 seconds
	if(moreframes<=achievement[3].frames+64  && moreframes>=achievement[3].frames && achievement[3].done==1&& achievement[3].finished==0) { PA_SetSpriteXY(1,21,191, moreframes-achievement[3].frames-64) ; }
	if(moreframes>=achievement[3].frames+301 && moreframes<=achievement[3].frames+364 && achievement[3].done==1&& achievement[3].finished==0) { PA_SetSpriteXY(1,21,191, -(moreframes-achievement[3].frames+300-88) ); }
	if(moreframes>=achievement[3].frames+366&& achievement[3].done==1) achievement[3].finished=1;

	// Achievement #4 : Get to the corner
	if(sprite.x>1270000&&sprite.y<48000&&achievement[4].done==0&& achievement[4].finished==0) { achievement[4].done=1; achievement[4].frames=frames; }
	if(frames<=achievement[4].frames+64  && frames>=achievement[4].frames && achievement[4].done==1&& achievement[4].finished==0) { PA_SetSpriteXY(1,28,191, frames-achievement[4].frames-64) ; }
	if(frames>=achievement[4].frames+301 && frames<=achievement[4].frames+364 && achievement[4].done==1&& achievement[4].finished==0) { PA_SetSpriteXY(1,28,191, -(frames-achievement[4].frames+300-88) ); }
	if(frames>=achievement[4].frames+366&& achievement[4].done==1) achievement[4].finished=1;

	// Achievement #5 : Throw an axe on the dead grinning collosus while mini
	if(moreframes<=achievement[5].frames+64  && moreframes>=achievement[5].frames && achievement[5].done==1&& achievement[5].finished==0) { PA_SetSpriteXY(1,29,191, moreframes-achievement[5].frames-64) ; }
	if(moreframes>=achievement[5].frames+301 && moreframes<=achievement[5].frames+364 && achievement[5].done==1&& achievement[5].finished==0) { PA_SetSpriteXY(1,29,191, -(moreframes-achievement[5].frames+300-88) ); }
	if(moreframes>=achievement[5].frames+366&& achievement[5].done==1) achievement[5].finished=1;
	
	// Achievement #6 : Throw a total of 250 axes
	if(axescount>=250&&achievement[6].done==0&& achievement[6].finished==0) { achievement[6].done=1; achievement[6].frames=frames; }
	if(frames<=achievement[6].frames+64  && frames>=achievement[6].frames && achievement[6].done==1&& achievement[6].finished==0) { PA_SetSpriteXY(1,30,191, frames-achievement[6].frames-64) ; }
	if(frames>=achievement[6].frames+301 && frames<=achievement[6].frames+364 && achievement[6].done==1&& achievement[6].finished==0) { PA_SetSpriteXY(1,30,191, -(frames-achievement[6].frames+300-88) ); }
	if(frames>=achievement[6].frames+366&& achievement[6].done==1) achievement[6].finished=1;

	// Achievement #7 : Try to get back when the door is closed
	if(frames<=achievement[7].frames+64  && frames>=achievement[7].frames && achievement[7].done==1&& achievement[7].finished==0) { PA_SetSpriteXY(1,31,191, frames-achievement[7].frames-64) ; }
	if(frames>=achievement[7].frames+301 && frames<=achievement[7].frames+364 && achievement[7].done==1&& achievement[7].finished==0) { PA_SetSpriteXY(1,31,191, -(frames-achievement[7].frames+300-88) ); }
	if(frames>=achievement[7].frames+366&& achievement[7].done==1) achievement[7].finished=1;
	
	// Achievement #8 : Stay up when boss is dying
	if(chandelierfinish==1&&sprite.y<140000&&achievement[8].done==0&& achievement[8].finished==0) { achievement[8].done=1; achievement[8].frames=frames; }
	if(frames<=achievement[8].frames+64  && frames>=achievement[8].frames && achievement[8].done==1&& achievement[8].finished==0) { PA_SetSpriteXY(1,32,191, frames-achievement[8].frames-64) ; }
	if(frames>=achievement[8].frames+301 && frames<=achievement[8].frames+364 && achievement[8].done==1&& achievement[8].finished==0) { PA_SetSpriteXY(1,32,191, -(frames-achievement[8].frames+300-88) ); }
	if(frames>=achievement[8].frames+366&& achievement[8].done==1) achievement[8].finished=1;

	// Achievement #9 : Try to burn the boss
	if(frames<=achievement[9].frames+64  && frames>=achievement[9].frames && achievement[9].done==1&& achievement[9].finished==0) { PA_SetSpriteXY(1,33,191, frames-achievement[9].frames-64) ; }
	if(frames>=achievement[9].frames+301 && frames<=achievement[9].frames+364 && achievement[9].done==1&& achievement[9].finished==0) { PA_SetSpriteXY(1,33,191, -(frames-achievement[9].frames+300-88) ); }
	if(frames>=achievement[9].frames+366&& achievement[9].done==1) achievement[9].finished=1;

	// Achievement #10 : Hurt your head 20 times
	if(ceilingcount>=80&&achievement[10].done==0&& achievement[10].finished==0) { achievement[10].done=1; achievement[10].frames=frames; }
	if(frames<=achievement[10].frames+64  && frames>=achievement[10].frames && achievement[10].done==1&& achievement[10].finished==0) { PA_SetSpriteXY(1,34,191, frames-achievement[10].frames-64) ; }
	if(frames>=achievement[10].frames+301 && frames<=achievement[10].frames+364 && achievement[10].done==1&& achievement[10].finished==0) { PA_SetSpriteXY(1,34,191, -(frames-achievement[10].frames+300-88) ); }
	if(frames>=achievement[10].frames+366&& achievement[10].done==1) achievement[10].finished=1;

	// Achievement #11 : Pause for 1 min 30
	if(framepause>=2700&&achievement[11].done==0&& achievement[11].finished==0) { achievement[11].done=1; achievement[11].frames=frames; }
	if(frames<=achievement[11].frames+64  && frames>=achievement[11].frames && achievement[11].done==1&& achievement[11].finished==0) { PA_SetSpriteXY(1,35,191, frames-achievement[11].frames-64) ; }
	if(frames>=achievement[11].frames+301 && frames<=achievement[11].frames+364 && achievement[11].done==1&& achievement[11].finished==0) { PA_SetSpriteXY(1,35,191, -(frames-achievement[11].frames+300-88) ); }
	if(frames>=achievement[11].frames+366&& achievement[11].done==1) achievement[11].finished=1;
	
	// Achivement #12 : Beat the game with black-out and No Map
	if(moreframes<=achievement[12].frames+64  && moreframes>=achievement[12].frames && achievement[12].done==1&& achievement[12].finished==0) { PA_SetSpriteXY(1,36,191, moreframes-achievement[12].frames-64) ; }
	if(moreframes>=achievement[12].frames+301 && moreframes<=achievement[12].frames+364 && achievement[12].done==1&& achievement[12].finished==0) { PA_SetSpriteXY(1,36,191, -(moreframes-achievement[12].frames+300-88) ); }
	if(moreframes>=achievement[12].frames+366&& achievement[12].done==1) achievement[12].finished=1;

	// Achivement #13 : Beat the game with Inversed Mod
	if(moreframes<=achievement[13].frames+64  && moreframes>=achievement[13].frames && achievement[13].done==1&& achievement[13].finished==0) { PA_SetSpriteXY(1,37,191, moreframes-achievement[13].frames-64) ; }
	if(moreframes>=achievement[13].frames+301 && moreframes<=achievement[13].frames+365 && achievement[13].done==1&& achievement[13].finished==0) { PA_SetSpriteXY(1,37,191, -(moreframes-achievement[13].frames+300-88) ); }
	if(moreframes>=achievement[13].frames+366&& achievement[13].done==1) achievement[13].finished=1;

	// Achievement #14 : Keep the health bar low for 12 seconds
	if(mods[9]==0&&bosstimer>=600&&achievement[14].done==0&& achievement[14].finished==0) { achievement[14].done=1; achievement[14].frames=frames; }
	if(frames<=achievement[14].frames+64  && frames>=achievement[14].frames && achievement[14].done==1&& achievement[14].finished==0) { PA_SetSpriteXY(1,38,191, frames-achievement[14].frames-64) ; }
	if(frames>=achievement[14].frames+301 && frames<=achievement[14].frames+364 && achievement[14].done==1&& achievement[14].finished==0) { PA_SetSpriteXY(1,38,191, -(frames-achievement[14].frames+300-88) ); }
	if(frames>=achievement[14].frames+366&& achievement[14].done==1) achievement[14].finished=1;

	// Achivement #15 : Beat the game 2 times. With same seconds and Minutes
	if(moreframes<=achievement[15].frames+64  && moreframes>=achievement[15].frames && achievement[15].done==1&& achievement[15].finished==0) { PA_SetSpriteXY(1,39,191, moreframes-achievement[15].frames-64) ; }
	if(moreframes>=achievement[15].frames+301 && moreframes<=achievement[15].frames+364 && achievement[15].done==1&& achievement[15].finished==0) { PA_SetSpriteXY(1,39,191, -(moreframes-achievement[15].frames+300-88) ); }
	if(moreframes>=achievement[15].frames+366&& achievement[15].done==1) achievement[15].finished=1;
	
	// Achievement #16 : Get the 5 stars
	if(starstotal==5&&achievement[16].done==0&& achievement[16].finished==0) { achievement[16].done=1; achievement[16].frames=frames; }
	if(frames<=achievement[16].frames+64  && frames>=achievement[16].frames && achievement[16].done==1&& achievement[16].finished==0) { PA_SetSpriteXY(1,42,191, frames-achievement[16].frames-64) ; }
	if(frames>=achievement[16].frames+301 && frames<=achievement[16].frames+364 && achievement[16].done==1&& achievement[16].finished==0) { PA_SetSpriteXY(1,42,191, -(frames-achievement[16].frames+300-88) ); }
	if(frames>=achievement[16].frames+366&& achievement[16].done==1) achievement[16].finished=1;

	// Stars related
	starstotal=0;
	for(i=0;i<5;i++) {
	if ((scrollx < star[i].x+norm_fix(256)) && (scrollx > star[i].x-norm_fix(256)) && (scrolly+norm_fix(256) > star[i].y-norm_fix(96)) && (scrolly+norm_fix(256) < star[i].y+norm_fix(192-64)) )
				PA_DualSetSpriteXY(i+73, fix_norm(star[i].x-scrollx), fix_norm(star[i].y-scrolly)+64);
	else PA_DualSetSpriteXY(i+73, -250, -250);
	if(PA_SpriteTouched(i+73)) 
	{
		star[i].alive=0;
	}
	if(star[i].alive==0)
		PA_DualSetSpriteAnim(i+73,1);
	else
		PA_DualSetSpriteAnim(i+73,0);
	if(star[i].alive==0)
		starstotal++;
	}
	// Stars related



	if(Pad.Newpress.Select && !(sprite.x<42000 && sprite.y<52000) ) { selectswitch++; for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                ");}

	if (selectswitch==1 && nodebug==1) selectswitch=2;
	if (selectswitch==3) selectswitch=0;

	seconds = (frames/60)-(60*minutes);
	minutes = (frames/3600);
	
	if (mods[2]==1 && selectswitch==2) selectswitch=0;

	if (selectswitch == 2 && mods[2]==0) {
		for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                ");
		PA_HideBg(1, 1);PA_HideBg(1, 0);PA_ShowBg(1, 2);
		if(chandelierfinish==0&&mods[0]==0) PA_SetSpriteXY(1,26,(fix_norm(Chandelier.x)/11)+258,fix_norm(Chandelier.y)/11+89);
			else PA_SetSpriteXY(1,26,-250,-250);
		if(GetFire==1) PA_SetSpriteXY(1,25,(fix_norm(sprite.x)/11)-7-fix_norm(721000)+5,fix_norm(sprite.y)/11-3+91);
			else PA_SetSpriteXY(1,25,-250,-250);
		if(sprite.x<724000) PA_SetSpriteXY(1,22,(fix_norm(sprite.x)/11)-7,fix_norm(sprite.y)/11-3);
		if(sprite.x>724000) PA_SetSpriteXY(1,22,(fix_norm(sprite.x)/11)-7-fix_norm(721000)+5,fix_norm(sprite.y)/11-3+91);
			if(doorclosed==1) { PA_SetSpriteXY(1,24,55,164);
				if (boss.shooting==1) PA_SetSpriteAnim(1,23, 0);
				else {
					if (boss.moving==0 && sprite.y > norm_fix(boss.y) ) PA_SetSpriteAnim(1,23,1);
					if (sprite.y > norm_fix(boss.y) && boss.moving==1 ) PA_SetSpriteAnim(1,23,2);
					if ( (sprite.y < norm_fix(boss.y)) ) PA_SetSpriteAnim(1,23,3);
				}
				if (boss.alive==1) PA_SetSpriteXY(1,23,boss.x/11-262,boss.y);
			if (boss.flipped==1) PA_SetSpriteHflip(1,23,1); else PA_SetSpriteHflip(1,23,0);}
		else { PA_SetSpriteXY(1,23,-250,-250); PA_SetSpriteXY(1,24,-250,-250);}
	}
	else { for (i=0;i<6;i++) PA_SetSpriteXY(1,i+22,-250,-250); }

	if (selectswitch == 1){
	PA_OutputText(1,0,0, "Version : %c1 %s", version);
	PA_OutputText(1,1,7, " F:%d  MoarFram:%d   ", frames, moreframes);
	PA_OutputText(1,1,8, " Test= %d ", test);
	PA_OutputText(1,1,9, " Time= %d:%d ",minutes, seconds);
	PA_OutputText(1,1,10, " X= %d Y= %d VY= %d \nSx= %d Sy= %d Ix %d Iy %d", sprite.x, sprite.y, sprite.vy, scrollx, scrolly,scrollxinit, scrollyinit);
	PA_OutputText(1,1,12, " Stylus X= %d Y= %d \nInit X= %d Y= %d  ", Stylus.X, Stylus.Y,stylusinitx,stylusinity);
	PA_OutputText(1,0,14, "Boss.life= %d", boss.life);
	PA_OutputText(1,1,15, "FREE SPACE");
	PA_OutputText(1,0,18, "Prochain Changement : /n%c1%s", lastNTC);
	PA_OutputText(1,0,20, "Update Majeur : /n%c1%s", lastmajor);
	PA_OutputText(1,0,22, "Update Mineur : /n%c1%s", lastminor);
	PA_ShowBg(1, 0);PA_HideBg(1, 1);PA_HideBg(1, 2);
	}

	if (selectswitch==0) {
	PA_HideBg(1,0);
	if(mods[1]==0)PA_ShowBg(1, 1);
	else PA_HideBg(1,1);
	PA_HideBg(1, 2);
	}

	if(mods[14]==0) {
	leftwalking=0;
	rightwalking=0;
	}
	else {
		if(Pad.Newpress.Left) {leftwalking=1; rightwalking=0;}
		if(Pad.Newpress.Right) {leftwalking=0; rightwalking=1;}
	}

	if(mods[7]==0){
	PA_EasyBgScrollXY(0, 1, fix_norm(scrollx),fix_norm(scrolly)+192);
	PA_EasyBgScrollXY(1, 1, fix_norm(scrollx),fix_norm(scrolly)-24);
	}
	if(mods[7]==1){
	PA_EasyBgScrollXY(0, 1, fix_norm(scrollx)+1455,fix_norm(scrolly)+2605);
	PA_EasyBgScrollXY(1, 1, fix_norm(scrollx)+6043,fix_norm(scrolly)-115);
	}

	if(!Stylus.Held) {
		if (((fix_norm(sprite.x-scrollx)) > 130) && (fix_norm(sprite.x) < 5056-128)){
			scrollx = sprite.x - norm_fix(130);
			scrollxinit=scrollx;
		}
		else if ((((sprite.x-scrollx)>>8) < 84) && ((sprite.x>>8) > 64)){
			scrollx = sprite.x - norm_fix(84);
			scrollxinit=scrollx;
		}
		
		if (((fix_norm(sprite.y-scrolly)) > 70+192) && (fix_norm(sprite.y) < 895-110)){
			scrolly = sprite.y - norm_fix(70+192);
			scrollyinit=scrolly;
		}
		else if (((fix_norm(sprite.y-scrolly)) < 70+192) && ((sprite.y>>8) > 70+192)){
			scrolly = sprite.y - norm_fix(70+192);
			scrollyinit=scrolly;
		}
		if (scrolly>133000) scrolly=133000;
		if (scrolly<-18000) scrolly=-2000;
	}

	if (Stylus.Held) {
		if(Stylus.X-20>=128) scrollx=scrollx+norm_fix(1);
		if(Stylus.X+20<=128) scrollx=scrollx-norm_fix(1);
		if(Stylus.Y-20>=96 && scrolly<130000) scrolly=scrolly+norm_fix(1);
		if(Stylus.Y+20<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(1);
		if(Stylus.X-45>=128) scrollx=scrollx+norm_fix(3);
		if(Stylus.X+45<=128) scrollx=scrollx-norm_fix(3);
		if(Stylus.Y-45>=96 && scrolly<130000) scrolly=scrolly+norm_fix(3);
		if(Stylus.Y+45<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(3);
		if(Stylus.X-75>=128) scrollx=scrollx+norm_fix(3);
		if(Stylus.X+75<=128) scrollx=scrollx-norm_fix(3);
		if(Stylus.Y-75>=96 && scrolly<130000) scrolly=scrolly+norm_fix(3);
		if(Stylus.Y+75<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(3);
		
		scrollxinit=sprite.x- norm_fix(107);
		scrollyinit=sprite.y- norm_fix(70+192);

		if (((fix_norm(sprite.x-scrollx)) > 255) && (fix_norm(sprite.x) < 5056-128)){
			scrollx = sprite.x - norm_fix(255);
		}
		else if ((((sprite.x-scrollx)>>8) < -32) && ((sprite.x>>8) > 64)){
			scrollx = sprite.x - norm_fix(-32);
		}
		
		if (((fix_norm(sprite.y-scrolly)) > 70+192+132) && (fix_norm(sprite.y) < 895)){
			scrolly = sprite.y - norm_fix(70+192+132);
		}
		else if (((fix_norm(sprite.y-scrolly)) < 70+192-108) && ((sprite.y>>8) > 70+192-108)){
			scrolly = sprite.y - norm_fix(70+192-108);
		}
	}
	if (Stylus.Released) { scrollx=scrollxinit;scrolly=scrollyinit;}
	
	if(mods[7]==0) {
	if (sprite.x > 881000 && sprite.x < 882000) AS_MP3Stop();
	if (sprite.x > 882100 && finish==0) AS_MP3DirectPlay((u8*)bustabuss, (u32)bustabuss_size);
	if (sprite.x > 53000 && sprite.x < 881000) { AS_MP3DirectPlay((u8*)cave, (u32)cave_size); AS_MP3Unpause(); }
	}

	if (fix_norm(sprite.x) > fix_norm(882000) && fix_norm(sprite.x) < fix_norm(882100)+256 && fix_norm(scrolly+norm_fix(256)) > fix_norm(212936)+16-192)
		PA_SetSpriteXY(0,119, fix_norm(876200)+2-fix_norm(scrollx),fix_norm(212936)+32-fix_norm(scrolly) );
	else PA_SetSpriteXY(0,119,-250,-250);

	if (sprite.x > 882100 && doorclosed==0) {
		AS_SoundQuickPlay(closedoor);
		PA_DualSetSpriteXY(50, fix_norm(876200)-fix_norm(scrollx), fix_norm(212936)+15-fix_norm(scrolly) );
		PA_DualSetSpriteXY(51, fix_norm(876200)-fix_norm(scrollx), fix_norm(212936)+16+30-fix_norm(scrolly) );
		PA_DualStartSpriteAnimEx(50, 0, 7, 45, ANIM_UPDOWN,1);
		PA_DualStartSpriteAnimEx(51, 0, 7, 45, ANIM_UPDOWN,1);
		framesnow=frames; // Frames 1
		doorclosed=1;
		
	}
	if ( doorclosed==1 && sprite.x < 885500 && sprite.y > 195000) { sprite.x += norm_fix(3)*mods[5]; 
	if(mods[3]==0) if(Pad.Held.Left && achievement[7].done==0&& achievement[7].finished==0) { achievement[7].done=1; achievement[7].frames=frames; } 
	if(mods[3]==1) if(Pad.Held.Right && achievement[7].done==0&& achievement[7].finished==0) { achievement[7].done=1; achievement[7].frames=frames; }
	}

	if(mods[15]==1&&GetFire==0&&finish==0) {
		PA_ShowBg(1, 0);
	PA_OutputSimpleText(1,1,15,"You lost the fire, start again    ");
		PA_WaitFor(PADNEWPRESS);
		PA_EasyBgLoad(1,2,thanksforplaying_top);
			PA_EasyBgLoad(0,2,skip_bottom); AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                "); reinit();
	}

	if(sprite.y>215000||sprite.x>2300000) 
	{PA_ShowBg(1, 0);
	PA_OutputSimpleText(1,1,15,"Out Of Bound                   ");
		PA_WaitFor(PADNEWPRESS);
		PA_EasyBgLoad(1,2,thanksforplaying_top);
			PA_EasyBgLoad(0,2,skip_bottom); AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                "); reinit();
	}

	if (doorclosed==1 && dontrunthiswhilevideo==0) {
		MoveBoss();
		AttackBoss();
		}
	else {
			for(i=61;i<73;i++) PA_DualSetSpriteXY(i,-250,-250);
		}
		
		if (sprite.shotted!=0) {
			GetFire=0;
			if ((framesnow2+1)==frames) sprite.vy = -1600; // Frames 2
			if ((framesnow2+1)<=frames && (framesnow2+40)>=frames&&sprite.shotted==2) sprite.x -= norm_fix(4-(8*spriteflipped));
			if ((framesnow2+1)<=frames && (framesnow2+120)>=frames) sprite.vy += gravity;
			if ((framesnow2+2)<=frames && (framesnow2+39)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+40)<=frames&& (framesnow2+59)>=frames) PA_DualSetSpriteAnim(80,8);
			if ((framesnow2+60)<=frames&& (framesnow2+79)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+80)<=frames&& (framesnow2+99)>=frames) PA_DualSetSpriteAnim(80,8);
			if ((framesnow2+100)<=frames&& (framesnow2+119)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+120)<=frames) {PA_DualSetSpriteAnim(80,8); 
				if(Pad.Held.Right) {
					PA_DualStartSpriteAnim(80, 1, 4,16);
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 0); PA_SetSpriteHflip(0, 40, 0); PA_SetSpriteHflip(0, 79, 0);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}
					spriteflipped = 0;
					if(mods[12]==1) {
					PA_DualStartSpriteAnim(78, 1, 4,16);
					PA_DualSetSpriteHflip(78, 0);
					}
				}
				else if(Pad.Held.Left) {
					PA_DualStartSpriteAnim(80,1,4,16);
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 1); PA_SetSpriteHflip(0, 40, 1); PA_SetSpriteHflip(0, 79, 1);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,-512,512);PA_SetRotsetNoAngle(0,21,-512,512); }
					spriteflipped = 1;
					if(mods[12]==1) {
					PA_DualStartSpriteAnim(78, 1, 4,16);
					PA_DualSetSpriteHflip(78, 1);
					}
				}
			}
			if ((framesnow2+121)<=frames && (framesnow2+240)>=frames) {			
				
				if(mods[3]==0) {
							if ((Pad.Held.Right || Pad.Held.Left) || leftwalking==1 || rightwalking==1) {
							if(mods[14]==0)sprite.x += (Pad.Held.Right - Pad.Held.Left)*SPEED*mods[5];
							if(mods[14]==1)sprite.x += (rightwalking - leftwalking)*SPEED*mods[5];
							sprite.walking = 1;
							}
							else sprite.walking = 0;
									
										if((Pad.Newpress.Right && !Pad.Held.Left) || rightwalking==1) {
									PA_DualStartSpriteAnim(80, 1, 4,16);
									if(mods[6]==0) { PA_DualSetSpriteHflip(80, 0); PA_SetSpriteHflip(0, 40, 0); PA_SetSpriteHflip(0, 79, 0);}
									if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}
									spriteflipped = 0;
										if(mods[12]==1) {
											PA_DualStartSpriteAnim(78, 1, 4,16);
											PA_DualSetSpriteHflip(78, 0);
											}
										}
										else if((Pad.Newpress.Left && !Pad.Held.Right) || leftwalking==1) {
									PA_DualStartSpriteAnim(80,1,4,16);
									if(mods[6]==0) { PA_DualSetSpriteHflip(80, 1); PA_SetSpriteHflip(0, 40, 1); PA_SetSpriteHflip(0, 79, 1);}
									if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,-512,512);PA_SetRotsetNoAngle(0,21,-512,512); }
									spriteflipped = 1;
										if(mods[12]==1) {
											PA_DualStartSpriteAnim(78, 1, 4,16);
											PA_DualSetSpriteHflip(78, 1);
											}
										}
						}

						
				if(mods[3]==1) {
							if ((Pad.Held.Right || Pad.Held.Left) || leftwalking==1 || rightwalking==1) {
							if(mods[14]==0)sprite.x += (Pad.Held.Left - Pad.Held.Right)*SPEED*mods[5];
							if(mods[14]==1)sprite.x += (leftwalking - rightwalking)*SPEED*mods[5];
							sprite.walking = 1;
							}
							else sprite.walking = 0;

											if((Pad.Newpress.Left && !Pad.Held.Right) || leftwalking==1) {
									PA_DualStartSpriteAnim(80, 1, 4,16);
									if(mods[6]==0) { PA_DualSetSpriteHflip(80, 0); PA_SetSpriteHflip(0, 40, 0); PA_SetSpriteHflip(0, 79, 0);}
									if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}
									spriteflipped = 0;
										if(mods[12]==1) {
											PA_DualStartSpriteAnim(78, 1, 4,16);
											PA_DualSetSpriteHflip(78, 0);
											}
									}
											else if((Pad.Newpress.Right && !Pad.Held.Left) || rightwalking==1) {
									if(mods[6]==0) { PA_DualSetSpriteHflip(80, 1); PA_SetSpriteHflip(0, 40, 1); PA_SetSpriteHflip(0, 79, 1);}
									if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,-512,512); PA_SetRotsetNoAngle(0,21,-512,512);}
									spriteflipped = 1;
										if(mods[12]==1) {
											PA_DualStartSpriteAnim(78, 1, 4,16);
											PA_DualSetSpriteHflip(78, 1);
											}
									}

						}


					if ( ((Pad.Newpress.Up)||(Pad.Newpress.B))  && TouchingGround() ) {
						sprite.vy = JUMP+(mods[8]*-800);
						sprite.centerjump = sprite.y;
						sprite.jumping=true;
						AS_SoundDefaultPlay((u8*)playerjump,(u32)playerjump_size,32,64,false,0);
						}
					
					if(sprite.jumping && !(Pad.Held.Up || Pad.Held.B) && sprite.vy<-400){
						sprite.vy=-400;
					}		

					if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) { PA_DualSetSpriteAnim(80, 5); if(mods[12]==1)PA_DualSetSpriteAnim(78, 5); }// Not on the ground
					else if(!((Pad.Held.Left)||(Pad.Held.Right)) || !((leftwalking==1)||(rightwalking==1))) { PA_DualSetSpriteAnim(80, 0); if(mods[12]==1)PA_DualSetSpriteAnim(78, 0);}// Standing Still
					if (Pad.Held.A || Pad.Held.Down) { PA_DualSetSpriteAnim(80, 7);	if(mods[12]==1)PA_DualSetSpriteAnim(78, 7);}// Attacking
					if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) { PA_DualSetSpriteAnim(80, 6); if(mods[12]==1)PA_DualSetSpriteAnim(78, 6);}// Falling

					if(sprite.vy>=1900&&mods[5]==2)sprite.vy=1900; // Acceleration Cap so you won't fall through floor while on hyperspeed.

					if (sprite.vy >= 2500&&mods[5]==1) fallinghigh = 1;
					if (sprite.vy >= 1900&&mods[5]==2) fallinghigh = 1;

					if(!Stylus.Held || !Pad.Newpress.Anykey) PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);
			}
			if ((framesnow2+121)<=frames && (framesnow2+139)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+140)<=frames && (framesnow2+159)) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+160)<=frames && (framesnow2+179)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+180)<=frames && (framesnow2+199)) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+200)<=frames && (framesnow2+219)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+220)<=frames && (framesnow2+240)) PA_DualSetSpriteAnim(80,9);
			if ((TouchingGroundTile(1, sprite.hitbox)!=1)) sprite.vy += gravity*mods[5];PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);sprite.y += sprite.vy*mods[5];CheckCollisions();if (sprite.vy >= 2300) fallinghigh = 1;// Compressed Collision
			if ((framesnow2+240)==frames) { sprite.shotted=0; framesnow2=0;}
		}
	
		if (sprite.shotted==0) {
			if(mods[3]==0) {
					if ((Pad.Held.Right || Pad.Held.Left) || leftwalking==1 || rightwalking==1) {
							if(mods[14]==0)sprite.x += (Pad.Held.Right - Pad.Held.Left)*SPEED*mods[5];
							if(mods[14]==1)sprite.x += (rightwalking - leftwalking)*SPEED*mods[5];
			sprite.walking = 1;
			}
			else sprite.walking = 0;
					
						if((Pad.Newpress.Right && !Pad.Held.Left) || rightwalking==1) {
					PA_DualStartSpriteAnim(80, 1, 4,16);
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 0); PA_SetSpriteHflip(0, 40, 0); PA_SetSpriteHflip(0, 79, 0);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}
					spriteflipped = 0;
						if(mods[12]==1) {
							PA_DualStartSpriteAnim(78, 1, 4,16);
							PA_DualSetSpriteHflip(78, 0);
							}
						}
						else if((Pad.Newpress.Left && !Pad.Held.Right) || leftwalking==1) {
					PA_DualStartSpriteAnim(80,1,4,16);
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 1); PA_SetSpriteHflip(0, 40, 1); PA_SetSpriteHflip(0, 79, 1);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,-512,512);PA_SetRotsetNoAngle(0,21,-512,512); }
					spriteflipped = 1;
						if(mods[12]==1) {
							PA_DualStartSpriteAnim(78, 1, 4,16);
							PA_DualSetSpriteHflip(78, 1);
							}
						}
		}

		
		if(mods[3]==1) {
			if ((Pad.Held.Right || Pad.Held.Left) || leftwalking==1 || rightwalking==1) {
							if(mods[14]==0)sprite.x += (Pad.Held.Left - Pad.Held.Right)*SPEED*mods[5];
							if(mods[14]==1)sprite.x += (leftwalking - rightwalking)*SPEED*mods[5];
			sprite.walking = 1;
			}
			else sprite.walking = 0;

							if((Pad.Newpress.Left && !Pad.Held.Right) || leftwalking==1) {
					PA_DualStartSpriteAnim(80, 1, 4,16);
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 0); PA_SetSpriteHflip(0, 40, 0); PA_SetSpriteHflip(0, 79, 0);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}
					spriteflipped = 0;
						if(mods[12]==1) {
							PA_DualStartSpriteAnim(78, 1, 4,16);
							PA_DualSetSpriteHflip(78, 0);
							}
					}
							else if((Pad.Newpress.Right && !Pad.Held.Left) || rightwalking==1) {
					if(mods[6]==0) { PA_DualSetSpriteHflip(80, 1); PA_SetSpriteHflip(0, 40, 1); PA_SetSpriteHflip(0, 79, 1);}
					if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,-512,512); PA_SetRotsetNoAngle(0,21,-512,512);}
					spriteflipped = 1;
						if(mods[12]==1) {
							PA_DualStartSpriteAnim(78, 1, 4,16);
							PA_DualSetSpriteHflip(78, 1);
							}
					}

		}


	if ( ((Pad.Newpress.Up)||(Pad.Newpress.B))  && TouchingGround() ) {
		sprite.vy = JUMP+(mods[8]*-800);
		sprite.centerjump = sprite.y;
		sprite.jumping=true;
		AS_SoundDefaultPlay((u8*)playerjump,(u32)playerjump_size,32,64,false,0);
		}
	
	if ((TouchingGroundTile(1, sprite.hitbox)!=1)) sprite.vy += gravity*mods[5];
	
	if(sprite.jumping && !(Pad.Held.Up || Pad.Held.B) && sprite.vy<-400){
		sprite.vy=-400;
	}		

	if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) { PA_DualSetSpriteAnim(80, 5); if(mods[12]==1)PA_DualSetSpriteAnim(78, 5); }// Not on the ground
	else if(!((Pad.Held.Left)||(Pad.Held.Right)) ) { PA_DualSetSpriteAnim(80, 0); if(mods[12]==1)PA_DualSetSpriteAnim(78, 0);}// Standing Still
	if (Pad.Held.A || Pad.Held.Down) { PA_DualSetSpriteAnim(80, 7);	if(mods[12]==1)PA_DualSetSpriteAnim(78, 7);}// Attacking
	if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) { PA_DualSetSpriteAnim(80, 6); if(mods[12]==1)PA_DualSetSpriteAnim(78, 6);}// Falling

	sprite.y += sprite.vy*mods[5];
	if(sprite.vy>=1900&&mods[5]==2)sprite.vy=1900; // Acceleration Cap so you won't fall through floor while on hyperspeed.
	CheckCollisions();

	if (sprite.vy >= 2500&&mods[5]==1) fallinghigh = 1;
	if (sprite.vy >= 1900&&mods[5]==2) fallinghigh = 1;

	if(!Stylus.Held || !Pad.Newpress.Anykey) PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);

		}
	
		timerseconds=27-seconds;
	if(finish!=1&&mods[11]==1) { PA_OutputText(0,1,21,"%c2Timer: %d        ",timerseconds); }
	if(mods[12]==1) PA_DualSetSpriteXY(78, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);
}


void AttackBoss(void) {
	int i=0;
	int a=0;
	
	// Sprite collision with boss
	if(finish!=1) {
		if (sprite.shotted==0 && fix_norm(sprite.x) < boss.x+192 && fix_norm(sprite.x) > boss.x-36 && fix_norm(sprite.y) > boss.y-64) {
			if(mods[10]==0)sprite.shotted=2; framesnow2=frames; persolife-=40;
			if(GetFire==1&&achievement[9].done==0&& achievement[9].finished==0) { achievement[9].done=1; achievement[9].frames=frames; }
		}

		if ((framesboss+maxtimer)<=frames) {
			a = PA_RandMinMax(0,2);
			if (a==0) { boss.shooting=1; boss.moving=0;}
			if (a==1) { boss.moving=1; boss.shooting=0;}
			if (a==2) { maxtimer=60; boss.moving=0; boss.shooting=0; }
			framesboss=frames;
		}
		
		if ( cooldown > 0 ) cooldown--;

		if (selectswitch == 1) PA_OutputText(1,1,1, "Shooting %d Moving %d",boss.shooting, boss.moving);

		if ( sprite.x > 940000 && sprite.x < 1222000 && boss.shooting==1 && cooldown==0) {
				AS_SoundDefaultPlay((u8*)monsterAttack,(u32)monsterAttack_size,16,64,false,0);
				bullet[bulletnumber].alive = 1;
				if (selectswitch == 1) PA_OutputText(1,1,4, "Number= %d BossX=%d Y=%d    ", bulletnumber, boss.x, boss.y);
				bullet[bulletnumber].x = (boss.x)+196-(208*boss.flipped);
				bullet[bulletnumber].y = (boss.y)+184;
				angle = PA_GetAngle((boss.x)+196-(208*boss.flipped), (boss.y)+126, fix_norm(sprite.x), fix_norm(sprite.y)) ;
				bullet[bulletnumber].velx = PA_Cos(angle)*mods[5];
				bullet[bulletnumber].vely = -PA_Sin(angle)*mods[5];
				bullet[bulletnumber].initx = bullet[bulletnumber].x;
				bullet[bulletnumber].inity = bullet[bulletnumber].y;
				bullet[bulletnumber].spritex = fix_norm(sprite.x);
				bullet[bulletnumber].spritey = fix_norm(sprite.y);
				if (selectswitch == 1) PA_OutputText(1,1,5, "ang= %d velx= %d Y= %d",angle,bullet[bulletnumber].velx, bullet[bulletnumber].vely);
				bulletnumber++;
				if (bulletnumber >= 95) bulletnumber = 84;
				if (mods[4]==0) cooldown = 10;
				if (mods[4]==1) cooldown = 7;
				if (mods[4]==0) maxtimer=60;
				if (mods[4]==1) maxtimer=120;
				if (mods[0]==1) maxtimer=140;
			}
	}
	for (i=84;i<96;i++) {
		// Add for wall collision  (GetTile((bullet[i].x)+10, (bullet[i].y)-35))  ||
		if (bullet[i].y >= 204000)  {bullet[i].alive=0; bullet[i].x=0; bullet[i].y=0; PA_DualSetSpriteXY(i,-200,-250);}
		
		if ( PA_Distance(bullet[i].initx,bullet[i].inity,bullet[i].spritex,bullet[i].spritey)*1.5<PA_Distance(bullet[i].initx,bullet[i].inity,bullet[i].x,bullet[i].y) && bullet[i].alive==1) {
			if (selectswitch==0) {
					if (fix_norm(scrollx) < bullet[i].x+256 && fix_norm(scrollx) > bullet[i].x-256 && fix_norm(scrolly+norm_fix(256)) < bullet[i].y+384 && fix_norm(scrolly+norm_fix(256)) > bullet[i].y-192 )
					{ PA_DualSetSpriteXY(puffnumber, bullet[i].x-fix_norm(scrollx), bullet[i].y-fix_norm(scrolly) ); PA_DualStartSpriteAnimEx(puffnumber, 0, 7, 10, ANIM_UPDOWN,1); } 
					else PA_DualSetSpriteXY(puffnumber,-250,-250);
				}
			else {
					if (fix_norm(scrollx) < bullet[i].x+256 && fix_norm(scrollx) > bullet[i].x-256 && fix_norm(scrolly+norm_fix(256)) < bullet[i].y+75 && fix_norm(scrolly+norm_fix(256)) > bullet[i].y-192 )
					{ PA_DualSetSpriteXY(puffnumber, bullet[i].x-fix_norm(scrollx), bullet[i].y-fix_norm(scrolly) ); PA_DualStartSpriteAnimEx(puffnumber, 0, 7, 10, ANIM_UPDOWN,1); } 
					else PA_DualSetSpriteXY(puffnumber,-250,-250);
				}
			
			bullet[i].alive=0;
			bullet[i].x=0;
			bullet[i].y=0;
			PA_DualSetSpriteXY(i,-250,-250);
			puffnumber++;
			if (puffnumber<50 || puffnumber>60) puffnumber=50;
		}

		if ( ( bullet[i].x > fix_norm(sprite.x) && bullet[i].x < fix_norm(sprite.x)+32 && bullet[i].y < fix_norm(sprite.y)+70 && bullet[i].y > fix_norm(sprite.y)+30) ) // If bullet collide
				{
				if (sprite.shotted==0 && bullet[i].x > fix_norm(sprite.x) && bullet[i].x < fix_norm(sprite.x)+32 && bullet[i].y < fix_norm(sprite.y)+70 && bullet[i].y > fix_norm(sprite.y)+30) {
				if(mods[10]==0)sprite.shotted=1;
				persolife-=70;
				framesnow2=frames; // Frames 2
				PA_DualSetSpriteAnim(80,8);
				if(mods[12]==1)PA_DualSetSpriteAnim(78,8);
				}
				PA_DualSetSpriteXY(i,-250,-250);
				bullet[i].x=0;
				bullet[i].y=0;
				bullet[i].alive = 0;
		}
			else
		if (bullet[i].alive == 1) 
			{
				bullet[i].x += bullet[i].velx/75;
				bullet[i].y += bullet[i].vely/75;
				if (selectswitch==0) {
					if (fix_norm(scrollx) < bullet[i].x+256 && fix_norm(scrollx) > bullet[i].x-256 && fix_norm(scrolly+norm_fix(256)) < bullet[i].y+384 && fix_norm(scrolly+norm_fix(256)) > bullet[i].y-192 )
						PA_DualSetSpriteXY(i, bullet[i].x-fix_norm(scrollx), bullet[i].y-fix_norm(scrolly));
					else PA_DualSetSpriteXY(i,-250,-250);
				}
				else {
					if (fix_norm(scrollx) < bullet[i].x+256 && fix_norm(scrollx) > bullet[i].x-256 && fix_norm(scrolly+norm_fix(256)) < bullet[i].y+75 && fix_norm(scrolly+norm_fix(256)) > bullet[i].y-192 )
						PA_DualSetSpriteXY(i, bullet[i].x-fix_norm(scrollx), bullet[i].y-fix_norm(scrolly));
					else PA_DualSetSpriteXY(i,-250,-250);
				}

			if (selectswitch == 1) PA_OutputText(1,1,2, "BullX=%d Y=%d velx=%d vely=%d     ", bullet[i].x, bullet[i].y,bullet[i].velx,bullet[i].vely);
			}
	}
}

void MoveBoss(void) {
	int i=0;
	if (doorclosed==1) {
	if(selectswitch==0) {
		PA_DualSetSpriteXY(3,1,1);	// HealthBar 1
		PA_DualSetSpriteXY(2,65,1);	// HealthBar 2
		PA_DualSetSpriteXY(1,33+boss.life/20,1); // RedBar 1
		PA_DualSetSpriteXY(0,3,1); // RedBar part2
	}
	else {
		if(mods[0]==0){
		PA_DualSetSpriteXY(3,1,1+192+48);	// HealthBar 1
		PA_DualSetSpriteXY(2,65,1+192+48);	// HealthBar 2
		PA_DualSetSpriteXY(1,33+boss.life/20,1+192+48); // RedBar 1
		PA_DualSetSpriteXY(0,3,1+192+48); // RedBar part2
		}
		else {
		PA_SetSpriteX(1,2,137+boss.life/10 -128);
		if(boss.life/10 -120<-112) PA_SetSpriteX(1,9,137+boss.life/10 -120);
		if(boss.life/10 -120<-96) PA_SetSpriteX(1,8,137+boss.life/10 -120);
		if(boss.life/10 -120<-80) PA_SetSpriteX(1,7,137+boss.life/10 -120);
		if(boss.life/10 -120<-64) PA_SetSpriteX(1,6,137+boss.life/10 -120);
		if(boss.life/10 -120<-48) PA_SetSpriteX(1,5,137+boss.life/10 -120);
		if(boss.life/10 -120<-32) PA_SetSpriteX(1,4,137+boss.life/10 -120);
		if(boss.life/10 -120<-16) PA_SetSpriteX(1,3,137+boss.life/10 -120);
	}
	}
	
	if(mods[0]==0) {
		if (boss.life<=640) boss.life += 2;
		if (boss.life<=120) boss.life += 3;
		if (boss.life<=10) boss.life += 3;
		}
	}
	if(mods[0]==0) {
		if(boss.life>=540) bosstimer=0;
		else if(boss.life>=10&&boss.life<540) bosstimer++;
	}
	
	if(mods[0]==1) {
		if(boss.life<=0&&boss.alive==1) { 
		boss.alive=0; 
		finish=1;
		frames=0;
		AS_SoundQuickPlay(explosionsmall);
		if(PA_UserInfo.Language==2) PA_OutputText(0,1,19,"%c2Félicitation !/nVous avez terminé le mode RPG !/nTemps:       ");
			else PA_OutputText(0,1,19,"%c2Congratulation !/nYou beat RPG Mode !/nTime :          ");
			if (minutes==0) {	if (seconds==0) PA_OutputText(0,1,21,"%c2Only the programmer should get this");
								if (seconds==1) PA_OutputText(0,1,22,"%c2How did you do that ?");
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d seconds ",seconds); }
			if (minutes==1) {	if (seconds==0) PA_OutputText(0,1,22,"%c2%d minute",minutes);
								if (seconds==1) PA_OutputText(0,1,22,"%c2%d minute %d second ",minutes, seconds);
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d minute %d seconds ",minutes, seconds); }
			if (minutes>=2) {	if (seconds==0) PA_OutputText(0,1,22,"%c2%d minutes",minutes);
								if (seconds==1) PA_OutputText(0,1,22,"%c2%d minutes %d second ",minutes, seconds);
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d minutes %d seconds ",minutes, seconds); }
			if (minutes>=10 && minutes <= 59) PA_OutputText(0,1,22,"%c2 Never thought it could be that hard");
			if (minutes>=60) PA_OutputText(0,1,22,"%c2 I'm wondering if you're Brilliant or Dumb");
			if((mods[5]==1&&mods[8]==0&&seconds<=27&&minutes==0&&achievement[3].done==0&&achievement[3].finished==0)&&(seconds>=25)&&finish==1) { achievement[3].done=1; achievement[3].frames=moreframes; }
			if(mods[1]==1&&mods[2]==1&&achievement[12].done==0&&achievement[12].finished==0) { achievement[12].done=1; achievement[12].frames=moreframes; }
			if(mods[3]==1&&achievement[13].done==0&&achievement[13].finished==0) { achievement[13].done=1; achievement[13].frames=moreframes; }
			if(lastseconds==seconds&&lastminutes==minutes&&achievement[15].done==0&&achievement[15].finished==0) { achievement[15].done=1; achievement[15].frames=moreframes; }
			lastseconds=seconds;
			lastminutes=minutes;
			persoexp+=200;
	bosspart[0].x=boss.x;   bosspart[0].y=boss.y; bosspart[0].flipped=boss.flipped;
	bosspart[1].x=boss.x;   bosspart[1].y=boss.y; bosspart[1].flipped=boss.flipped;
	bosspart[2].x=boss.x;   bosspart[2].y=boss.y; bosspart[2].flipped=boss.flipped;
	bosspart[3].x=boss.x;   bosspart[3].y=boss.y; bosspart[3].flipped=boss.flipped;
	bosspart[4].x=boss.x;   bosspart[4].y=boss.y; bosspart[4].flipped=boss.flipped;
	bosspart[5].x=boss.x;   bosspart[5].y=boss.y; bosspart[5].flipped=boss.flipped;
	bosspart[6].x=boss.x;   bosspart[6].y=boss.y; bosspart[6].flipped=boss.flipped;
	bosspart[7].x=boss.x;   bosspart[7].y=boss.y; bosspart[7].flipped=boss.flipped;
	bosspart[8].x=boss.x;   bosspart[8].y=boss.y; bosspart[8].flipped=boss.flipped;
	bosspart[9].x=boss.x;   bosspart[9].y=boss.y; bosspart[9].flipped=boss.flipped;
	bosspart[10].x=boss.x;   bosspart[10].y=boss.y; bosspart[10].flipped=boss.flipped;
	bosspart[11].x=boss.x;   bosspart[11].y=boss.y; bosspart[11].flipped=boss.flipped;
		}
	}

	if (chandelierfinish==0) {
	if (boss.shooting==1) {
		for(i=61;i<64;i++)
		PA_DualSetSpriteAnim(i, 0);
		for(i=64;i<73;i++)
		PA_SetSpriteAnim(0,i,0);
	}
	else {
		if (boss.moving==0 && sprite.y > norm_fix(boss.y) ) {
			for(i=61;i<64;i++)
			PA_DualSetSpriteAnim(i,1);
			for(i=64;i<73;i++)
			PA_SetSpriteAnim(0,i,1);
		}
		if (sprite.y > norm_fix(boss.y) && boss.moving==1 ) {
			maxtimer=200;
			for(i=61;i<64;i++)
			PA_DualSetSpriteAnim(i,2);
			for(i=64;i<73;i++)
			PA_SetSpriteAnim(0,i,2);
		}
		if ( (sprite.y < norm_fix(boss.y)) ) {
			for(i=61;i<64;i++)
				PA_DualSetSpriteAnim(i,3);
				for(i=64;i<73;i++)
				PA_SetSpriteAnim(0,i,3);
			}
	}
	
	if(boss.flipped){
		for(i=61;i<64;i++)
		PA_DualSetSpriteHflip(i, 1);
		for(i=64;i<73;i++)
		PA_SetSpriteHflip(0,i,1);
	}
	else {
		for(i=61;i<64;i++)
		PA_DualSetSpriteHflip(i, 0);
		for(i=64;i<73;i++)
		PA_SetSpriteHflip(0,i,0);
	}
	}

	if (finish==0) {
	if ( (sprite.x < norm_fix(boss.x+96)) && norm_fix(boss.x+96) > 1000000 ) {
		if (sprite.y > norm_fix(boss.y)) boss.flipped=1;
		if (boss.moving==1) boss.x = boss.x-2*mods[5];
	}

	if ( (sprite.x > norm_fix(boss.x+96)) && norm_fix(boss.x+96) < 1170000 ) {
		boss.flipped=0;
		if (boss.moving==1) boss.x = boss.x+2*mods[5];
	}
	}
	else if(mods[0]==0){
		if (boss.x > fix_norm(1060000) )	boss.x -= 2*mods[5];
		if (boss.x < fix_norm(1060000) )	boss.x += 2*mods[5];
	}

	if(mods[0]==0) {
		if (selectswitch==0) {

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
			PA_DualSetSpriteXY(61, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(61, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
		PA_DualSetSpriteXY(62, boss.x+64-fix_norm(scrollx), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(62, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
		PA_DualSetSpriteXY(63, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(63, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,64, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,64, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,65, boss.x+64-fix_norm(scrollx), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,65, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,66, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,66, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,67, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,67, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,68, boss.x+64-fix_norm(scrollx), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,68, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,69, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,69, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,70, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,70, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,71, boss.x+64-fix_norm(scrollx), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,71, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,72, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,72, -250, -250);
		}
		else {

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)) )
		PA_DualSetSpriteXY(61, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(61, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(62, boss.x+64-fix_norm(scrollx), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(62, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(63, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(63, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,64, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,64, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,65, boss.x+64-fix_norm(scrollx), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,65, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,66, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,66, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,67, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,67, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,68, boss.x+64-fix_norm(scrollx), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,68, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,69, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,69, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,70, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,70, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,71, boss.x+64-fix_norm(scrollx), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,71, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,72, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,72, -250, -250);
		}
	}
	if(mods[0]==1&&finish==0) {
		if (selectswitch==0) {

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
			PA_DualSetSpriteXY(61, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(61, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
		PA_DualSetSpriteXY(62, boss.x+64-fix_norm(scrollx), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(62, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) )
		PA_DualSetSpriteXY(63, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(63, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,64, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,64, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,65, boss.x+64-fix_norm(scrollx), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,65, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,66, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,66, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,67, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,67, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,68, boss.x+64-fix_norm(scrollx), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,68, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,69, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,69, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,70, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,70, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,71, boss.x+64-fix_norm(scrollx), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,71, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,72, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,72, -250, -250);
		}
		else {

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)) )
		PA_DualSetSpriteXY(61, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(61, -250, -250);
		
		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(62, boss.x+64-fix_norm(scrollx), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(62, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(boss.y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(63, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(63, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,64, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,64, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,65, boss.x+64-fix_norm(scrollx), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,65, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,66, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,66, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,67, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,67, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,68, boss.x+64-fix_norm(scrollx), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,68, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,69, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,69, -250, -250);

		if ((scrollx < norm_fix(boss.x+(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,70, boss.x-fix_norm(scrollx)+(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,70, -250, -250);

		if ((scrollx < norm_fix(boss.x+64)+norm_fix(256)) && (scrollx > norm_fix(boss.x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,71, boss.x+64-fix_norm(scrollx), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,71, -250, -250);

		if ((scrollx < norm_fix(boss.x+128-(128*boss.flipped))+norm_fix(256)) && (scrollx > norm_fix(boss.x+128-(128*boss.flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(boss.y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,72, boss.x+128-fix_norm(scrollx)-(128*boss.flipped), boss.y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,72, -250, -250);
		}
	}
}

u8 GetTile(s16 x, s16 y){
	if (y < 0) return 1; if (x < 0) return 1;
	return BGCollision_Map[((y>>3)*levellength) + (x>>3)];
}

u8 TileCollision(pointinfo point){
   return (GetTile(fix_norm(sprite.x)+point.x, fix_norm(sprite.y)+point.y));
}

u8 TouchingGround(void){
	return GetTile((fix_norm(sprite.x))+15, (fix_norm(sprite.y))+32);
}

u8 TouchingGroundTile(u8 touchingtile,hitboxinfo hitbox){
	if(TileCollision((hitbox.downtouching))==touchingtile)return 1;
	else return 2;
}

u8 anycollision(u8 tile, hitboxinfo hitbox){
   if(TileCollision(hitbox.left)==tile)return 1;
   if(TileCollision(hitbox.right)==tile)return 2;
   if(TileCollision(hitbox.up)==tile)return 3;
   if(TileCollision(hitbox.down)==tile)return 4;
   else return 0;
}   

void CheckCollisions(void){

	while(anycollision(1, sprite.hitbox)==1){ // Left Collision
		sprite.x+= norm_fix(1);
	}
	while(anycollision(1, sprite.hitbox)==2){ // Right Collision
		sprite.x-= norm_fix(1);
	}
	while(anycollision(1,sprite.hitbox)==3){ // Top Collision
		sprite.y += norm_fix(1);
		sprite.vy = 0;
		ceilingcount++;
	}

	if(mods[15]==1&&sprite.x>885000&&sprite.x<930000&&sprite.y<198000) { sprite.y+=norm_fix(1); sprite.vy = 0;}// For Olympic mod...

	while(anycollision(1,sprite.hitbox)==4){ // Botton Collision
		sprite.y -= norm_fix(1);
	}

	if( (anycollision(3,sprite.hitbox)) && (GetFire==0 )&&mods[0]==0&&mods[15]==0) { // Fire Collision
		AS_SoundDefaultPlay((u8*)burn,(u32)burn_size,72,64,false,0);
		GetFire = 1;
		fireframes=frames;
	}
	
	if((TouchingGroundTile(1, sprite.hitbox)==1) && sprite.vy>0){ // Touching Ground or not
			if (fallinghigh == 1) {
			PA_SetSpriteXY(0, 20, fix_norm(sprite.x-scrollx)+30, fix_norm(sprite.y-scrolly)+6+64);
			PA_SetSpriteXY(0, 21, fix_norm(sprite.x-scrollx)-62, fix_norm(sprite.y-scrolly)+6+64);
			PA_StartSpriteAnimEx(0, 20, 0, 6, 10, ANIM_ONESHOT);
			PA_StartSpriteAnimEx(0, 21, 0, 6, 10, ANIM_ONESHOT);
			fallinghigh = 0;
			AS_SoundDefaultPlay((u8*)fallhit,(u32)fallhit_size,24,64,false,0);
			GetFire = 0;
				}
			if (fallinghigh == 0) PA_OutputText(1,1,16, "           ");
		sprite.vy = 0;
		sprite.jumping=0;
	}

}

void Fire(void){
	
	int i = 1;

	if (fireframes+3600==frames&&mods[15]==0) { GetFire=0; fireframes=0;}
	if (chandelierfall == 0) {
	Chandelier.x = 1088012-norm_fix(90);
	Chandelier.y = 62000+norm_fix(125);
	}
	else if ( Chandelier.y != -250) {
		Chandelier.y += norm_fix(4)*mods[5];
		if (Chandelier.y >= 160000) { Chandelier.y = -250; chandelierfinish=1; frames=0; }
	}
	
	if ( GetFire == 1 ) {
		if(mods[6]==0) {
		if(((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0))){
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx)+5-(10*spriteflipped), fix_norm(sprite.y-scrolly)+9+64);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+30-(60*spriteflipped), fix_norm(sprite.y-scrolly)-10+64);
			}
		else {
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx)+5-(10*spriteflipped), fix_norm(sprite.y-scrolly)+15+64);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+30-(60*spriteflipped), fix_norm(sprite.y-scrolly)-5+64);
			}
		if((sprite.vy < 0)){
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx)+4-(8*spriteflipped), fix_norm(sprite.y-scrolly)+15+64);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+30-(60*spriteflipped), fix_norm(sprite.y-scrolly)-6+64);
			}
		}
		if(mods[6]==1) {
		if(((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0))){
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx)+1-(2*spriteflipped), fix_norm(sprite.y-scrolly)+9+64+6);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+14-(28*spriteflipped), fix_norm(sprite.y-scrolly)-10+64+9);
			}
		else {
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx)+1-(2*spriteflipped), fix_norm(sprite.y-scrolly)+15+64+6);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+14-(28*spriteflipped), fix_norm(sprite.y-scrolly)-5+64+9);
			}
		if((sprite.vy < 0)){
			PA_SetSpriteXY(0, 79, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)+15+64+6);
			PA_SetSpriteXY(0, 40, fix_norm(sprite.x-scrollx)+14-(28*spriteflipped), fix_norm(sprite.y-scrolly)-6+64+9);
			}
		}

		
		if( (anycollision(4,sprite.hitbox)) && finish!=1 && sprite.shotted==0) {
			finish=1;
			frames=0;
			GetFire=0;
			if(PA_UserInfo.Language==2) PA_OutputText(0,1,21,"%c2Temps:       ");
			else PA_OutputText(0,1,21,"%c2Time :          ");
			if (minutes==0) {	if (seconds==0) PA_OutputText(0,1,21,"%c2Only the programmer should get this");
								if (seconds==1) PA_OutputText(0,1,22,"%c2How did you do that ?");
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d seconds ",seconds); }
			if (minutes==1) {	if (seconds==0) PA_OutputText(0,1,22,"%c2%d minute",minutes);
								if (seconds==1) PA_OutputText(0,1,22,"%c2%d minute %d second ",minutes, seconds);
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d minute %d seconds ",minutes, seconds); }
			if (minutes>=2) {	if (seconds==0) PA_OutputText(0,1,22,"%c2%d minutes",minutes);
								if (seconds==1) PA_OutputText(0,1,22,"%c2%d minutes %d second ",minutes, seconds);
								if (seconds>=2) PA_OutputText(0,1,22,"%c2%d minutes %d seconds ",minutes, seconds); }
			if (minutes>=10 && minutes <= 59) PA_OutputText(0,1,22,"%c2 Never thought it could be that hard");
			if (minutes>=60) PA_OutputText(0,1,22,"%c2 I'm wondering if you're Brilliant or Dumb");
			if((mods[5]==1&&mods[8]==0&&seconds<=27&&minutes==0&&achievement[3].done==0&&achievement[3].finished==0)&&(seconds>=25)&&finish==1) { achievement[3].done=1; achievement[3].frames=moreframes; }
			if(mods[1]==1&&mods[2]==1&&achievement[12].done==0&&achievement[12].finished==0) { achievement[12].done=1; achievement[12].frames=moreframes; }
			if(mods[3]==1&&achievement[13].done==0&&achievement[13].finished==0) { achievement[13].done=1; achievement[13].frames=moreframes; }
			if(lastseconds==seconds&&lastminutes==minutes&&achievement[15].done==0&&achievement[15].finished==0) { achievement[15].done=1; achievement[15].frames=moreframes; }
			lastseconds=seconds;
			lastminutes=minutes;
		}
	}
	else {
		PA_SetSpriteXY(0, 79, 3500, 3500);
		PA_SetSpriteXY(0, 40, 3500, 3500);
	}

	
	if (selectswitch == 0) {
		if(mods[1]==0) {
	for(i=1;i<7;i++) {
	if ((scrollx < torch[i].x+norm_fix(256)) && (scrollx > torch[i].x-norm_fix(256)) && (scrolly+norm_fix(256) > torch[i].y-norm_fix(96+48)) && (scrolly+norm_fix(256)< torch[i].y+norm_fix(192*2-15)) )
		if ( scrolly+norm_fix(256) < torch[i].y+norm_fix(96+24) && scrolly+norm_fix(256) > torch[i].y-norm_fix(96+48)) 
				PA_DualSetSpriteXY(i+119, fix_norm(torch[i].x-scrollx), fix_norm(torch[i].y-scrolly)+64);
		else PA_DualSetSpriteXY(i+119, fix_norm(torch[i].x-scrollx), fix_norm(torch[i].y-scrolly)+40);
	else PA_DualSetSpriteXY(i+119, -250, -250);
	}
		}
	
	if ((scrollx < Chandelier.x+norm_fix(256)) && (scrollx > Chandelier.x-norm_fix(256)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24)) 
				PA_DualSetSpriteXY(100, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+64);
		else PA_DualSetSpriteXY(100, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+40);
	else PA_DualSetSpriteXY(100, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+64)) && (scrollx > Chandelier.x-norm_fix(256-64)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24)) 
				PA_DualSetSpriteXY(101, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+64);
		else PA_DualSetSpriteXY(101, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+40);
	else PA_DualSetSpriteXY(101, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+128)) && (scrollx > Chandelier.x-norm_fix(256-128)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24)) 
				PA_DualSetSpriteXY(102, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+64);
		else PA_DualSetSpriteXY(102, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+40);
	else PA_DualSetSpriteXY(102, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256)) && (scrollx > Chandelier.x-norm_fix(256)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15+64)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24+64) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24+64))
				PA_DualSetSpriteXY(103, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+64+64);
		else PA_DualSetSpriteXY(103, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+40+64);
	else PA_DualSetSpriteXY(103, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+64)) && (scrollx > Chandelier.x-norm_fix(256-64)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+48-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15+64)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24+64) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24+64)) 
				PA_DualSetSpriteXY(104, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+64+64);
		else PA_DualSetSpriteXY(104, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+40+64);
	else PA_DualSetSpriteXY(104, -250, -250);

	if ((scrollx < Chandelier.x+norm_fix(256+128)) && (scrollx > Chandelier.x-norm_fix(256-128)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+48-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192*2-15+64)) )
		if ( scrolly+norm_fix(256) < Chandelier.y+norm_fix(96+24+64) && scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+24+64)) 
				PA_DualSetSpriteXY(105, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+64+64);
		else PA_DualSetSpriteXY(105, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+40+64);
	else PA_DualSetSpriteXY(105, -250, -250);
	}
	else {
	if(mods[1]==0) {
	for(i=1;i<7;i++) {
	if ((scrollx < torch[i].x+norm_fix(256)) && (scrollx > torch[i].x-norm_fix(256)) && (scrolly+norm_fix(256) > torch[i].y-norm_fix(96+48)) && (scrolly+norm_fix(256) < torch[i].y+norm_fix(192-64)) )
		PA_DualSetSpriteXY(i+119, fix_norm(torch[i].x-scrollx), fix_norm(torch[i].y-scrolly)+64);
	else PA_DualSetSpriteXY(i+119, -250, -250);
	}
	}
	
	if ((scrollx < Chandelier.x+norm_fix(256)) && (scrollx > Chandelier.x-norm_fix(256)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64)) )
				PA_DualSetSpriteXY(100, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+64);
	else PA_DualSetSpriteXY(100, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+64)) && (scrollx > Chandelier.x-norm_fix(256-64)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64)) )
		PA_DualSetSpriteXY(101, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+64);
	else PA_DualSetSpriteXY(101, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+128)) && (scrollx > Chandelier.x-norm_fix(256-128)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64)) )
		PA_DualSetSpriteXY(102, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+64);
	else PA_DualSetSpriteXY(102, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256)) && (scrollx > Chandelier.x-norm_fix(256)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64+64)) )
		PA_DualSetSpriteXY(103, fix_norm(Chandelier.x-scrollx), fix_norm(Chandelier.y-scrolly)+64+64);
	else PA_DualSetSpriteXY(103, -250, -250);
	
	if ((scrollx < Chandelier.x+norm_fix(256+64)) && (scrollx > Chandelier.x-norm_fix(256-64)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+48-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64+64)) )
		PA_DualSetSpriteXY(104, fix_norm(Chandelier.x-scrollx)+64, fix_norm(Chandelier.y-scrolly)+64+64);
	else PA_DualSetSpriteXY(104, -250, -250);

	if ((scrollx < Chandelier.x+norm_fix(256+128)) && (scrollx > Chandelier.x-norm_fix(256-128)) && (scrolly+norm_fix(256) > Chandelier.y-norm_fix(96+48-64)) && (scrolly+norm_fix(256) < Chandelier.y+norm_fix(192-64+64)) )
		PA_DualSetSpriteXY(105, fix_norm(Chandelier.x-scrollx)+128, fix_norm(Chandelier.y-scrolly)+64+64);
	else PA_DualSetSpriteXY(105, -250, -250);
	}

}

void TheEnding(void) {
	int i=0;
	if (finish==1 && chandelierfinish==0) {
		AS_MP3Stop();
		if (selectswitch==0) {
				if (frames >= 0 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-43)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64-43))) PA_DualSetSpriteXY(50, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-43 );
				if (frames==0) { PA_DualStartSpriteAnimEx(50, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames >= 15 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-43)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64-43))) PA_DualSetSpriteXY(50, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-43 );
				if (frames==15) { PA_DualStartSpriteAnimEx(50, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames >= 30 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-29)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64-29))) PA_DualSetSpriteXY(51, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-29 );
				if (frames==30) { PA_DualStartSpriteAnimEx(51, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }
				
				if (frames >= 40 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-15)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64-15))) PA_DualSetSpriteXY(52, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-15 );
				if (frames==40) { PA_DualStartSpriteAnimEx(52, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames >= 50 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-1)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64-1))) PA_DualSetSpriteXY(53, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-1 );
				if (frames==50) { PA_DualStartSpriteAnimEx(53, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames >= 60 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+13)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64+13))) PA_DualSetSpriteXY(54, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+13 );
				if (frames==60) { PA_DualStartSpriteAnimEx(54, 0, 7, 10, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames >= 70 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+27)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64+27))) PA_DualSetSpriteXY(55, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+27 );
				if (frames==70) { PA_DualStartSpriteAnimEx(55, 0, 7, 15, ANIM_UPDOWN,1);  AS_SoundQuickPlay(burn); }
				
				if (frames >=80 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+41)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+41))) PA_DualSetSpriteXY(56, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+41 );
				if (frames==80) { PA_DualStartSpriteAnimEx(56, 0, 7, 15, ANIM_UPDOWN,1);  AS_SoundQuickPlay(burn); }

				if (frames >= 90 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+55)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64+55))) PA_DualSetSpriteXY(57, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+55 );
				if (frames==90) { PA_DualStartSpriteAnimEx(57, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }	

				if (frames >= 100 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+69)) && (scrolly+norm_fix(256) < 66000+norm_fix(192*2-64+69))) PA_DualSetSpriteXY(58, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+69 );
				if (frames==100) { PA_DualStartSpriteAnimEx(58, 0, 7, 15, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }

				if (frames==110) chandelierfall=1;
			}

		else {
				if (frames >= 0 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-43)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64-43)) ) PA_DualSetSpriteXY(50, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-43 );
				if (frames==0) {PA_DualStartSpriteAnimEx(50, 0, 7, 45, ANIM_UPDOWN,1); AS_SoundQuickPlay(burn); }
				
				if (frames >= 15 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-43)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64-43)) ) PA_DualSetSpriteXY(50, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-43 );
				if (frames==15) {PA_DualStartSpriteAnimEx(50, 0, 7, 45, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }

				if (frames >= 30 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-29)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64-29)) ) PA_DualSetSpriteXY(51, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-29 );
				if (frames==30) {PA_DualStartSpriteAnimEx(51, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }
				
				if (frames >= 40 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-15)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64-15))) PA_DualSetSpriteXY(52, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-15 );
				if (frames==40) {PA_DualStartSpriteAnimEx(52, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }	

				if (frames >= 50 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48-1)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64-1))) PA_DualSetSpriteXY(53, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)-1 );
				if (frames==50) {PA_DualStartSpriteAnimEx(53, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }	

				if (frames >= 60 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+13)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+13))) PA_DualSetSpriteXY(54, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+13 );
				if (frames==60) {PA_DualStartSpriteAnimEx(54, 0, 7, 10, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }

				if (frames >= 70 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+27)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+27))) PA_DualSetSpriteXY(55, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+27 );
				if (frames==70) {PA_DualStartSpriteAnimEx(55, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }
				
				if (frames >=80 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+41)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+41))) PA_DualSetSpriteXY(56, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+41 );
				if (frames==80) {PA_DualStartSpriteAnimEx(56, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }

				if (frames >= 90 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+55)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+55))) PA_DualSetSpriteXY(57, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+55 );
				if (frames==90) {PA_DualStartSpriteAnimEx(57, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }	

				if (frames >= 100 && (scrolly+norm_fix(256) > 66000-norm_fix(96+48+69)) && (scrolly+norm_fix(256) < 66000+norm_fix(192-64+69))) PA_DualSetSpriteXY(58, fix_norm(1085500-scrollx)-18, fix_norm(66000-scrolly)+69 );
				if (frames==100) {PA_DualStartSpriteAnimEx(58, 0, 7, 15, ANIM_UPDOWN,1);AS_SoundQuickPlay(burn); }

				if (frames==110) chandelierfall=1;
		}
	}
	if (chandelierfinish==1) {
		for(i=61;i<64;i++)
		PA_DualSetSpriteAnim(i,4);
		for(i=64;i<73;i++)
		PA_SetSpriteAnim(0,i,4);
		PA_SetSpriteAnim(1,23,4);
		boss.life -= 20;
		if(boss.life<=-200) { PA_DualSetSpriteXY(0,-250,-250); PA_DualSetSpriteXY(1,-250,-250); }

		if (frames==0) AS_SoundQuickPlay(explosionbig);
		if (frames==25) AS_SoundQuickPlay(explosionsmall);
		if (frames==45) AS_SoundQuickPlay(explosionsmall);
		if (frames==65) AS_SoundQuickPlay(explosionsmall);
		if (frames==85) AS_SoundQuickPlay(explosionsmall);
		if (frames==105) AS_SoundQuickPlay(explosionsmall);
		if (frames==125) AS_SoundQuickPlay(explosionsmall);
		if (frames==145) AS_SoundQuickPlay(explosionsmall);
		if (frames==165) AS_SoundQuickPlay(explosionsmall);
		if (frames==185) AS_SoundQuickPlay(explosionsmall);
		if (frames==199) AS_SoundQuickPlay(explosionsmall);
		if (frames==205) AS_SoundQuickPlay(explosionbig);

		if (frames >= 0 && (scrolly+norm_fix(256) > 190000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 190000+norm_fix(192-64))) { PA_DualSetSpriteXY(50, fix_norm(1085500-scrollx), fix_norm(190000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(50, 0, 7, 15, ANIM_UPDOWN,1); }
		
		if (frames >= 0 && (scrolly+norm_fix(256) > 200000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 200000+norm_fix(192-64))){ PA_DualSetSpriteXY(51, fix_norm(1087500-scrollx), fix_norm(200000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(51, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 0 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(52, fix_norm(1091500-scrollx), fix_norm(220000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(52, 0, 7, 15, ANIM_UPDOWN,1);}
			
		if (frames >= 0 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(53, fix_norm(1086500-scrollx), fix_norm(220000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(53, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 0 && (scrolly+norm_fix(256) > 225000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 225000+norm_fix(192-64))){ PA_DualSetSpriteXY(54, fix_norm(1091500-scrollx), fix_norm(225000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(54, 0, 7, 15, ANIM_UPDOWN,1);}
			
		if (frames >= 0 && (scrolly+norm_fix(256) > 225000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 225000+norm_fix(192-64))){ PA_DualSetSpriteXY(55, fix_norm(1085500-scrollx), fix_norm(225000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(55, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 0 && (scrolly+norm_fix(256) > 210000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 210000+norm_fix(192-64))){ PA_DualSetSpriteXY(56, fix_norm(1079500-scrollx), fix_norm(210000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(56, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 0 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(57, fix_norm(1078500-scrollx), fix_norm(220000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(57, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 0 && (scrolly+norm_fix(256) > 200000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 200000+norm_fix(192-64))){ PA_DualSetSpriteXY(58, fix_norm(1084500-scrollx), fix_norm(200000-scrolly) );
		if (frames==0) PA_DualStartSpriteAnimEx(58, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 25 && (scrolly+norm_fix(256) > 200000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 200000+norm_fix(192-64))){ PA_DualSetSpriteXY(51, fix_norm(1084500-scrollx), fix_norm(200000-scrolly) );
		if (frames==25) PA_DualStartSpriteAnimEx(51, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 45 && (scrolly+norm_fix(256) > 210000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 210000+norm_fix(192-64))){ PA_DualSetSpriteXY(52, fix_norm(1091500-scrollx), fix_norm(210000-scrolly) );
		if (frames==45) PA_DualStartSpriteAnimEx(52, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 65 && (scrolly+norm_fix(256) > 195000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 195000+norm_fix(192-64))){ PA_DualSetSpriteXY(53, fix_norm(1078500-scrollx), fix_norm(195000-scrolly) );
		if (frames==65) PA_DualStartSpriteAnimEx(53, 0, 7, 15, ANIM_UPDOWN,1); }

		if (frames >= 85 && (scrolly+norm_fix(256) > 194000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 194000+norm_fix(192-64))){ PA_DualSetSpriteXY(54, fix_norm(1098500-scrollx), fix_norm(194000-scrolly) );
		if (frames==85) PA_DualStartSpriteAnimEx(54, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 105 && (scrolly+norm_fix(256) > 196000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 196000+norm_fix(192-64))){ PA_DualSetSpriteXY(55, fix_norm(1074500-scrollx), fix_norm(196000-scrolly) );
		if (frames==105) PA_DualStartSpriteAnimEx(55, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 125 && (scrolly+norm_fix(256) > 201500-norm_fix(96+48)) && (scrolly+norm_fix(256) < 201500+norm_fix(192-64))){ PA_DualSetSpriteXY(56, fix_norm(1069500-scrollx), fix_norm(201500-scrolly) );
		if (frames==125) PA_DualStartSpriteAnimEx(56, 0, 7, 15, ANIM_UPDOWN,1);}
		
		if (frames >= 145 && (scrolly+norm_fix(256) > 206200-norm_fix(96+48)) && (scrolly+norm_fix(256) < 206200+norm_fix(192-64))){ PA_DualSetSpriteXY(57, fix_norm(1075000-scrollx), fix_norm(206200-scrolly) );
		if (frames==145) PA_DualStartSpriteAnimEx(57, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 165 && (scrolly+norm_fix(256) > 203800-norm_fix(96+48)) && (scrolly+norm_fix(256) < 203800+norm_fix(192-64))){ PA_DualSetSpriteXY(58, fix_norm(1095000-scrollx), fix_norm(203800-scrolly) );
		if (frames==165) PA_DualStartSpriteAnimEx(58, 0, 7, 15, ANIM_UPDOWN,1);}
		
		if (frames >= 185 && (scrolly+norm_fix(256) > 198800-norm_fix(96+48)) && (scrolly+norm_fix(256) < 198800+norm_fix(192-64))){ PA_DualSetSpriteXY(59, fix_norm(1083000-scrollx), fix_norm(198800-scrolly) );
		if (frames==185) PA_DualStartSpriteAnimEx(59, 0, 7, 15, ANIM_UPDOWN,1);}

		if (frames >= 199 && (scrolly+norm_fix(256) > 201800-norm_fix(96+48)) && (scrolly+norm_fix(256) < 201800+norm_fix(192-64))){ PA_DualSetSpriteXY(60, fix_norm(1086000-scrollx), fix_norm(201800-scrolly) );
		if (frames==199) PA_DualStartSpriteAnimEx(60, 0, 7, 15, ANIM_UPDOWN,1);}
		
		if (frames >= 205 && (scrolly+norm_fix(256) > 200000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 200000+norm_fix(192-64))){ PA_DualSetSpriteXY(51, fix_norm(1087500-scrollx), fix_norm(200000-scrolly) );
		if (frames==205) { PA_DualStartSpriteAnimEx(51, 0, 7, 15, ANIM_UPDOWN,1); }}

		if (frames >= 205 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(52, fix_norm(1091500-scrollx), fix_norm(220000-scrolly) );
		if (frames==205) {PA_DualStartSpriteAnimEx(52, 0, 7, 15, ANIM_UPDOWN,1); }}
			
		if (frames >= 206 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(53, fix_norm(1086500-scrollx), fix_norm(220000-scrolly) );
		if (frames==206) {PA_DualStartSpriteAnimEx(53, 0, 7, 15, ANIM_UPDOWN,1); }}

		if (frames >= 206 && (scrolly+norm_fix(256) > 225000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 225000+norm_fix(192-64))){ PA_DualSetSpriteXY(54, fix_norm(1091500-scrollx), fix_norm(225000-scrolly) );
		if (frames==206) {PA_DualStartSpriteAnimEx(54, 0, 7, 15, ANIM_UPDOWN,1); } }
			
		if (frames >= 207 && (scrolly+norm_fix(256) > 225000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 225000+norm_fix(192-64))){ PA_DualSetSpriteXY(55, fix_norm(1085500-scrollx), fix_norm(225000-scrolly) );
		if (frames==207) {PA_DualStartSpriteAnimEx(55, 0, 7, 15, ANIM_UPDOWN,1); }}

		if (frames >= 207 && (scrolly+norm_fix(256) > 210000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 210000+norm_fix(192-64))){ PA_DualSetSpriteXY(56, fix_norm(1089500-scrollx), fix_norm(210000-scrolly) );
		if (frames==207) {PA_DualStartSpriteAnimEx(56, 0, 7, 15, ANIM_UPDOWN,1); }}

		if (frames >= 208 && (scrolly+norm_fix(256) > 220000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 220000+norm_fix(192-64))){ PA_DualSetSpriteXY(57, fix_norm(1088500-scrollx), fix_norm(220000-scrolly) );
		if (frames==208) {PA_DualStartSpriteAnimEx(57, 0, 7, 15, ANIM_UPDOWN,1); }}

		if (frames >= 208 && (scrolly+norm_fix(256) > 200000-norm_fix(96+48)) && (scrolly+norm_fix(256) < 200000+norm_fix(192-64))){ PA_DualSetSpriteXY(58, fix_norm(1084500-scrollx), fix_norm(200000-scrolly) );
		if (frames==208) {PA_DualStartSpriteAnimEx(58, 0, 7, 15, ANIM_UPDOWN,1); }}
			
		if (frames>=208) {
		for(i=61;i<64;i++) PA_DualSetSpriteXY(i,-250,-250); for(i=64;i<73;i++)
			PA_SetSpriteXY(0,i,-250,-250);
			PA_SetSpriteXY(1,23,-250,-250);
			boss.alive=0; 
		}

		if (frames==450) { for(i=50;i<61;i++) PA_DualSetSpriteXY(i,-250,-250); for(i=84;i<100;i++) PA_DualSetSpriteXY(i,-250,-250); TheVideo(); }
		}
}

void TheEnding2(void) {
	int i=0;

	if (boss.alive==0&&finish==1) {
		AS_MP3Stop();
		for(i=61;i<64;i++)
		PA_DualSetSpriteAnim(i,4);
		for(i=64;i<73;i++)
		PA_SetSpriteAnim(0,i,4);
		if(frames==10) AS_SoundQuickPlay(explosionsmall);

		if(frames==40) AS_SoundQuickPlay(explosionsmall);
		if(frames==50) AS_SoundQuickPlay(explosionsmall);
		if(frames==60) AS_SoundQuickPlay(explosionsmall);
		if(frames==70) AS_SoundQuickPlay(explosionsmall);
		if(frames==80) AS_SoundQuickPlay(explosionsmall);
		if(frames==90) AS_SoundQuickPlay(explosionsmall);
		if(frames==100) AS_SoundQuickPlay(explosionbig);

		if ((scrollx < norm_fix(bosspart[0].x+(128*bosspart[0].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[0].x+(128*bosspart[0].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[0].y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(bosspart[0].y)+norm_fix(192-112)) )
		PA_DualSetSpriteXY(61, bosspart[0].x-fix_norm(scrollx)+(128*bosspart[0].flipped), bosspart[0].y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(61, -250, -250);
		
		if ((scrollx < norm_fix(bosspart[1].x+64)+norm_fix(256)) && (scrollx > norm_fix(bosspart[1].x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[1].y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(bosspart[1].y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(62, bosspart[1].x+64-fix_norm(scrollx), bosspart[1].y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(62, -250, -250);

		if ((scrollx < norm_fix(bosspart[2].x+128-(128*bosspart[2].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[2].x+128-(128*bosspart[2].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[2].y)-norm_fix(192-24)) && (scrolly+norm_fix(256) < norm_fix(bosspart[2].y)+norm_fix(192-112)))
		PA_DualSetSpriteXY(63, bosspart[2].x+128-fix_norm(scrollx)-(128*bosspart[2].flipped), bosspart[2].y-fix_norm(scrolly));
		else PA_DualSetSpriteXY(63, -250, -250);

		if ((scrollx < norm_fix(bosspart[3].x+(128*bosspart[3].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[3].x+(128*bosspart[3].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[3].y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,64, bosspart[3].x-fix_norm(scrollx)+(128*bosspart[3].flipped), bosspart[3].y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,64, -250, -250);

		if ((scrollx < norm_fix(bosspart[4].x+64)+norm_fix(256)) && (scrollx > norm_fix(bosspart[4].x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[4].y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,65, bosspart[4].x+64-fix_norm(scrollx), bosspart[4].y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,65, -250, -250);

		if ((scrollx < norm_fix(bosspart[5].x+128-(128*bosspart[5].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[5].x+128-(128*bosspart[5].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[5].y+64)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,66, bosspart[5].x+128-fix_norm(scrollx)-(128*bosspart[5].flipped), bosspart[5].y+64-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,66, -250, -250);

		if ((scrollx < norm_fix(bosspart[6].x+(128*bosspart[6].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[6].x+(128*bosspart[6].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[6].y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,67, bosspart[6].x-fix_norm(scrollx)+(128*bosspart[6].flipped), bosspart[6].y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,67, -250, -250);

		if ((scrollx < norm_fix(bosspart[7].x+64)+norm_fix(256)) && (scrollx > norm_fix(bosspart[7].x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[7].y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,68, bosspart[7].x+64-fix_norm(scrollx), bosspart[7].y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,68, -250, -250);

		if ((scrollx < norm_fix(bosspart[8].x+128-(128*bosspart[8].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[8].x+128-(128*bosspart[8].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[8].y+128)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,69, bosspart[8].x+128-fix_norm(scrollx)-(128*bosspart[8].flipped), bosspart[8].y+128-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,69, -250, -250);

		if ((scrollx < norm_fix(bosspart[9].x+(128*bosspart[9].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[9].x+(128*bosspart[9].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[9].y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,70, bosspart[9].x-fix_norm(scrollx)+(128*bosspart[9].flipped), bosspart[9].y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,70, -250, -250);

		if ((scrollx < norm_fix(bosspart[10].x+64)+norm_fix(256)) && (scrollx > norm_fix(bosspart[10].x+64)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[10].y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,71, bosspart[10].x+64-fix_norm(scrollx), bosspart[10].y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,71, -250, -250);

		if ((scrollx < norm_fix(bosspart[11].x+128-(128*bosspart[11].flipped))+norm_fix(256)) && (scrollx > norm_fix(bosspart[11].x+128-(128*bosspart[11].flipped))-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(bosspart[11].y+192)-norm_fix(192-22)) )
		PA_SetSpriteXY(0,72, bosspart[11].x+128-fix_norm(scrollx)-(128*bosspart[11].flipped), bosspart[11].y+192-fix_norm(scrolly)+16);
		else PA_SetSpriteXY(0,72, -250, -250);

		if(frames>100) {
			if(boss.flipped==0){
			bosspart[0].x-=2; bosspart[0].y-=2;
			bosspart[1].y--;
			bosspart[2].x+=2; bosspart[2].y-=2;
			bosspart[3].x--;
			bosspart[4].y++;
			bosspart[5].x++;
			bosspart[6].x--;
			bosspart[7].y++;
			bosspart[8].x++;
			bosspart[9].x-=2; bosspart[9].y+=2;
			bosspart[10].y++;
			bosspart[11].x+=2; bosspart[11].y+=2;
			}
			else{
			bosspart[0].x+=2; bosspart[0].y-=2;
			bosspart[1].y--;
			bosspart[2].x-=2; bosspart[2].y-=2;
			bosspart[3].x++;
			bosspart[4].y++;
			bosspart[5].x--;
			bosspart[6].x++;
			bosspart[7].y++;
			bosspart[8].x--;
			bosspart[9].x+=2; bosspart[9].y+=2;
			bosspart[10].y++;
			bosspart[11].x-=2; bosspart[11].y+=2;
			}
		}
	
		if (frames==600) { for(i=50;i<61;i++) PA_SetSpriteXY(1,23,-250,-250); PA_DualSetSpriteXY(i,-250,-250); for(i=84;i<100;i++) PA_DualSetSpriteXY(i,-250,-250); TheVideo(); }
	}
}

void TheVideo(void) {
	
	int i=0;
	frames=0;
	dontrunthiswhilevideo=1;
	while(1) {
		if (frames==0&&mods[0]==0) {
			AS_MP3DirectPlay((u8*)nowyoureahero, (u32)nowyoureahero_size);
			for(i = 0; i > -128; i--){
			PA_SetBrightness(0, i/4);
			PA_SetBrightness(1, i/4);
			MoveSprite();
			MoveAxe();
			AxeShooting();
			Fire();
			PA_WaitForVBL();
			}
		}
		if (frames==0&&mods[0]==1) {
			AS_MP3DirectPlay((u8*)nowyoureahero, (u32)nowyoureahero_size);
			for(i = 0; i > -128; i--){
			PA_SetBrightness(0, i/4);
			PA_SetBrightness(1, i/4);
			MoveSpriteRPG();
			MoveAxe();
			AxeShooting();
			PA_WaitForVBL();
			}
		}
			
		if (frames==1) {
			for(i=0; i<128; i++) {
				PA_DualSetSpriteXY(i,-250,-250);
				}
			PA_DeleteBg(0,2); PA_DeleteBg(1,2);
			PA_HideBg(1,0); PA_HideBg(1,1); PA_HideBg(0,0); PA_HideBg(0,1); PA_ShowBg(0,2); PA_ShowBg(1,2);
			PA_EasyBgLoad(1,2,thanksforplaying_top);
			PA_EasyBgLoad(0,2,skip_bottom);
				for(i = -128; i <= 0; i++){
				PA_SetBrightness(1, i/4); 
				PA_SetBrightness(0, i/4); 
				PA_WaitForVBL();
				} 
		}
		// Congratulations... |
		if (frames==300) { for(i = 0; i > -128; i--){
							PA_SetBrightness(1, i/4); 
							PA_SetBrightness(0, i/4);
							PA_WaitForVBL();
							} 
		PA_EasyBgLoad(0,2,designcode_bottom);
		PA_EasyBgLoad(1,2,designcode_top);
		}
		// You've managed to | kill
		if (frames==310) {
			for(i = -64; i <= 0; i++){
					PA_SetBrightness(0, i/2); 
					PA_SetBrightness(1, i/2); 
					PA_WaitForVBL();
					} 
		}
		// You're the hero we | all...
		if (frames==760) { for(i = 0; i > -64; i--){
							PA_SetBrightness(0, i/2); 
							PA_SetBrightness(1, i/2); 
							PA_WaitForVBL();
							} 
		PA_EasyBgLoad(1,2,music_bottom);
		PA_EasyBgLoad(0,2,music_top);
		}
		// ...all wish we | could be...
		if (frames==770) {
			for(i = -64; i <= 0; i++){
					PA_SetBrightness(0, i/2); 
					PA_SetBrightness(1, i/2); 
					PA_WaitForVBL();
					} 
		}
		// grabbed that fire... on |... the wall...
		if (frames==1100) { for(i = 0; i > -64; i--){
							PA_SetBrightness(0, i/2); 
							PA_SetBrightness(1, i/2); 
							PA_WaitForVBL();
							}
		PA_EasyBgLoad(0,2,additional_bottom);
		PA_EasyBgLoad(1,2,additional_top);
		}
		// ...the wall... |... You jumped up...
		if (frames==1110) {
			for(i = -64; i <= 0; i++){
					PA_SetBrightness(0, i/2); 
					PA_SetBrightness(1, i/2); 
					PA_WaitForVBL();
					} 
		}
		// ...and saved us all | ...
		if (frames==1440) { for(i = 0; i > -64; i--){
							PA_SetBrightness(0, i/2); 
							PA_SetBrightness(1, i/2); 
							PA_WaitForVBL();
							}
		PA_EasyBgLoad(1,2,special_bottom);
		PA_EasyBgLoad(0,2,special_top);
		}
		// ... | ... ... ...			// Dang, no Voice Checkpoint
		if (frames==1450) {
			for(i = -64; i <= 0; i++){
					PA_SetBrightness(0, i/2); 
					PA_SetBrightness(1, i/2); 
					PA_WaitForVBL();
					} 
		}
		// ...and saved us all ... ... | ...
		if (frames==1870) { for(i = 0; i > -64; i--){
							PA_SetBrightness(0, i/2); 
							PA_SetBrightness(1, i/2); 
							PA_WaitForVBL();
							}
		for(i = 0;i<40; i++)PA_WaitForVBL();
		PA_EasyBgLoad(1,2,nowyoureaheroimg);
		PA_EasyBgLoad(0,2,thanksforplaying_top);
		}
		// and saved us... | Now you're a hero...
		if (frames==2230) TOP_IN; 
		
				// Won't comment lyrics here, it's pretty clear
		if (frames==2310) PA_EasyBgLoad(1,2,youmanagedto);
		if (frames==2390) PA_EasyBgLoad(1,2,beatthewhole);
		if (frames==2550) TOP_OUT;
		if (frames==2560) PA_EasyBgLoad(1,2,werehappy);  // Pre-load
		if (frames==2650) TOP_IN;
		if (frames==2730) {PA_EasyBgLoad(1,2,buthowareyou);for(i = 0;i<2; i++)PA_WaitForVBL(); }
		if (frames==2865) PA_EasyBgLoad(1,2,therest);
		if (frames==3000) TOP_OUT;
		if (frames==3070) for(i = 0;i<15; i++)PA_WaitForVBL();
		if (frames==3001) PA_EasyBgLoad(1,2,maybewatch); // Pre-load
		if (frames==3080) TOP_IN;
		if (frames==3300) PA_EasyBgLoad(1,2,maybepress);
		if (frames==3420) PA_EasyBgLoad(1,2,andstartagain);
		
		if (frames==3430) for(i = 0;i<20; i++)PA_WaitForVBL();

		if (frames==3520) PA_EasyBgLoad(1,2,nowyoureaheroimg);
		if (frames==3600) PA_EasyBgLoad(1,2,youmanagedto);
		if (frames==3680)  PA_EasyBgLoad(1,2,beatthewhole);
		if (frames==3840) TOP_OUT;
		if (frames==3841)  PA_EasyBgLoad(1,2,werehappy);  // Pre-load
		if (frames==3940) TOP_IN;
		if (frames==4020)  {PA_EasyBgLoad(1,2,buthowareyou);for(i = 0;i<2; i++)PA_WaitForVBL(); }
		if (frames==4155)  PA_EasyBgLoad(1,2,therest);
		if (frames==4290) TOP_OUT;
		if (frames==4292) for(i = 0;i<15; i++)PA_WaitForVBL();
		if (frames==4291)  PA_EasyBgLoad(1,2,maybewatch); // Pre-load
		if (frames==4370) TOP_IN;
		if (frames==4590)  PA_EasyBgLoad(1,2,maybepress);
		if (frames==4710)  PA_EasyBgLoad(1,2,andstartagain);

		if (frames==4710) for(i = 0;i<20; i++)PA_WaitForVBL();

		if (frames==4790)  { PA_EasyBgLoad(1,2,yesitsover); for(i = 0;i<2; i++)PA_WaitForVBL(); }
		if (frames==4920) TOP_OUT;
		if (frames==4921)  PA_EasyBgLoad(1,2,wedidntwant); // Pre-load
		if (frames==5010) TOP_IN;
		if (frames==5080)  PA_EasyBgLoad(1,2,makea);
		if (frames==5220)  { PA_EasyBgLoad(1,2,thisisit); for(i = 0;i<2; i++)PA_WaitForVBL(); }
		if (frames==5300)  PA_EasyBgLoad(1,2,iswear);
		if (frames==5390) TOP_OUT;
		if (frames==5391)  PA_EasyBgLoad(1,2,oohhohh); // Pre-load
		if (frames==5470) TOP_IN;
		if (frames==5540) TOP_OUT;

		if (frames==5550) for(i = 0;i<20; i++)PA_WaitForVBL();

		if (frames==5541)  PA_EasyBgLoad(1,2,nowyoureaheroimg); // Pre-load
		if (frames==5670) TOP_IN;
		if (frames==5750)  PA_EasyBgLoad(1,2,youmanagedto);
		if (frames==5830)  PA_EasyBgLoad(1,2,beatthewhole);
		if (frames==5990) TOP_OUT;
		if (frames==5991)  PA_EasyBgLoad(1,2,werehappy);  // Pre-load
		if (frames==6090) TOP_IN;
		if (frames==6170)  {PA_EasyBgLoad(1,2,buthowareyou);for(i = 0;i<2; i++)PA_WaitForVBL(); }
		if (frames==6305)  PA_EasyBgLoad(1,2,therest);
		if (frames==6450) TOP_OUT;
		if (frames==6460) for(i = 0;i<15; i++)PA_WaitForVBL();
		if (frames==6451)  PA_EasyBgLoad(1,2,maybewatch); // Pre-load
		if (frames==6510) TOP_IN;
		if (frames==6730)  PA_EasyBgLoad(1,2,maybepress);
		if (frames==6850)  PA_EasyBgLoad(1,2,andstartagain);

		if (frames==7500) { for(i = 0; i > -64; i--){
							PA_SetBrightness(1, i/2); 
							PA_WaitForVBL();
							}
		PA_EasyBgLoad(1,2,presstostartagain);
		}
			if (frames==7600) {
				for(i = -64; i <= 0; i++){ 
						PA_SetBrightness(1, i/2); 
						PA_SetBrightness(0, i/2); 
						PA_WaitForVBL();
						AS_MP3Stop();
						}
			PA_WaitFor(PADNEWPRESS || Stylus.Newpress);
			PA_WaitForVBL();
			reinit();
			}

		frames++;
		PA_WaitForVBL();
		if(Stylus.DblClick) { 
			AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); 
			PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) 
			PA_OutputText(1,0,i, "                                "); 
			PA_ShowBg(1,0); PA_ShowBg(1,1); PA_ShowBg(0,0); PA_ShowBg(0,1); PA_HideBg(0,2); PA_HideBg(1,2);
			reinit();
			}
		}
}

void reinit(void) {
	int a=0;
	int h=0;
	int b=0;
	int i=0;
	PA_ResetSpriteSys();
	// Reset Sprite System
	PA_DualCreateSprite(80,(void*)SpriteAnim_Sprite,OBJ_SIZE_32X64,1,0,40,40); 
	sprite.x=0; sprite.y=0;
	PA_SetBrightness(1, 0); 
	PA_SetBrightness(0, 0);

	PA_ShowBg(0,0); PA_HideBg(0,1);	PA_ShowBg(0,2); 
	PA_ShowBg(1,0); PA_HideBg(1,1); PA_ShowBg(1,2);

	achievementstotal=0;

	for(b=0;b<46;b++)
		if(achievement[b].done==1) { achievementstotal++; achievement[b].finished=1; }
	
		gravity=40;
	// Main Menu. H=1 to exit
	while(h==0) { 
		if(mods[5]<=0)mods[5]=1;
		if(Pad.Newpress.Right && !Pad.Held.Left) {
		PA_DualStartSpriteAnim(80, 1, 4,16);
		PA_DualSetSpriteHflip(80, 0);
	}
			else if(Pad.Newpress.Left && !Pad.Held.Right) {
		PA_DualStartSpriteAnim(80,1,4,16);
		PA_DualSetSpriteHflip(80, 1);
	}
			if (Pad.Held.Right || Pad.Held.Left) {
	sprite.x += (Pad.Held.Right - Pad.Held.Left)*SPEED*2;
	}

	if ( ((Pad.Newpress.Up)||(Pad.Newpress.B))  && fix_norm(sprite.y)>=129 ) {
		sprite.vy = JUMP;
		sprite.centerjump = sprite.y;
		AS_SoundDefaultPlay((u8*)playerjump,(u32)playerjump_size,16,64,false,0);
		}
	
	if(cheatcodeachievements5==0 && Pad.Newpress.A) cheatcodeachievements5++;
	if(cheatcodeachievements5==1 && Pad.Newpress.A) cheatcodeachievements5++;
	if(cheatcodeachievements5==2 && Pad.Newpress.L) cheatcodeachievements5++;
	if(cheatcodeachievements5==3 && Pad.Newpress.R) cheatcodeachievements5++;
	if(cheatcodeachievements5==4 && Pad.Newpress.L) cheatcodeachievements5++;
	if(cheatcodeachievements5==5 && Pad.Newpress.R) cheatcodeachievements5++;
	if(cheatcodeachievements5==6) achievementstotal=5;

	if(cheatcodeachievements10==0 && Pad.Newpress.B) cheatcodeachievements10++;
	if(cheatcodeachievements10==1 && Pad.Newpress.A) cheatcodeachievements10++;
	if(cheatcodeachievements10==2 && Pad.Newpress.R) cheatcodeachievements10++;
	if(cheatcodeachievements10==3 && Pad.Newpress.B) cheatcodeachievements10++;
	if(cheatcodeachievements10==4 && Pad.Newpress.Up) cheatcodeachievements10++;
	if(cheatcodeachievements10==5 && Pad.Newpress.Down) cheatcodeachievements10++;
	if(cheatcodeachievements10==6) achievementstotal=10;

	if(cheatcodeachievements==0 && Pad.Newpress.X) cheatcodeachievements++;
	if(cheatcodeachievements==1 && Pad.Newpress.X) cheatcodeachievements++;
	if(cheatcodeachievements==2 && Pad.Newpress.Down) cheatcodeachievements++;
	if(cheatcodeachievements==3 && Pad.Newpress.Down) cheatcodeachievements++;
	if(cheatcodeachievements==4 && Pad.Newpress.Left) cheatcodeachievements++;
	if(cheatcodeachievements==5 && Pad.Newpress.Y) cheatcodeachievements++;
	if(cheatcodeachievements==6) achievementstotal=16;

	if (fix_norm(sprite.y) <= 130) sprite.vy += gravity;

	if ((fix_norm(sprite.y) < 129) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5); // Not on the ground
	else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0);// Standing Still
	if ((fix_norm(sprite.y) < 129) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6); // Falling

	sprite.y += sprite.vy;
	while(fix_norm(sprite.y)>=130) {sprite.y -= norm_fix(1); }
	while(fix_norm(sprite.x)<=1) {sprite.x += norm_fix(2); }
	while(fix_norm(sprite.x)>=740) {sprite.x -= norm_fix(2); }
	if(fix_norm(sprite.x)>255+32) PA_EasyBgLoad(1,2,TitleScreen2);
	if(fix_norm(sprite.x)<255+32) PA_EasyBgLoad(1,2,TitleScreen);
	
	if(fix_norm(sprite.x)>32+48 && fix_norm(sprite.x)<80+56) { 
		if(PA_UserInfo.Language==2) { PA_EasyBgLoad(0,2,TitleBottomStartGameF); }
		else { PA_EasyBgLoad(0,2,TitleBottomStartGame); }
		if(achievementstotal>=16&&cheatcodeachievements!=6) {if(PA_UserInfo.Language==2)PA_OutputText(0,4,2, "%c1X,X,Bas,Bas,Gauche,Y"); else PA_OutputText(0,4,2, "%c1X,X,Down,Down,Left,Y"); }
		if(achievementstotal>=5&&achievementstotal<10&&cheatcodeachievements5!=6) {if(PA_UserInfo.Language==2)PA_OutputText(0,4,2, "%c1A,A,L,R,L,R"); else PA_OutputText(0,4,2, "%c1A,A,L,R,L,R"); }
		if(achievementstotal>=10&&achievementstotal<16&&cheatcodeachievements10!=6) {if(PA_UserInfo.Language==2)PA_OutputText(0,4,2, "%c1B,A,R,B,Haut,Bas/nFRANFROCKPAT"); else PA_OutputText(0,4,2, "%c1B,A,R,B,Up,Down/nFRANFROCKPAT"); }
		if(achievementstotal>=1) { if(PA_UserInfo.Language==2)PA_OutputText(0,4,1, "%c1Succès complettés:%d", achievementstotal); else PA_OutputText(0,4,1, "%c1Achivements Succeeded:%d", achievementstotal); } }
	if(fix_norm(sprite.x)>32+128 && fix_norm(sprite.x)<80+160) {
	PA_EasyBgLoad(0,2,TitleBottomChangelog);
	PA_OutputText(0,14,1, "%c1 %s", version);
	if (PA_UserInfo.Language==2) {
	PA_OutputText(0,5,4, "%c2Prochain Changement : /n%c1%s", lastNTCF);
	PA_OutputText(0,5,7, "%c2Dernier Update Majeur : /n%c1%s", lastmajorF);
	PA_OutputText(0,5,9, "%c2Dernier Update Mineur : /n%c1%s", lastminorF);
	PA_OutputText(0,5,12, "%c2Details Additionnels : /n%c1%s/n%s/n%s/n%s", additF,addit2F,addit3F,addit4F);}
	else {
	PA_OutputText(0,5,4, "%c2Next Thing To Change : /n%c1%s", lastNTC);
	PA_OutputText(0,5,7, "%c2Last Major Update : /n%c1%s", lastmajor);
	PA_OutputText(0,5,9, "%c2Last Minor Update : /n%c1%s", lastminor);
	PA_OutputText(0,5,12, "%c2Additionnal Details : /n%c1%s/n%s/n%s/n%s", addit,addit2,addit3,addit4);}
	}
	if(fix_norm(sprite.x)>536 && fix_norm(sprite.x)<600) {
		if (PA_UserInfo.Language==2) {
			if(achievementspage==0) { 
				PA_EasyBgLoad(0,2,TitleBottomAchievementsF); 
				if(achievement[1].finished==1) PA_OutputText(0,5,3, "%c3-------------------");
				if(achievement[2].finished==1) PA_OutputText(0,5,5, "%c3-------------------");
				if(achievement[3].finished==1) PA_OutputText(0,5,8, "%c3-------------------");
				if(achievement[4].finished==1) PA_OutputText(0,5,9, "%c3-------------------");
				if(achievement[5].finished==1) PA_OutputText(0,5,11, "%c3-------------------");
				if(achievement[6].finished==1) PA_OutputText(0,5,12, "%c3-------------------");
				if(achievement[7].finished==1) PA_OutputText(0,5,14, "%c3-------------------");
				if(achievement[8].finished==1) PA_OutputText(0,5,15, "%c3-------------------");
				if(achievement[9].finished==1) PA_OutputText(0,5,17, "%c3-------------------");
				if(achievement[10].finished==1) PA_OutputText(0,5,18, "%c3-------------------");
			}
				if(achievementspage==1) {
					PA_EasyBgLoad(0,2,TitleBottomAchievements2F); 
					if(achievement[11].finished==1) PA_OutputText(0,5,3, "%c3-------------------");
					if(achievement[12].finished==1) PA_OutputText(0,5,5, "%c3-------------------");
					if(achievement[13].finished==1) PA_OutputText(0,5,7, "%c3-------------------");
					if(achievement[14].finished==1) PA_OutputText(0,5,8, "%c3-------------------");
					if(achievement[15].finished==1) PA_OutputText(0,5,10, "%c3-------------------");
					if(achievement[16].finished==1) PA_OutputText(0,5,11, "%c3-------------------");
				}
		}
		else {
			if(achievementspage==0) {
				PA_EasyBgLoad(0,2,TitleBottomAchievements);
				if(achievement[1].finished==1) PA_OutputText(0,5,3, "%c3-------------------");
				if(achievement[2].finished==1) PA_OutputText(0,5,5, "%c3-------------------");
				if(achievement[3].finished==1) PA_OutputText(0,5,8, "%c3-------------------");
				if(achievement[4].finished==1) PA_OutputText(0,5,9, "%c3-------------------");
				if(achievement[5].finished==1) PA_OutputText(0,5,11, "%c3-------------------");
				if(achievement[6].finished==1) PA_OutputText(0,5,12, "%c3-------------------");
				if(achievement[7].finished==1) PA_OutputText(0,5,14, "%c3-------------------");
				if(achievement[8].finished==1) PA_OutputText(0,5,15, "%c3-------------------");
				if(achievement[9].finished==1) PA_OutputText(0,5,17, "%c3-------------------");
				if(achievement[10].finished==1) PA_OutputText(0,5,18, "%c3-------------------");
			}
		if(achievementspage==1) {
					PA_EasyBgLoad(0,2,TitleBottomAchievements2); 
					if(achievement[11].finished==1) PA_OutputText(0,5,3, "%c3-------------------");
					if(achievement[12].finished==1) PA_OutputText(0,5,5, "%c3-------------------");
					if(achievement[13].finished==1) PA_OutputText(0,5,7, "%c3-------------------");
					if(achievement[14].finished==1) PA_OutputText(0,5,8, "%c3-------------------");
					if(achievement[15].finished==1) PA_OutputText(0,5,10, "%c3-------------------");
					if(achievement[16].finished==1) PA_OutputText(0,5,11, "%c2-------------------");
				}
		}

		if(Stylus.X>200&&Stylus.X<235&&Stylus.Y<165&&Stylus.Y>140&&achievementspage!=1&&Stylus.Newpress) { achievementspage++; for (a=0;a<32;a++) PA_OutputText(0,0,a, "                                ");}
		if(Stylus.X>200&&Stylus.X<235&&Stylus.Y<35&&Stylus.Y>10&&achievementspage!=0&&Stylus.Newpress) { achievementspage--; for (a=0;a<32;a++) PA_OutputText(0,0,a, "                                ");}
	}
	if(fix_norm(sprite.x)>648 && fix_norm(sprite.x)<712) {
		if (PA_UserInfo.Language==2) {
			PA_EasyBgLoad(0,2,TitleBottomModsF);
			if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Mode Aveugle         ");
			if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Pas de carte         ");
			if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Mode Inversé       ");
			if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Plus d'attaques    ");
			if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Super-Vitesse (x2) ");
			if(Stylus.X>32&&Stylus.X<56&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Mode Miniature        ");
			if(achievementstotal>=5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88)  PA_OutputText(0,5,6, "%c1Hidden RPG Mode     ");
			if(achievementstotal<5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1???                   ");
			if(Stylus.X>96&&Stylus.X<120&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Super-Saut (x2)      ");
			if(Stylus.X>128&&Stylus.X<152&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Tir Automatique     ");
			if(Stylus.X>160&&Stylus.X<184&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Invincibilité       ");
			if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Timer de 27 Secondes ");
			if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1A pistol ?            ");
			if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Basse Gravité       ");
			if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Marche automatique  ");
			if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Mode Olympique  ");
			}
		else {
			PA_EasyBgLoad(0,2,TitleBottomMods);
			if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Black-Out Mod        ");
			if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1No Map Mod           ");
			if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Inversed Mod       ");
			if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1More Bullets Mod   ");
			if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<144&&Stylus.Y>120) PA_OutputText(0,5,6, "%c1Hyperspeed (x2)    ");
			if(Stylus.X>32&&Stylus.X<56&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Miniature Mod         ");
			if(achievementstotal>=5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88)  PA_OutputText(0,5,6, "%c1Mode RPG Secret     ");
			if(achievementstotal<5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1???                   ");
			if(Stylus.X>96&&Stylus.X<120&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Super-Jump (x2)      ");
			if(Stylus.X>128&&Stylus.X<152&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Automatic Shooter   ");
			if(Stylus.X>160&&Stylus.X<184&&Stylus.Y<112&&Stylus.Y>88) PA_OutputText(0,5,6, "%c1Invincible Mod      ");
			if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c127 Seconds Timer     ");
			if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Un pistolet ?         ");
			if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Low Gravity         ");
			if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Automatic Walking   ");
			if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<80&&Stylus.Y>56) PA_OutputText(0,5,6, "%c1Olympic Mod  ");
			}
		if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<144&&Stylus.Y>120&&Stylus.Newpress) { mods[1]++; if(mods[1]>=2)mods[1]=0; }
		if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<144&&Stylus.Y>120&&Stylus.Newpress) { mods[2]++; if(mods[2]>=2)mods[2]=0; }
		if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<144&&Stylus.Y>120&&Stylus.Newpress&&achievementstotal>=3) { mods[3]++; if(mods[3]>=2)mods[3]=0; }
		if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<144&&Stylus.Y>120&&Stylus.Newpress&&achievementstotal>=5) { mods[4]++; if(mods[4]>=2)mods[4]=0; }
		if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<144&&Stylus.Y>120&&Stylus.Newpress&&achievementstotal>=7) { mods[5]++; if(mods[5]>=3)mods[5]=1; }
		if(Stylus.X>32&&Stylus.X<56&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress) { mods[6]++; if(mods[6]>=2)mods[6]=0; }
		if(achievementstotal>=5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress) { mods[0]++; if(mods[0]>=2)mods[0]=0; }
		if(achievementstotal<5&&Stylus.X>64&&Stylus.X<88&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress) { mods[7]++; if(mods[7]>=2)mods[7]=0; }
		if(Stylus.X>96&&Stylus.X<120&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress&&achievementstotal>=3) { mods[8]++; if(mods[8]>=2)mods[8]=0; }
		if(Stylus.X>128&&Stylus.X<152&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress&&achievementstotal>=5) { mods[9]++; if(mods[9]>=2)mods[9]=0; }
		if(Stylus.X>160&&Stylus.X<184&&Stylus.Y<112&&Stylus.Y>88&&Stylus.Newpress&&achievementstotal>=10){ mods[10]++; if(mods[10]>=2)mods[10]=0; }
		if(Stylus.X>40&&Stylus.X<64&&Stylus.Y<80&&Stylus.Y>56&&Stylus.Newpress) { mods[11]++; if(mods[11]>=2)mods[11]=0; }
		if(Stylus.X>72&&Stylus.X<96&&Stylus.Y<80&&Stylus.Y>56&&Stylus.Newpress&&achievementstotal>=5) { mods[12]++; if(mods[12]>=2)mods[12]=0; }
		if(Stylus.X>104&&Stylus.X<128&&Stylus.Y<80&&Stylus.Y>56&&Stylus.Newpress&&achievementstotal>=5) { mods[13]++; if(mods[13]>=2)mods[13]=0; }
		if(Stylus.X>136&&Stylus.X<160&&Stylus.Y<80&&Stylus.Y>56&&Stylus.Newpress&&achievementstotal>=10) { mods[14]++; if(mods[14]>=2)mods[14]=0; }
		if(Stylus.X>168&&Stylus.X<192&&Stylus.Y<80&&Stylus.Y>56&&Stylus.Newpress&&achievementstotal>=12) { mods[15]++; if(mods[15]>=2)mods[15]=0; }

		if(mods[1]==1) PA_OutputText(0,5,18, "%c2A  ");
			else PA_OutputText(0,5,18, "%c1D  ");
		if(mods[2]==1) PA_OutputText(0,9,18, "%c2A  ");
			else PA_OutputText(0,9,18, "%c1D  ");
		if(achievementstotal>=3) {
			if(mods[3]==1) PA_OutputText(0,13,18, "%c2A  ");
			else PA_OutputText(0,13,18, "%c1D  ");
		}
		else PA_OutputText(0,13,18, "%c1L-3");
		if(achievementstotal>=5) {
			if(mods[4]==1) PA_OutputText(0,17,18, "%c2A  ");
			else PA_OutputText(0,17,18, "%c1D  ");
		}
		else PA_OutputText(0,17,18, "%c1L-5");
		if(achievementstotal>=7) {
			if(mods[5]==1) PA_OutputText(0,21,18, "%c1D  ");
			if(mods[5]==2) PA_OutputText(0,21,18, "%c2A  ");
		}
		else PA_OutputText(0,21,18, "%c1L-7");
	
		
		if(mods[6]==1) PA_OutputText(0,4,14, "%c2A  ");
			else PA_OutputText(0,4,14, "%c1D  ");

		if(achievementstotal>=5) {
			if(mods[0]==1) {
				for(i=1;i<16;i++){
				if(i!=5)mods[i]=0;
				}
				mods[5]=1;
				PA_OutputText(0,8,14, "%c2A  ");
			}
			else PA_OutputText(0,8,14, "%c1D  ");
		}
		if(achievementstotal<5) {
		if(mods[7]==1) PA_OutputText(0,8,14, "%c2A  ");
			else PA_OutputText(0,8,14, "%c1D  ");
		}

		if(achievementstotal>=3) {
		if(mods[8]==1) PA_OutputText(0,12,14, "%c2A  ");
			else PA_OutputText(0,12,14, "%c1D  ");
		}
		else PA_OutputText(0,12,14, "%c1L-3");
		
		if(achievementstotal>=5) {
		if(mods[9]==1) PA_OutputText(0,16,14, "%c2A  ");
			else PA_OutputText(0,16,14, "%c1D  ");
		}
		else PA_OutputText(0,16,14, "%c1L-5");
		
		if(achievementstotal>=10) {
		if(mods[10]==1) PA_OutputText(0,20,14, "%c2A   ");
			else PA_OutputText(0,20,14, "%c1D   ");
		}
		else PA_OutputText(0,20,14, "%c1L-10");

		if(mods[11]==1) PA_OutputText(0,5,10, "%c2A  ");
			else PA_OutputText(0,5,10, "%c1D  ");

		if(achievementstotal>=5) {
		if(mods[12]==1) PA_OutputText(0,9,10, "%c2A   ");
			else PA_OutputText(0,9,10, "%c1D   ");
		}
		else PA_OutputText(0,9,10, "%c1L-5");

		if(achievementstotal>=5) {
		if(mods[13]==1) PA_OutputText(0,13,10, "%c2A   ");
			else PA_OutputText(0,13,10, "%c1D   ");
		}
		else PA_OutputText(0,13,10, "%c1L-5");

		if(achievementstotal>=10) {
		if(mods[14]==1) PA_OutputText(0,17,10, "%c2A   ");
			else PA_OutputText(0,17,10, "%c1D   ");
		}
		else PA_OutputText(0,17,10, "%c1L-10");

		if(achievementstotal>=12) {
			if(mods[15]==1) {PA_OutputText(0,21,10, "%c2A   ");
				for(i=0;i<15;i++) mods[i]=0;
			}
			else PA_OutputText(0,21,10, "%c1D   ");
		}
		else PA_OutputText(0,21,10, "%c1L-12");

	}

	if(!(fix_norm(sprite.x)>32+128 && fix_norm(sprite.x)<80+160) && !(fix_norm(sprite.x)>32+32 && fix_norm(sprite.x)<80+56) && !(fix_norm(sprite.x)>536 && fix_norm(sprite.x)<600) && !(fix_norm(sprite.x)>648 && fix_norm(sprite.x)<712)) { 
		PA_EasyBgLoad(0,2,TitleBottomScreen); 
		for (a=0;a<32;a++) PA_OutputText(0,0,a, "                                ");
	}
	
	if(fix_norm(sprite.x)>32+32 && fix_norm(sprite.x)<80+56 && fix_norm(sprite.y)<32) h=1; // Start Game
	PA_DualSetSpriteXY(80, fix_norm(sprite.x), fix_norm(sprite.y)-4);
	PA_WaitForVBL();
	}

	for (a=0;a<32;a++) PA_OutputText(0,0,a, "                                ");
	AS_SetMP3Volume(127);
	PA_DeleteBg(1,2);
	PA_DeleteBg(0,2);
	PA_DeleteBg(1,1);
	PA_DeleteBg(0,1);
	PA_DualEasyBgLoad(1, BG0);
	PA_EasyBgLoad(1,2,MAP);
	sprite.x = startx; 
	if(mods[15]==0)sprite.y = starty;
	else sprite.y= starty+norm_fix(220);
	sprite.vy = 0;
	sprite.centerjump = sprite.y;

	for(i=0;i<11;i++) {
	miniboss[i].alive=0;
	miniboss[i].x=-250;
	miniboss[i].y=-250;
	}
	if(mods[0]==1) runRPG();

	PA_ResetSpriteSys();

	if(mods[1]==0) PA_DualShowBg(1);
	if(mods[2]==0) PA_ShowBg(1,2);

	if(mods[1]==1) PA_DualHideBg(1);
	if(mods[2]==1) PA_HideBg(1,2);

	if(mods[10]==0) {
	if(mods[7]==1) { AS_SetDefaultSettings(AS_PCM_8BIT, 22050, AS_SURROUND); PA_DualCreateSprite(80,(void*)achievement1_Sprite,OBJ_SIZE_32X64,1,2,40,40); }
	if(mods[7]==0) { 
	AS_SetDefaultSettings(AS_PCM_8BIT, 44100, AS_SURROUND);
	if(mods[8]==1&&mods[5]==2&&mods[7]==0) PA_DualCreateSprite(80,(void*)SpriteSuper_Sprite,OBJ_SIZE_32X64,1,0,40,40);
	else PA_DualCreateSprite(80,(void*)SpriteAnim_Sprite,OBJ_SIZE_32X64,1,0,40,40);
	}
	}
	if(mods[10]==1) PA_DualCreateSprite(80,(void*)SpriteSteel_Sprite,OBJ_SIZE_32X64,1,7,40,40);

	if(mods[12]==1) PA_DualCreateSprite(78,(void*)Gun_Sprite,OBJ_SIZE_32X64,1,5,40,40);
	if(mods[13]==1) gravity=20;
	else gravity = 40;

	if (PA_UserInfo.Language==2) {
	PA_CreateSprite(1,42,(void*)achievement16F_Sprite,OBJ_SIZE_64X64,1,6,-250,-250);
	PA_CreateSprite(1,39,(void*)achievement15F_Sprite,OBJ_SIZE_64X64,1,6,-250,-250);
	PA_CreateSprite(1,38,(void*)achievement14F_Sprite,OBJ_SIZE_64X64,1,5,-250,-250);
	PA_CreateSprite(1,37,(void*)achievement13F_Sprite,OBJ_SIZE_64X64,1,4,-250,-250);
	PA_CreateSprite(1,36,(void*)achievement12F_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,35,(void*)achievement11F_Sprite,OBJ_SIZE_64X64,1,5,-250,-250);
	PA_CreateSprite(1,34,(void*)achievement10F_Sprite,OBJ_SIZE_64X64,1,4,-250,-250);
	PA_CreateSprite(1,33,(void*)achievement9F_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,32,(void*)achievement8F_Sprite,OBJ_SIZE_64X64,1,3,-250,-250);
	PA_CreateSprite(1,31,(void*)achievement7F_Sprite,OBJ_SIZE_64X64,1,3,-250,-250);
	PA_CreateSprite(1,30,(void*)achievement6F_Sprite,OBJ_SIZE_64X64,1,0,-250,-250);
	PA_CreateSprite(1,29,(void*)achievement5F_Sprite,OBJ_SIZE_64X64,1,0,-250,-250);
	PA_CreateSprite(1,28,(void*)achievement4F_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,21,(void*)achievement3F_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);
	PA_CreateSprite(1,20,(void*)achievement2F_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);
	PA_CreateSprite(1,19,(void*)achievement1F_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);}
	else{
	PA_CreateSprite(1,42,(void*)achievement16_Sprite,OBJ_SIZE_64X64,1,6,-250,-250);
	PA_CreateSprite(1,39,(void*)achievement15_Sprite,OBJ_SIZE_64X64,1,6,-250,-250);
	PA_CreateSprite(1,38,(void*)achievement14_Sprite,OBJ_SIZE_64X64,1,5,-250,-250);
	PA_CreateSprite(1,37,(void*)achievement13_Sprite,OBJ_SIZE_64X64,1,4,-250,-250);
	PA_CreateSprite(1,36,(void*)achievement12_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,35,(void*)achievement11_Sprite,OBJ_SIZE_64X64,1,5,-250,-250);
	PA_CreateSprite(1,34,(void*)achievement10_Sprite,OBJ_SIZE_64X64,1,4,-250,-250);
	PA_CreateSprite(1,33,(void*)achievement9_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,32,(void*)achievement8_Sprite,OBJ_SIZE_64X64,1,3,-250,-250);
	PA_CreateSprite(1,31,(void*)achievement7_Sprite,OBJ_SIZE_64X64,1,3,-250,-250);
	PA_CreateSprite(1,30,(void*)achievement6_Sprite,OBJ_SIZE_64X64,1,0,-250,-250);
	PA_CreateSprite(1,29,(void*)achievement5_Sprite,OBJ_SIZE_64X64,1,0,-250,-250);
	PA_CreateSprite(1,28,(void*)achievement4_Sprite,OBJ_SIZE_64X64,1,1,-250,-250);
	PA_CreateSprite(1,21,(void*)achievement3_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);
	PA_CreateSprite(1,20,(void*)achievement2_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);
	PA_CreateSprite(1,19,(void*)achievement1_Sprite,OBJ_SIZE_64X64,1,2,-250,-250);
	}
	if(mods[7]==0){PA_CreateSprite(0,79,(void*)Stick_Sprite,OBJ_SIZE_32X8,1,0,-250, -250);
	PA_CreateSprite(0,20,(void*)Dust_Sprite,OBJ_SIZE_64X32,1,0,-250, -250);
	PA_CloneSprite(0,21,20);}
	PA_DualCreateSprite(3,(void*)healthbar1_Sprite,OBJ_SIZE_64X32,1,1,-250,-250);
	PA_DualCreateSprite(2,(void*)healthbar2_Sprite,OBJ_SIZE_64X32,1,1,-250,-250);
	PA_DualCreateSprite(1,(void*)healthredbar_Sprite,OBJ_SIZE_64X32,1,1,-250,-250);
	PA_DualCreateSprite(0,(void*)healthredbar_Sprite,OBJ_SIZE_64X32,1,1,-250,-250);
	//These for the minimap
	PA_CreateSprite(1,22,(void*)Flashing_Sprite,OBJ_SIZE_8X8,1,1,-250,-250);
	PA_CreateSprite(1,23,(void*)miniboss_Sprite,OBJ_SIZE_32X32,1,1,-250,-250);
	PA_CreateSprite(1,24,(void*)minidoor_Sprite,OBJ_SIZE_8X8,1,1,-250,-250);
	PA_CreateSprite(1,25,(void*)minifire_Sprite,OBJ_SIZE_8X8,1,1,-250,-250);
	PA_CreateSprite(1,26,(void*)minichandelier_Sprite,OBJ_SIZE_16X16,1,1,-250,-250);
	PA_SetSpriteHflip(0, 21, 1);
	
	if(mods[6]==0){
	sprite.hitbox.left.x=-6; sprite.hitbox.left.y=18;
	sprite.hitbox.right.x=30; sprite.hitbox.right.y=18;
	sprite.hitbox.down.x=15; sprite.hitbox.down.y=32;
	sprite.hitbox.up.x=15; sprite.hitbox.up.y=1;
	sprite.hitbox.downtouching.x=15; sprite.hitbox.downtouching.y=33;
	}
	if(mods[6]==1){
	sprite.hitbox.left.x=2; sprite.hitbox.left.y=18;
	sprite.hitbox.right.x=24; sprite.hitbox.right.y=18;
	sprite.hitbox.down.x=15; sprite.hitbox.down.y=32;
	sprite.hitbox.up.x=15; sprite.hitbox.up.y=1;
	sprite.hitbox.downtouching.x=15; sprite.hitbox.downtouching.y=33;
	}
	Chandelier.x = 1088012-norm_fix(90);
	Chandelier.y = 62000+norm_fix(125);
	
	if(mods[15]==0){
	torch[1].x = 895500;	torch[1].y = 149500;
	torch[2].x = 911824;	torch[2].y = 108500;
	torch[3].x = 895500;	torch[3].y = 67500;
	torch[4].x = 1272300;	torch[4].y = 149500;
	torch[5].x = 1255979;	torch[5].y = 108500;
	torch[6].x = 1272300;	torch[6].y = 67500;
	}
	else
	{
		for(i=1;i<7;i++)
		torch[i].x=-250; torch[i].y=-250;
		GetFire=1;
	}

		star[0].x=-30000; star[0].y=100000;
		star[1].x=290000; star[1].y=100000;
		star[2].x=721000; star[2].y=90000;
		star[3].x=1330000; star[3].y=211000;
		star[4].x=924000; star[4].y=30000;

	for(i=0;i<5;i++) 
	{
		PA_DualCreateSprite(i+73,(void*)star_Sprite,OBJ_SIZE_8X8,1,0,star[i].x,star[i].y);
	}

	int number = 0;
	
	for(i=4;i<13;i++){
		Axe[i].j = AXESHOOTJ;
		Axe[i].shoot = -50;
		Axe[i].rot = 1;
		if(mods[7]==0) { 
			if(mods[12]==0) PA_CreateSprite(0, i,(void*)Axe_Sprite,OBJ_SIZE_16X16,1, 0,-250, -250);
			if(mods[12]==1) PA_CreateSprite(0, i,(void*)LAZOR_Sprite,OBJ_SIZE_16X16,1,3,-250, -250);
		}
		if(mods[7]==1)PA_CreateSprite(0, i,(void*)minichandelier_Sprite,OBJ_SIZE_16X16,1, 1,-250, -250);
		PA_SetSpriteRotEnable(0,i,i);
	}
	number=0;

	if(mods[7]==0)PA_DualCreateSprite(84,(void*)bullet_Sprite,OBJ_SIZE_32X32,1, 1,-250, -250);
	if(mods[7]==1)PA_DualCreateSprite(84,(void*)Fire_Sprite,OBJ_SIZE_32X32,1, 0,-250, -250);
	PA_DualStartSpriteAnim(84, 0, 6, 15);
	for(i=85;i<95;i++){
		PA_DualCloneSprite(i,84);
		PA_DualStartSpriteAnim(i, 0, 6, 15);
		number++;
	}
	PA_CreateSprite(0,119,(void*)door_Sprite,OBJ_SIZE_32X64,1,1,-250, -250);
	number=0;

	if(mods[7]==0)PA_DualCreateSprite(120,(void*)Fire_Sprite,OBJ_SIZE_32X32,1, 0,-250, -250);
	if(mods[7]==1)PA_DualCreateSprite(120,(void*)Puff_Sprite,OBJ_SIZE_32X32,1, 0,-250, -250);
	PA_DualStartSpriteAnim(120, 0, 2, 8);
	for(i=121;i<127;i++){
		PA_DualCloneSprite(i,120);
		if (selectswitch == 1)
		PA_OutputText(1,1,15, " Fire X= %d Y= %d ", torch[number].x, torch[number].y);
		PA_DualStartSpriteAnim(i, 0, 2, 8);
		number++;
	}
	PA_DualCloneSprite(40,120);
	
	boss.x=fix_norm(1080000);
	boss.y=fix_norm(212859)-96-80;
	boss.life=640;
	boss.alive=1;
	
	if(mods[7]==0){
	PA_DualCreateSprite(61,(void*)bigboss1x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y);
	PA_DualCreateSprite(62,(void*)bigboss1x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y);
	PA_DualCreateSprite(63,(void*)bigboss1x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y);
	PA_CreateSprite(0,64,(void*)bigboss2x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+64);
	PA_CreateSprite(0,65,(void*)bigboss2x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+64);
	PA_CreateSprite(0,66,(void*)bigboss2x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+64);
	PA_CreateSprite(0,67,(void*)bigboss3x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+128);
	PA_CreateSprite(0,68,(void*)bigboss3x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+128);
	PA_CreateSprite(0,69,(void*)bigboss3x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+128);
	PA_CreateSprite(0,70,(void*)bigboss4x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+192);
	PA_CreateSprite(0,71,(void*)bigboss4x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+192);
	PA_CreateSprite(0,72,(void*)bigboss4x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+192);
	}
	Chandelier.x = -250;
	Chandelier.y = -250;
	if(mods[7]==0) {
	PA_DualCreateSprite(100,(void*)Chandelier1_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x, Chandelier.y);
	PA_DualCreateSprite(101,(void*)Chandelier2_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+64, Chandelier.y);
	PA_DualCreateSprite(102,(void*)Chandelier3_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+128, Chandelier.y);
	PA_DualCreateSprite(103,(void*)Chandelier4_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x, Chandelier.y+64);
	PA_DualCreateSprite(104,(void*)Chandelier5_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+64, Chandelier.y+64);
	PA_DualCreateSprite(105,(void*)Chandelier6_Sprite,OBJ_SIZE_64X64,1,1, Chandelier.x+128, Chandelier.y+64);
	}
	if(mods[7]==1) {
	PA_DualCreateSprite(100,(void*)bigboss4x3_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x, Chandelier.y);
	PA_DualCreateSprite(101,(void*)bigboss2x2_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+64, Chandelier.y);
	PA_DualCreateSprite(102,(void*)bigboss3x2_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+128, Chandelier.y);
	PA_DualCreateSprite(103,(void*)bigboss1x3_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x, Chandelier.y+64);
	PA_DualCreateSprite(104,(void*)bigboss2x2_Sprite,OBJ_SIZE_64X64,1,1,Chandelier.x+64, Chandelier.y+64);
	PA_DualCreateSprite(105,(void*)bigboss4x3_Sprite,OBJ_SIZE_64X64,1,1, Chandelier.x+128, Chandelier.y+64);
	}
	PA_StartSpriteAnim(	1, 25, 0, 2, 8);
	PA_StartSpriteAnim(	1, 22, 0, 3, 10);
	PA_StartSpriteAnim(	0, 40, 0, 2, 8);
	
	for(i=50;i<61;i++) {
	if(mods[7]==0)PA_DualCreateSprite(i,(void*)Puff_Sprite,OBJ_SIZE_32X32,1,0,-250, -250);
	if(mods[7]==1)PA_DualCreateSprite(i,(void*)Dust_Sprite,OBJ_SIZE_32X32,1,0,-250, -250);
	PA_DualSetSpriteRotEnable(i,2);
	PA_DualSetSpriteDblsize(i,1);
	}
	PA_DualSetRotsetNoAngle(2,128,128);
	
	if(mods[6]==0) { PA_DualSetRotsetNoAngle(20,256,256);PA_SetRotsetNoAngle(0,21,512,512);}
	if(mods[6]==0) { PA_DualSetSpriteRotDisable(80);PA_SetSpriteRotDisable(0,40);PA_SetSpriteRotDisable(0,79); }
	if(mods[6]==1) { PA_DualSetSpriteRotEnable(80,20);PA_SetSpriteRotEnable(0,40,21);PA_SetSpriteRotEnable(0,79,21); }
	if(mods[6]==1) { PA_DualSetRotsetNoAngle(20,512,512); PA_SetRotsetNoAngle(0,21,512,512);}

	if(mods[15]==0)GetFire = 0; 
	scrollx = 0; scrolly = 0; frames=0; finish=0; chandelierfall=0;sprite.shotted=0;
	
	nodebug=1;
	doorclosed=0;
	angle = 0;
	spriteflipped = 0;
	scrollx = 0;
	scrolly = norm_fix(24);
	selectswitch = 0;  // Changer pour l'écran du haut. 2= Minimap. 1 = Debug. 0 = Double Écran.
	fallinghigh = 0;
	dontrunthiswhilevideo=0;
	chandelierfall=0;
	finish = 0;
	chandelierfinish=0;
	frames = 0;
	framesnow=0;
	framesnow2=0;
	framesboss=0;
	cooldown=0;
	minutes=0;
	seconds=0;
	
	while(1)
	{
		MoveSprite();
		MoveAxe();
		AxeShooting();
		Fire();
		TheEnding();
		PA_WaitForVBL();
		frames++;
		moreframes++;
	}

}
 
void MySplash(void)
{
	PA_EasyBgLoad(0, 2, splashbottom);	// call it like this... splashbottom/top
	PA_EasyBgLoad(1, 2, splashtop);	// Load BGs and call

   u8 a = 1;				// true-false switch
   s32 b = -16;				// (see first if loop)
   s32 i = -16;				// counter
   s32 time = 182;			// three seconds (this does not change)
   
   PA_SetBrightness(1, -16);		// set brightness to completely faded out.
   PA_SetBrightness(0, -16);		//  (only -16 realy works)
   
   while ( a == 1 ) {			// while the switch is flipped...
 
      if( i <= 0 ){			// untill 'i' (our assigned value
         PA_SetBrightness(1, i);	//  between -16 and 0) is zero,
         PA_SetBrightness(0, i);	//  it fades in (0 is no fade and
	 b = i;				//  -16 is complete fade.
      }					// 'b' remembers where i was at.
   
      if ((Pad.Newpress.A || Stylus.Newpress) && (i < time)){
         i = time - b;			// Over here, if the pad or screen are
      }					//  pressed, 'i' becomes the necesary value
					//  for fade out. otherwise it slowly works
					//  up to 182. (notice that in the first
					//  loop i was -16 to 0. if the pad is pressed
					//  at 'i = -10', here i = 182 + 10.
					//  this stops it in mid fade)
   
      if((i <= 16 + time) && (i >= time - b)){
         PA_SetBrightness(1, time - i - b);	//quick calculations...
         PA_SetBrightness(0, time - i - b);
 
      }
 
      if(i > 16 + time) {a = 0;}	// set the switch to 0 after fading out exiting the
					//  while loop after only one run 
 
      i++;				//counter up!
      PA_WaitForVBL();			// notice this needs be done only once...
 
   }
 
   PA_DeleteBg(0, 2);			// clean up.
   PA_DeleteBg(1, 2);			//
 
   PA_SetBrightness(1, 0);		// restore brightness...
   PA_SetBrightness(0, 0);
}

void runRPG(void) 
{

	PA_ResetSpriteSys();

	PA_DualShowBg(1);
	PA_ShowBg(1,2);
	PA_HideBg(1, 1);
	PA_EasyBgLoad(1,2,RPGMap);
	
	AS_SetDefaultSettings(AS_PCM_8BIT, 44100, AS_SURROUND);
	
	PA_DualCreateSprite(80,(void*)SpriteAnim_Sprite,OBJ_SIZE_32X64,1,0,40,40);

	gravity = 40;

	PA_CreateSprite(0,20,(void*)Dust_Sprite,OBJ_SIZE_64X32,1,0,-250, -250);
	PA_CloneSprite(0,21,20);
	PA_SetSpriteHflip(0, 21, 1);
	PA_CreateSprite(1,0,(void*)hideBoss_Sprite,OBJ_SIZE_32X8,1,1,1,39);
	PA_CreateSprite(1,1,(void*)hideChar_Sprite,OBJ_SIZE_32X8,1,1,256-33,47);

	PA_CreateSprite(1,2,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,137,39);
	PA_CreateSprite(1,3,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,121,39);
	PA_CreateSprite(1,4,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,105,39);
	PA_CreateSprite(1,5,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,89,39);
	PA_CreateSprite(1,6,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,73,39);
	PA_CreateSprite(1,7,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,57,39);
	PA_CreateSprite(1,8,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,41,39);
	PA_CreateSprite(1,9,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,33,39);

	PA_CreateSprite(1,10,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,105,47);
	PA_CreateSprite(1,11,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,121,47);
	PA_CreateSprite(1,12,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,137,47);
	PA_CreateSprite(1,13,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,153,47);
	PA_CreateSprite(1,14,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,169,47);
	PA_CreateSprite(1,15,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,185,47);
	PA_CreateSprite(1,16,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,201,47);
	PA_CreateSprite(1,17,(void*)redbar_Sprite,OBJ_SIZE_16X8,1,1,217,47);


	sprite.hitbox.left.x=-6; sprite.hitbox.left.y=18;
	sprite.hitbox.right.x=30; sprite.hitbox.right.y=18;
	sprite.hitbox.down.x=15; sprite.hitbox.down.y=32;
	sprite.hitbox.up.x=15; sprite.hitbox.up.y=1;
	sprite.hitbox.downtouching.x=15; sprite.hitbox.downtouching.y=33;

		int i=0;

	int number = 0;
	
	for(i=4;i<13;i++){
		Axe[i].j = AXESHOOTJ;
		Axe[i].shoot = -50;
		Axe[i].rot = 1;
		PA_CreateSprite(0, i,(void*)Axe_Sprite,OBJ_SIZE_16X16,1, 0,-250, -250);
		PA_SetSpriteRotEnable(0,i,i);
	}
	number=0;

	PA_DualCreateSprite(84,(void*)bullet_Sprite,OBJ_SIZE_32X32,1, 1,-250, -250);
	PA_DualStartSpriteAnim(84, 0, 6, 15);
	for(i=85;i<95;i++){
		PA_DualCloneSprite(i,84);
		PA_DualStartSpriteAnim(i, 0, 6, 15);
		number++;
	}
	PA_CreateSprite(0,119,(void*)door_Sprite,OBJ_SIZE_32X64,1,1,-250, -250);
	number=0;
	
	boss.x=fix_norm(1080000);
	boss.y=fix_norm(212859)-96-80;
	boss.life=1280;
	boss.alive=1;
	
	PA_DualCreateSprite(61,(void*)bigboss1x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y);
	PA_DualCreateSprite(62,(void*)bigboss1x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y);
	PA_DualCreateSprite(63,(void*)bigboss1x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y);
	PA_CreateSprite(0,64,(void*)bigboss2x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+64);
	PA_CreateSprite(0,65,(void*)bigboss2x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+64);
	PA_CreateSprite(0,66,(void*)bigboss2x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+64);
	PA_CreateSprite(0,67,(void*)bigboss3x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+128);
	PA_CreateSprite(0,68,(void*)bigboss3x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+128);
	PA_CreateSprite(0,69,(void*)bigboss3x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+128);
	PA_CreateSprite(0,70,(void*)bigboss4x1_Sprite,OBJ_SIZE_64X64,1,1,boss.x, boss.y+192);
	PA_CreateSprite(0,71,(void*)bigboss4x2_Sprite,OBJ_SIZE_64X64,1,1,boss.x+64, boss.y+192);
	PA_CreateSprite(0,72,(void*)bigboss4x3_Sprite,OBJ_SIZE_64X64,1,1,boss.x+128, boss.y+192);
	
	for(i=50;i<61;i++) {
	PA_DualCreateSprite(i,(void*)Puff_Sprite,OBJ_SIZE_32X32,1,0,-250, -250);
	PA_DualSetSpriteRotEnable(i,2);
	PA_DualSetSpriteDblsize(i,1);
	}
	PA_DualSetRotsetNoAngle(2,128,128);

	PA_DualSetSpriteRotDisable(80);

	for(i=28;i<39;i++) {
		PA_CreateSprite(0,i,(void*)miniboss_Sprite,OBJ_SIZE_32X32,1,1,-250,-250);
	}

	GetFire = 0; scrollx = 0; scrolly = 0; frames=0; finish=0; chandelierfall=0;sprite.shotted=0;
	nodebug=1;
	doorclosed=0;
	angle = 0;
	spriteflipped = 0;
	scrollx = 0;
	scrolly = norm_fix(24);
	selectswitch = 2;  // Changer pour l'écran du haut. 2= Minimap. 1 = Debug. 0 = Double Écran.
	fallinghigh = 0;
	dontrunthiswhilevideo=0;
	chandelierfall=0;
	finish = 0;
	chandelierfinish=0;
	frames = 0;
	framesnow=0;
	framesnow2=0;
	framesboss=0;
	cooldown=0;
	minutes=0;
	seconds=0;
	persolife=640;

	while(1)
	{
		MoveSpriteRPG();
		MoveMiniBoss();
		MoveAxe();
		AxeShooting();
		TheEnding2();
		PA_WaitForVBL();
		frames++;
		moreframes++;
	}
}

void MoveSpriteRPG(void){
	int i=0;
	int p=0;

	if(PA_CheckLid()==1) p=1;
	if(nodebug==1 && Pad.Newpress.Start) { PA_WaitFor(Pad.Released.Start);p=1;}
	while (p==1) {
		AS_MP3Pause();
		PA_ShowBg(1, 0);
		if(PA_UserInfo.Language==2){
		PA_OutputText(1,9,1, "%c1Partie en pause"); // 11-26
		PA_OutputText(1,6,2, "%c1Start pour continuer"); //8-28
		PA_OutputText(1,4,3, "%c1Garder Select pour arreter"); // 5-31
		}
		else {
		PA_OutputText(1,10,1, "%c1Game Paused"); // 10-22
		PA_OutputText(1,8,2, "%c1Start to Unpause"); //8-24
		PA_OutputText(1,4,3, "%c1Hold Select to Restart"); // 4-26
		}
	PA_DualStopSpriteAnim(80);
	if(Pad.Newpress.B||Pad.Newpress.Start) {PA_OutputText(1,10,5,"                      "); PA_OutputText(1,8,6,"                          "); PA_OutputText(1,4,7,"                         "); p=0; AS_MP3Unpause();}
	if(Pad.Newpress.Select) framepause=0;
	if(Pad.Held.Select && framepause==120) { AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                "); reinit(); }
	framepause++;
	PA_WaitForVBL();
	}
	
	PA_OutputText(1,10,8, "%c1Level : %d   ", persolvl);
	PA_OutputText(1,10,9, "%c1Exp : %d    ", persoexp);
	PA_OutputText(1,10,10, "%c1Health : %d    ", persolife);
	PA_OutputText(1,10,11, "%c1Damage : %d    ", 5+persolvl/2);
	PA_OutputText(1,10,13, "%c1Boss Health : %d    ", boss.life);

	if(persoexp>=100) { persoexp-=100; persolvl++; }

	PA_SetSpriteX(1,10,105-persolife/5+128);
	if(-persolife/5+128>16) PA_SetSpriteX(1,11,105-persolife/5+128);
	if(-persolife/5+128>32) PA_SetSpriteX(1,12,105-persolife/5+128);
	if(-persolife/5+128>48) PA_SetSpriteX(1,13,105-persolife/5+128);
	if(-persolife/5+128>64) PA_SetSpriteX(1,14,105-persolife/5+128);
	if(-persolife/5+128>80) PA_SetSpriteX(1,15,105-persolife/5+128);
	if(-persolife/5+128>96) PA_SetSpriteX(1,16,105-persolife/5+128);
	if(-persolife/5+128>114) PA_SetSpriteX(1,17,105-persolife/5+128);
	
	if(persolife<=0) 
	{PA_ShowBg(1, 0);
	PA_OutputSimpleText(1,1,15,"You are Dead                   ");
		PA_WaitFor(PADNEWPRESS); AS_MP3Stop(); PA_DeleteBg(1,2); PA_DeleteBg(0,2); PA_ShowBg(1,2); PA_HideBg(0,1); PA_HideBg(1,1); PA_HideBg(0,0); for (i=0;i<32;i++) PA_OutputText(1,0,i, "                                "); reinit();
	}

	seconds = (frames/60)-(60*minutes);
	minutes = (frames/3600);

	PA_EasyBgScrollXY(0, 1, fix_norm(scrollx),fix_norm(scrolly)+192);
	PA_EasyBgScrollXY(1, 1, fix_norm(scrollx),fix_norm(scrolly)-24);

	if(!Stylus.Held) {
		if (((fix_norm(sprite.x-scrollx)) > 130) && (fix_norm(sprite.x) < 5056-128)){
			scrollx = sprite.x - norm_fix(130);
			scrollxinit=scrollx;
		}
		else if ((((sprite.x-scrollx)>>8) < 84) && ((sprite.x>>8) > 64)){
			scrollx = sprite.x - norm_fix(84);
			scrollxinit=scrollx;
		}
		
		if (((fix_norm(sprite.y-scrolly)) > 70+192) && (fix_norm(sprite.y) < 895-110)){
			scrolly = sprite.y - norm_fix(70+192);
			scrollyinit=scrolly;
		}
		else if (((fix_norm(sprite.y-scrolly)) < 70+192) && ((sprite.y>>8) > 70+192)){
			scrolly = sprite.y - norm_fix(70+192);
			scrollyinit=scrolly;
		}
		if (scrolly>133000) scrolly=133000;
		if (scrolly<-18000) scrolly=-2000;
	}

	if (Stylus.Held) {
		if(Stylus.X-20>=128) scrollx=scrollx+norm_fix(1);
		if(Stylus.X+20<=128) scrollx=scrollx-norm_fix(1);
		if(Stylus.Y-20>=96 && scrolly<130000) scrolly=scrolly+norm_fix(1);
		if(Stylus.Y+20<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(1);
		if(Stylus.X-45>=128) scrollx=scrollx+norm_fix(3);
		if(Stylus.X+45<=128) scrollx=scrollx-norm_fix(3);
		if(Stylus.Y-45>=96 && scrolly<130000) scrolly=scrolly+norm_fix(3);
		if(Stylus.Y+45<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(3);
		if(Stylus.X-75>=128) scrollx=scrollx+norm_fix(3);
		if(Stylus.X+75<=128) scrollx=scrollx-norm_fix(3);
		if(Stylus.Y-75>=96 && scrolly<130000) scrolly=scrolly+norm_fix(3);
		if(Stylus.Y+75<=96 && scrolly>-18000) scrolly=scrolly-norm_fix(3);
		
		scrollxinit=sprite.x- norm_fix(107);
		scrollyinit=sprite.y- norm_fix(70+192);

		if (((fix_norm(sprite.x-scrollx)) > 255) && (fix_norm(sprite.x) < 5056-128)){
			scrollx = sprite.x - norm_fix(255);
		}
		else if ((((sprite.x-scrollx)>>8) < -32) && ((sprite.x>>8) > 64)){
			scrollx = sprite.x - norm_fix(-32);
		}
		
		if (((fix_norm(sprite.y-scrolly)) > 70+192+132) && (fix_norm(sprite.y) < 895)){
			scrolly = sprite.y - norm_fix(70+192+132);
		}
		else if (((fix_norm(sprite.y-scrolly)) < 70+192-108) && ((sprite.y>>8) > 70+192-108)){
			scrolly = sprite.y - norm_fix(70+192-108);
		}
	}
	if (Stylus.Released) { scrollx=scrollxinit;scrolly=scrollyinit;}
	
	if (sprite.x > 881000 && sprite.x < 882000) AS_MP3Stop();
	if (sprite.x > 882100 && finish==0) AS_MP3DirectPlay((u8*)bustabuss, (u32)bustabuss_size);
	if (sprite.x > 53000 && sprite.x < 881000) { AS_MP3DirectPlay((u8*)cave, (u32)cave_size); AS_MP3Unpause(); }

	if (fix_norm(sprite.x) > fix_norm(882000) && fix_norm(sprite.x) < fix_norm(882100)+256 && fix_norm(scrolly+norm_fix(256)) > fix_norm(212936)+16-192)
		PA_SetSpriteXY(0,119, fix_norm(876200)+2-fix_norm(scrollx),fix_norm(212936)+32-fix_norm(scrolly) );
	else PA_SetSpriteXY(0,119,-250,-250);

	if (sprite.x > 882100 && doorclosed==0) {
		AS_SoundQuickPlay(closedoor);
		PA_DualSetSpriteXY(50, fix_norm(876200)-fix_norm(scrollx), fix_norm(212936)+15-fix_norm(scrolly) );
		PA_DualSetSpriteXY(51, fix_norm(876200)-fix_norm(scrollx), fix_norm(212936)+16+30-fix_norm(scrolly) );
		PA_DualStartSpriteAnimEx(50, 0, 7, 45, ANIM_UPDOWN,1);
		PA_DualStartSpriteAnimEx(51, 0, 7, 45, ANIM_UPDOWN,1);
		framesnow=frames; // Frames 1
		doorclosed=1;
		
	}
	if ( doorclosed==1 && sprite.x < 885500 && sprite.y > 195000)sprite.x += norm_fix(3); 

	if (doorclosed==1 && dontrunthiswhilevideo==0) {
		MoveBoss();
		AttackBoss();
		}

	else {
			for(i=61;i<73;i++) PA_DualSetSpriteXY(i,-250,-250);
		}
		
	if (sprite.shotted!=0) {
			GetFire=0;
			if ((framesnow2+1)==frames) sprite.vy = -1600; // Frames 2
			if ((framesnow2+1)<=frames && (framesnow2+40)>=frames&&sprite.shotted==2) sprite.x -= norm_fix(4-(8*spriteflipped));
			if ((framesnow2+1)<=frames && (framesnow2+120)>=frames) sprite.vy += gravity;
			if ((framesnow2+2)<=frames && (framesnow2+39)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+40)<=frames&& (framesnow2+59)>=frames) PA_DualSetSpriteAnim(80,8);
			if ((framesnow2+60)<=frames&& (framesnow2+79)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+80)<=frames&& (framesnow2+99)>=frames) PA_DualSetSpriteAnim(80,8);
			if ((framesnow2+100)<=frames&& (framesnow2+119)>=frames) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+120)<=frames) {PA_DualSetSpriteAnim(80,8); 
				if(Pad.Held.Right) {
					PA_DualStartSpriteAnim(80, 1, 4,16);
					PA_DualSetSpriteHflip(80, 0);
					spriteflipped = 0;
				}
				else if(Pad.Held.Left) {
					PA_DualStartSpriteAnim(80,1,4,16);
					PA_DualSetSpriteHflip(80, 1);
					spriteflipped = 1;
				}
			}
			if ((framesnow2+121)<=frames && (framesnow2+240)>=frames) {
				
									if (Pad.Held.Right || Pad.Held.Left) {
							sprite.x += (Pad.Held.Right - Pad.Held.Left)*SPEED*mods[5];
							sprite.walking = 1;
							}
							else sprite.walking = 0;
									
										if(Pad.Newpress.Right && !Pad.Held.Left) {
									PA_DualStartSpriteAnim(80, 1, 4,16);
									PA_DualSetSpriteHflip(80, 0);
									spriteflipped = 0;
										}
										else if(Pad.Newpress.Left && !Pad.Held.Right) {
									PA_DualStartSpriteAnim(80,1,4,16);
									PA_DualSetSpriteHflip(80, 1);
									spriteflipped = 1;
										}

					if ( ((Pad.Newpress.Up)||(Pad.Newpress.B))  && TouchingGround() ) {
						sprite.vy = JUMP;
						sprite.centerjump = sprite.y;
						sprite.jumping=true;
						AS_SoundDefaultPlay((u8*)playerjump,(u32)playerjump_size,32,64,false,0);
						}
					
					if(sprite.jumping && !(Pad.Held.Up || Pad.Held.B) && sprite.vy<-400){
						sprite.vy=-400;
					}		

					if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5); // Not on the ground
					else if(!((Pad.Held.Left)||(Pad.Held.Right)))  PA_DualSetSpriteAnim(80, 0); // Standing Still
					if (Pad.Held.A || Pad.Held.Down)  PA_DualSetSpriteAnim(80, 7);// Attacking
					if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) )  PA_DualSetSpriteAnim(80, 6); // Falling

					if(!Stylus.Held || !Pad.Newpress.Anykey) PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);
			}
			if ((framesnow2+121)<=frames && (framesnow2+139)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+140)<=frames && (framesnow2+159)) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+160)<=frames && (framesnow2+179)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+180)<=frames && (framesnow2+199)) PA_DualSetSpriteAnim(80,9);
			if ((framesnow2+200)<=frames && (framesnow2+219)) {if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5);else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0); if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7); if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6);}
			if ((framesnow2+220)<=frames && (framesnow2+240)) PA_DualSetSpriteAnim(80,9);
			if ((TouchingGroundTile(1, sprite.hitbox)!=1)) sprite.vy += gravity*mods[5];PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);sprite.y += sprite.vy*mods[5];CheckCollisions();if (sprite.vy >= 2300) fallinghigh = 1;// Compressed Collision
			if ((framesnow2+240)==frames) { sprite.shotted=0; framesnow2=0;}
		}
	
		if (sprite.shotted==0) {
					if (Pad.Held.Right || Pad.Held.Left) {
			sprite.x += (Pad.Held.Right - Pad.Held.Left)*SPEED;
			sprite.walking = 1;
			}
			else sprite.walking = 0;
					
						if(Pad.Newpress.Right && !Pad.Held.Left) {
					PA_DualStartSpriteAnim(80, 1, 4,16);
					PA_DualSetSpriteHflip(80, 0);
					spriteflipped = 0;
						}
						else if(Pad.Newpress.Left && !Pad.Held.Right) {
					PA_DualStartSpriteAnim(80,1,4,16);
					PA_DualSetSpriteHflip(80, 1); 
					spriteflipped = 1;
						}


	if ( ((Pad.Newpress.Up)||(Pad.Newpress.B))  && TouchingGround() ) {
		sprite.vy = JUMP;
		sprite.centerjump = sprite.y;
		sprite.jumping=true;
		AS_SoundDefaultPlay((u8*)playerjump,(u32)playerjump_size,32,64,false,0);
		}
	
	if ((TouchingGroundTile(1, sprite.hitbox)!=1)) sprite.vy += gravity;
	
	if(sprite.jumping && !(Pad.Held.Up || Pad.Held.B) && sprite.vy<-400){
		sprite.vy=-400;
	}		

	if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy < 0) ) PA_DualSetSpriteAnim(80, 5); // Not on the ground
	else if(!((Pad.Held.Left)||(Pad.Held.Right))) PA_DualSetSpriteAnim(80, 0);// Standing Still
	if (Pad.Held.A || Pad.Held.Down) PA_DualSetSpriteAnim(80, 7);// Attacking
	if ((TouchingGroundTile(1, sprite.hitbox)!=1) && (sprite.vy > 0) ) PA_DualSetSpriteAnim(80, 6); // Falling

	sprite.y += sprite.vy;
	
	CheckCollisions();


	if(!Stylus.Held || !Pad.Newpress.Anykey) PA_DualSetSpriteXY(80, fix_norm(sprite.x-scrollx), fix_norm(sprite.y-scrolly)-2+FIXY);
		}
}

void MoveMiniBoss(void) {
	int i=0;

	for(i=0;i<10;i++) {

	if (miniboss[i].alive==1) {
		if (miniboss[i].shooting==1) {
			PA_SetSpriteAnim(0,i+28,0);
		}
		if (sprite.y > norm_fix(miniboss[i].y) && miniboss[i].shooting==0 ) {
			PA_SetSpriteAnim(0,i+28,2);
		}
		if ( (sprite.y < norm_fix(miniboss[i].y-32)) ) {
				PA_SetSpriteAnim(0,i+28,3);
			}
	
	if(miniboss[i].flipped==1){
		PA_SetSpriteHflip(0,i+28, 1);
	}
	else {
		PA_SetSpriteHflip(0,i+28, 0);
	}
	
	if(miniboss[i].y==fix_norm(130900)+FIXY+21) {
		if ( sprite.x < norm_fix(miniboss[i].x+15) && miniboss[i].x>fix_norm(190000)) {
			if (sprite.y > norm_fix(boss.y)) miniboss[i].flipped=1;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x-1;
		}

		if ( sprite.x > norm_fix(miniboss[i].x-15)  && miniboss[i].x<fix_norm(400000)) {
			miniboss[i].flipped=0;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x+1;
		}
	}
	if(miniboss[i].y==fix_norm(130900)+FIXY+20) {
		if ( sprite.x < norm_fix(miniboss[i].x+15) && miniboss[i].x>fix_norm(493000)) {
			if (sprite.y > norm_fix(boss.y)) miniboss[i].flipped=1;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x-1;
		}

		if ( sprite.x > norm_fix(miniboss[i].x-15)  && miniboss[i].x<fix_norm(620000)) {
			miniboss[i].flipped=0;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x+1;
		}
	}

	if(finish==0&&sprite.x<norm_fix(miniboss[i].x+15) && sprite.x>norm_fix(miniboss[i].x-20) && sprite.y > norm_fix(miniboss[i].y-FIXY-24-16)&&sprite.shotted==0)
	{sprite.shotted=2;
	framesnow2=frames;
	persolife-=40;
	}

	if(miniboss[i].y==fix_norm(212000)+FIXY+24) {
		if ( sprite.x < norm_fix(miniboss[i].x+15) && miniboss[i].x>fix_norm(750000)) {
			if (sprite.y > norm_fix(boss.y)) miniboss[i].flipped=1;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x-1;
		}

		if ( sprite.x > norm_fix(miniboss[i].x-15)  && miniboss[i].x<fix_norm(1221000)) {
			miniboss[i].flipped=0;
			if (miniboss[i].shooting==0) miniboss[i].x = miniboss[i].x+1;
		}
	}
	if(miniboss[i].y==-250) {
		miniboss[i].alive=0;
		miniboss[i].y=-250;
		miniboss[i].x=-250;
	}

	if (!((scrollx < norm_fix(miniboss[i].x)+norm_fix(728)) && (scrollx > norm_fix(miniboss[i].x)-norm_fix(728))  ) )
		{
		miniboss[i].alive=0;
		miniboss[i].y=-250;
		miniboss[i].x=-250;
	}

	if ((scrollx < norm_fix(miniboss[i].x)+norm_fix(256)) && (scrollx > norm_fix(miniboss[i].x)-norm_fix(256)) && (scrolly+norm_fix(256) > norm_fix(miniboss[i].y)-norm_fix(192)) && (scrolly+norm_fix(256) < norm_fix(miniboss[i].y)+norm_fix(192)) )
		PA_SetSpriteXY(0,i+28, miniboss[i].x-fix_norm(scrollx), miniboss[i].y-fix_norm(scrolly));
		else PA_SetSpriteXY(0,i+28, -250, -250);

	}
	
	if(miniboss[i].alive==0&&fireframes<=0) {
		fireframes=240;

		miniboss[i].alive=1;
		if(PA_RandMinMax(1,2)==1) miniboss[i].x=fix_norm(sprite.x)+120;
		else miniboss[i].x=fix_norm(sprite.x)-120;
		miniboss[i].y=-250;
		if(sprite.x>32000&&sprite.x<350000) miniboss[i].y=fix_norm(130900)+FIXY+21;
		if(sprite.x>509000&&sprite.x<623000) miniboss[i].y=fix_norm(130900)+FIXY+20;
		if(sprite.x>750000&&sprite.x<1218000) miniboss[i].y=fix_norm(212000)+FIXY+24;
	}
	}
	if(fireframes>0&&sprite.walking==1) fireframes--; // Fireframes used as cooldown.
	if(fireframes>0) fireframes--;
}