#include "Camera.hpp"

Camera::Camera(): camPos(Vector(0, 0, 0)), camDir(Vector(0, 0, 1)), camRight(Vector(0, 0, 0)), camDown(Vector(0, 0, 0)){}
	
Camera::Camera(Vector camPos, Vector camDir, Vector camRight, Vector camDown):
camPos(camPos), camDir(camDir), camRight(camRight), camDown(camDown){}

Vector Camera::getPosition(){

	return camPos;
}

Vector Camera::getDirection(){
	
	return camDir;
}
	
Vector Camera::getRight(){
	
	return camRight;
}
	
Vector Camera::getDown(){
	
	return camDown;
}