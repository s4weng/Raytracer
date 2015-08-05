#ifndef _RAY_HPP__
#define _RAY_HPP__

#include "Vector.hpp"

class Ray {

public:

	Ray();
	Ray(Vector origin, Vector direction);

	Vector getOrigin();
	Vector getDirection();

private:

	Vector origin;
	Vector direction;
};

#endif