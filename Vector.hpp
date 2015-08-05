#ifndef _VECTOR_HPP__
#define _VECTOR_HPP__

class Vector {

public:

	Vector();
	Vector(double x, double y, double z);

	double getX();
	double getY();
	double getZ();

	double magnitude();
	double dotProduct(Vector v);
	Vector normalize();
	Vector negative();
	Vector crossProduct(Vector v);
	Vector add(Vector v);
	Vector multiplty(double k);

private:

	double x;
	double y;
	double z;
};

#endif