#include "Plane.hpp"

Plane::Plane(): normal(Vector(1, 0, 0)), distance(0), colour(Colour(0.5, 0.5, 0.5, 0))()

Plane::Plane(Vector normal, double distance, Colour colour):
normal(normal),
distance(distance),
colour(colour){}

double findIntersection(Ray ray){

	Vector ray_direction = ray.getDirection();
	double a = ray_direction.dotProduct(normal);

	if (a == 0) return -1;
	else {

		double b = normal.dotProduct(ray.getOrigin().add(normal.multiply(distance).negative()));
		return -1*b/a;
	}
}

Vector Plane::getPlaneNormal(){

	return normal;
}

double Plane::getPlaneDistance(){

	return distance;
}

Colour Plane::getPlaneColour(){

	return colour;
}