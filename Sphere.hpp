#ifndef _SPHERE_HPP__
#define _SPHERE_HPP__

#include "Colour.hpp"
#include "Vector.hpp"
#include "Object.hpp"

class Sphere : public Object {

public:

	Sphere();
	Sphere(Vector center, double radius, Colour colour);

	Vector getCenter();
	double getRadius();
	virtual Colour getColour();

private:

	Vector center;
	double radius;
	Colour colour;
};

#endif