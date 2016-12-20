# Target Crisis

McMaster University - Software Engineering 3GC3 2016 Final Project: Target Crisis
Created By:
	Cesar Antonio Santana Penner - 001411598
	Juan Carlos Santana Penner - 001411625
	Victor Timpau - 001414243
	Jin Lee - 001417622

![Alt text](/Target-Crisis.png?raw=true "Target Crisis") 

Description:
Inspired by the classic on-rails shooter game Time Crisis, Target Crisis follows a similar theme in putting you, the player, on the rails of a high stakes mission to get to the end. 

Your mission, should you choose to accept, is to clear each stage with the highest possible score by eliminating your enemies and targets as quickly as possible. Clearing one sub area will grant you access to the next sub area (there are 10 sub areas total). Although it sounds simple, your enemies will not hesitate to fire back! Good luck and we’ll see you on the other side.
This game was developed in c++ , OpenGL, and freeGlut. 

Implemented Features:
	-Texturing (Scene obstacles and floor)
	-Lighitng (2 Lights)
	-Ray Picking (Sphere hit detection for target and enemies)
	-Fog (for map and enemies)
	-HUD (for player health, ammo count, score, time, restart button)
	-Animation (Enemies)
	-Object Loading

Game Controls:
Left Click ----> Shoot

Space Bar -----> Toggle Crouch

Objective:
Clear the stage of enemies in the shortest amount of time. When enemies are shooting at you you will have the chance to duck/crouch behind obstacles to avoid getting hit. If you get hit three times or you run out of time its a GAME OVER.

Run instrutions:
Download folder and type ‘make’ in the terminal to create executable.

**NOTE**
Included with our game code is a Blender map we intended to utilize with the final version of the game and the obj loader we created to implement the map with our code. Had we a little more time, a combination of the game mechanics you see here in our finished beta and the blender map would have been our final product.



[Open GL and Free Glut instructions (click here to download pdf)](/OpenGL_Setup.pdf?raw=true)


