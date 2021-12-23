#include <iostream>
#include <cmath>

int main()
{
	int r;
	r = 15;

//	 float a;
//	 a = 2.5f;
	// float e = a * (1 << 8);
	r <<= 8;
	std::cout << r << std::endl;
	float x = roundf(r / (1 << 8));
	std::cout << x << std::endl;

}