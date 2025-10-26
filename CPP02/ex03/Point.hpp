#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>

#include "Fixed.hpp"

class Point
{
    private:
    const   Fixed att_x;
    const   Fixed att_y;

    public:
    Point();
    Point(const float i, const float j);
    Point(const Point& cpyfxd);
    ~Point();
    Point &operator=(const Point& srcfxd);
    Fixed const &get_att_x(void)const;
    Fixed const &get_att_y(void)const;    
};

std::ostream &operator<<(std::ostream &out, const Point &num);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif