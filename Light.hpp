#ifndef _LIGHT_HPP__
#define _LIGHT_HPP__

#include "Vector.hpp"
#include "Colour.hpp"

class Light {

public:

	Light();
	Light(Vector position, Colour colour);

	virtual Vector getLightPosition();
	virtual Colour getLightColour();

private:

	Vector position;
	Colour colour;
};

#endif