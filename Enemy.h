/*
Computer Graphics 3GC3 Final Project (Group project)

Cesar Antonio Santana Penner - 001411598
Juan Carlos Santana Penner - 001411625
Victor Timpau - 001414243
Jin Lee - 001417622
Date: December 9, 2016

Description - On rails shooter game created with c++ and openGL. 
*/

#include "Bullet.h"
//#include "basicMathLibrary.h"

class Enemy{
public:
	Enemy(float x, float y,float z, float enemyRadius, float enemyScale, float initTime,float popDir,float moveSpeed);	//constructor

	void draw(float camX, float camY, float camZ);			//draw the target
	void shoot(float camPos0, float camPos1, float camPos2);
	void waitActivate();

	float x,y,z;			//the center of the hitbox
	float radius;			//radius of target
	float scale;			//
	float rotY;
	float rotX;
	float rotZ;
	Bullet bullet;

	bool active;
	float waitTime;
	float activeTime;
	float moveTime;
	bool moved;
	float moveDir;
	float moveSpeed;

//private:
	//float privateVar;
};
