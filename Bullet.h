/*
Computer Graphics 3GC3 Final Project (Group project)

Cesar Antonio Santana Penner - 001411598
Juan Carlos Santana Penner - 001411625
Victor Timpau - 001414243
Jin Lee - 001417622
Date: December 9, 2016

Description - On rails shooter game created with c++ and openGL. 
*/
#include "basicMathLibrary.h"

class Bullet{
public:
	Bullet(point3D origin, point3D target);	//constructor
	Bullet();
	bool active;
	bool shouldReset;

	void draw();			//draw the target
	void setTarget(point3D newTargetPoint);
	void resetBullet(point3D sPoint, point3D tPoint);
	//current x,y,z coordinates
	float x;
	float y;
	float z;

	float t;
	float realoadTime;

	point3D origin;
	point3D target;

	vec3D direction;


//private:
	//float privateVar;
};
