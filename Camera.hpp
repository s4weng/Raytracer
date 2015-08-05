#ifndef _CAMERA_HPP__
#define _CAMERA_HPP__

#include "Vector.hpp"

class Camera {

public:

	Camera();
	Camera(Vector camPos, Vector camDir, Vector camRight, Vector camDown);

	Vector getPosition();
	Vector getDirection();
	Vector getRight();
	Vector getDown();

private:

	Vector camPos;
	Vector camDir;
	Vector camRight;
	Vector camDown;
};

#endif