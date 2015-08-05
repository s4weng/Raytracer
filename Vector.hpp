#ifndef _VECTOR_HPP__
#define _VECTOR_HPP__

class Vector {

public:

	Vector();
	Vector(double x, double y, double z);

	double getX();
	double getY();
	double getZ();

private:

	double x;
	double y;
	double z;
};

#endif