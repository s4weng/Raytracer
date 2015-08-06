#ifndef _SPHERE_HPP__
#define _SPHERE_HPP__

#include "Colour.hpp"
#include "Vector.hpp"

class Sphere {

public:

	Sphere();
	Sphere(Vector center, double radius, Colour colour);

	Vector getCenter();
	double getRadius();
	Colour getColour();

private:

	Vector center;
	double radius;
	Colour colour;
};

#endif