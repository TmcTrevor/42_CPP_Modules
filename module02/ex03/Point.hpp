#ifndef _POINT_HPP
#define _POINT_HPP

#include "Fixed.hpp"


class Point
{
    private :
        Fixed x;
        Fixed y;
    public :
        Point();
        ~Point();
        Point(const Point &f);
        Point(const float x, const float y);
        Fixed get_x() const;
        Fixed get_y() const;
        Point operator=(const Point a);


        
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed Area( Point const a, Point const b, Point const c);

#endif 