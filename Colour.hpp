#ifndef _COLOUR_HPP__
#define _COLOUR_HPP__

class Colour {

public:

	Colour();
	Colour(double red, double green, double blue, double special);

	double getRed();
	double getGreen();
	double getBlue();
	double getSpecial();

	void setRed(double colour);
	void setGreen(double colour);
	void setBlue(double colour);
	void setSpecial(double colour);

private:

	double red;
	double green;
	double blue;
	double special;
};

#endif