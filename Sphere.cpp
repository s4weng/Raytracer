#include "Sphere.hpp"

Sphere::Sphere(): center(Vector(0, 0, 0)), radius(1), colour(Colour(0.5, 0.5, 0.5, 0)){}

Sphere::Sphere(Vector center, double radius, Colour colour):
center(center),
radius(radius),
colour(colour){}

Vector Sphere::getCenter(){

	return center;
}

double Sphere::getRadius(){

	return radius;
}

Colour Sphere::getColour(){

	return colour;
}