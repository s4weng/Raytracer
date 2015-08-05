#include "Light.hpp"

Light::Light(): position(Vector(0, 0, 0)), colour(Colour(1, 1, 1, 0)){}

Light::Light(Vector position, Colour colour): position(position), colour(colour){}

Vector Light::getLightPosition(){

	return position;
}

Colour Light::getLightColour(){

	return colour;
}