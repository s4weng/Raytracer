#include "Ray.hpp"

Ray::Ray(): origin(Vector(0, 0, 0)), direction(Vector(1, 0, 0)){}

Ray::Ray(Vector origin, Vector direction): origin(origin), direction(direction){}

Vector Ray::getOrigin(){

	return origin;
}

Vector Ray::getDirection(){

	return direction;
}