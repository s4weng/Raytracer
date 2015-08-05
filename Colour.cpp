#include "Colour.hpp"

Colour::Colour(): red(0), green(0), blue(0), special(0){}

Colour::Colour(double red, double green, double blue, double special):
red(red),
green(green),
blue(blue),
special(special){}

double Colour::getRed(){

	return red;
}

double Colour::getGreen(){

	return green;
}

double Colour::getBlue(){

	return blue;
}

double Colour::getSpecial(){

	return special;
}

void Colour::setRed(double colour){

	red = red;
}

void Colour::setGreen(double colour){

	green = green;
}

void Colour::setBlue(double colour){

	blue = blue;
}

void Colour::setSpecial(double colour){

	special = special;
}