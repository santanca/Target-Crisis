/*
Computer Graphics 3GC3 Final Project (Group project)

Cesar Antonio Santana Penner - 001411598
Juan Carlos Santana Penner - 001411625
Victor Timpau - 001414243
Jin Lee - 001417622
Date: December 9, 2016

Description - On rails shooter game created with c++ and openGL. 
*/

#ifndef __OBJLOAD__H_ 
#define __OBJLOAD__H_ 
#include "basicMathLibrary.h" 
#include <math.h> 
#include <vector> 
#include <stdio.h> 
#include <fstream> 
#include <sstream> 
#include <iostream> 
 
class facePoint {
public:
	point3D v;
	point3D vn;
	// point3D vt;
	facePoint();
	facePoint(point3D newV, point3D newVN);
};

class Face {
public:
	facePoint f1;
	facePoint f2;
	facePoint f3;
	Face();
	Face(facePoint x, facePoint y, facePoint z);
};


bool loadObj(std::string path); 
std::vector<point3D> getVertices(); 
std::vector<point3D> getNormals(); 
std::vector<std::string> objSplit(std::string root, char delim); 

class Object {
	public:
		Object(std::string path);
		Object();
		std::vector<point3D> getVertices();
		std::vector<point3D> getNormals();
		void render();
	private:
		std::vector<point3D> vertexList;
		std::vector<point3D> normalList;
		std::vector<Face> facesList;
		std::vector<facePoint> facePoints;
};
 
#endif
