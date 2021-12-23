#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const x)
{
	Fixed	A = Area(a, b, c);
	Fixed	B = Area(a, b, x);
	Fixed	C = Area(a, x,c);
	Fixed	D = Area(x, b,c);
	if (B != 0 && C != 0 && D != 0 && (B + D + C <= A))
        return (true);
    return (false);
}