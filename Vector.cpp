#include "Vector.hpp"

#include <math.h>

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

double Vector::magnitude(){

	return sqrt(x*x + y*y + z*z);
}

double Vector::dotProduct(Vector v){

	return x*v.getX() + y*v.getY() + z*v.getZ();
}

Vector Vector::normalize(){

	double mag = magnitude();
	return Vector(x/mag, y/mag, z/mag);
}

Vector Vector::negative(){

	return Vector(-x, -y, -z);
}

Vector Vector::crossProduct(Vector v){

	return Vector(y*v.getZ() - z*v.getY(), z*v.getX() - x*v.getZ(), x*v.getY() - y*v.getX());
}

Vector Vector::add(Vector v){

	return Vector(x+v.getX(), y+v.getY(), z+v.getZ());
}

Vector Vector::multiply(double k){

	return Vector(k*x, k*y, k*z);
}