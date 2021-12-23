#include "Point.hpp"


Point::Point() : x(), y()
{
    //Cout << "Default constructor called" << Endl;
}

Point::Point(Point const & src)
{
    x = src.x;
    y = src.y;
	//Cout << "Copy constructor called" << Endl;
	return;
}

Point::~Point()
{
   // Cout << "Destructor called" << Endl;
}

Point::Point(const float x, const float y)
{
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Fixed Point::get_x() const
{
    return (this->x);
}

Fixed Point::get_y() const
{

    return (this->y);
}

// Fixed Area( Point const a, Point const b, Point const c)
// {
//     Fixed s1;
//     Fixed s2;
//     Fixed s3;
//     Fixed s;
//     s1 = a.get_x() *  (b.get_y() - c.get_y());
//     s2 = b.get_x() *  (c.get_y() - a.get_y());
//     s3 = c.get_x() *  (a.get_y() - b.get_y());
//     s = Fixed(0.5f) * (s1 + s2 + s2);
//     if (s < Fixed(0))
//         s = s * Fixed(-1);
//     return (s);
// }

Fixed Area(Point const a, Point const b, Point const c)
{
	Fixed	X;
	
	X = Fixed(0.5f) * (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()));
	return (X < 0 ? (X * Fixed(-1)) : X);
}