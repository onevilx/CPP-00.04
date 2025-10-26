#include "Point.hpp"

Point::Point() : att_x(0), att_y(0) {}

Point::Point(const Point& cpyfxd) : att_x(cpyfxd.att_x), att_y(cpyfxd.att_y) {}

Point::~Point() {}

Point& Point::operator=(const Point& srcfxd)
{
    (void) srcfxd;
    return *this;
}

Point::Point(const float i, const float j) : att_x(i), att_y(j) {}


Fixed const &Point::get_att_x(void) const
{
    return this->att_x;
}

Fixed const &Point::get_att_y(void) const
{
    return this->att_y;
}