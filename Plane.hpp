#ifndef _PLANE_HPP__
#define _PLANE_HPP__

class Plane {

public:

	Plane();
	Plane(Vector normal, double distance, Colour colour);

	double findIntersection(Ray ray);

	Vector getPlaneNormal();
	double getPlaneDistance();
	Colour getPlaneColour();

private:

	Vector normal;
	double distance;
	Colour colour;
};

#endif