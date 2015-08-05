#include "RGB.hpp"
#include "Vector.hpp"
#include "Ray.hpp"
#include "Camera.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>

const unsigned int width = 640;
const unsigned int height = 480;
const unsigned int dpi = 72;

//thanks for rasterrain (sourceforge) for providing this code
//minor modifications made
void saveBMP (std::vector<RGB>& data) {

	FILE *f;
	int k = width*height;
	int s = 4*k;
	int filesize = 54 + s;
	
	double factor = 39.375;
	int m = static_cast<int>(factor);
	
	int ppm = dpi*m;
	
	unsigned char bmpfileheader[14] = {'B','M', 0,0,0,0, 0,0,0,0, 54,0,0,0};
	unsigned char bmpinfoheader[40] = {40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0,24,0};
	
	bmpfileheader[ 2] = (unsigned char)(filesize);
	bmpfileheader[ 3] = (unsigned char)(filesize>>8);
	bmpfileheader[ 4] = (unsigned char)(filesize>>16);
	bmpfileheader[ 5] = (unsigned char)(filesize>>24);
	
	bmpinfoheader[ 4] = (unsigned char)(width);
	bmpinfoheader[ 5] = (unsigned char)(width>>8);
	bmpinfoheader[ 6] = (unsigned char)(width>>16);
	bmpinfoheader[ 7] = (unsigned char)(width>>24);
	
	bmpinfoheader[ 8] = (unsigned char)(height);
	bmpinfoheader[ 9] = (unsigned char)(height>>8);
	bmpinfoheader[10] = (unsigned char)(height>>16);
	bmpinfoheader[11] = (unsigned char)(height>>24);
	
	bmpinfoheader[21] = (unsigned char)(s);
	bmpinfoheader[22] = (unsigned char)(s>>8);
	bmpinfoheader[23] = (unsigned char)(s>>16);
	bmpinfoheader[24] = (unsigned char)(s>>24);
	
	bmpinfoheader[25] = (unsigned char)(ppm);
	bmpinfoheader[26] = (unsigned char)(ppm>>8);
	bmpinfoheader[27] = (unsigned char)(ppm>>16);
	bmpinfoheader[28] = (unsigned char)(ppm>>24);
	
	bmpinfoheader[29] = (unsigned char)(ppm);
	bmpinfoheader[30] = (unsigned char)(ppm>>8);
	bmpinfoheader[31] = (unsigned char)(ppm>>16);
	bmpinfoheader[32] = (unsigned char)(ppm>>24);
	
	f = fopen("scene.bmp", "wb");
	
	fwrite(bmpfileheader,1,14,f);
	fwrite(bmpinfoheader,1,40,f);
	
	for (int i = 0; i < k; i++) {
		
		double red = (data[i].red)*255;
		double green = (data[i].green)*255;
		double blue = (data[i].blue)*255;
		
		unsigned char color[3] = {(int)floor(blue), (int)floor(green), (int)floor(red)};
		fwrite(color, 1, 3, f);
	}
	
	fclose(f);
}

int main(){

	std::vector<RGB> data;
	data.reserve(width*height);
	int index;

	Vector X(1, 0, 0);
	Vector Y(0, 1, 0);
	Vector Z(0, 0, 1);

	for (unsigned int i = 0; i < width; ++i){

		for (unsigned int j = 0; j < height; ++j){

			index = j*width + i;

			if ((i > 200 && i < 440) && (j > 200 && j < 280)){

				data[index].red = 0.1;
				data[index].green = 0.4;
				data[index].blue = 0.11;
			}

			else {

				data[index].red = 1;
				data[index].green = 1;
				data[index].blue = 1;	
			}
		}
	}

	saveBMP(data);

	return 0;
}