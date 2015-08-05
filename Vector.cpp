#include "Vector.hpp"

Vector::Vector(): x(0), y(0), z(0){}

Vector::Vector(double x, double y, double z): x(x), y(y), z(z){}

double Vector::getX(){

	return x;
}

double Vector::getY(){

	return y;
}

double Vector::getZ(){

	return z;
}