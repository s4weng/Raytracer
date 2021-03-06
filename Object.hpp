#ifndef _OBJECT_HPP__
#define _OBJECT_HPP__

#include "Colour.hpp"
#include "Ray.hpp"

class Object {

public:

	Object();
	virtual Colour getColour();
	double findIntersect(Ray ray);

private:

};

#endif