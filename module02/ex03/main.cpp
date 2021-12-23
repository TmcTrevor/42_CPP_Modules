#include "Point.hpp"

int main( void )
{
	Point	A(20, 30);
	Point	B(30, 40);
	Point	C(45, 25);
	Point	X(25, 30);  //inside
	Point	Y(40, 32); //outside
	Point	Z(25, 35);   //outside : on the edge.

	if (bsp(A, B, C, X))
		Cout << GREEN << "  The point X is inside the triangle !" << DEFAULT << Endl;
	else
		Cout << RED << "  The point X is outside the triangle !" << DEFAULT << Endl;
	if (bsp(A, B, C, Y))
		Cout << GREEN << "  The point Y is inside the triangle !" << DEFAULT << Endl;
	else
		Cout << RED << "  The point Y is outside the triangle !" << DEFAULT << Endl;
	if (bsp(A, B, C, Z))
		Cout << GREEN << "  The point Z is inside the triangle !" << DEFAULT << Endl;
	else
		Cout << RED << "  The point Z is outside the triangle !" << DEFAULT << Endl;
	return 0;
}