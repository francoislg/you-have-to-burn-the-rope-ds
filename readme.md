## You Have To Burn The Rope DS

WARNING: This was my first time coding anything, in 2009. It has terrible code, nothing better than that.

### What is this?

This is a dump of my mostly reverse-engineered port of "You Have To Burn the Rope" for Nintendo DS. It won 4th place in the Neo Compo 2009 competition (not bad!)

This was used as a way to teach me how to code a real project from start to finish, and boy did it teach me a lot.

Assets are missing since I could not contact the original creator (he graciously sent me the wav and png files back then)

Pretty much everything is in `main.c`.

You can see a [speedrun here](https://www.youtube.com/watch?v=mV-Po0K_C9E)

### Mistakes were made

I did not understand tile maps back then, so I picked a huge PNG 8192x1024 png file for the background (`BG0`), and *another one* for collisions (`BGCollision`). This was taking 1.2MB in the whole file. 

I could not figure out how to load things dynamically, so pretty much everything is in embed in the executable .nds file. Since the DS had a limited 4MB capacity for thefile itself, I was getting limited in the number of assets I could include and could not add any more image or code. Yeah...

