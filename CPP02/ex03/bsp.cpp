#include "Point.hpp"


static Fixed areapoint(Point const &p1, Point const &p2, Point const &p3)
{
    Fixed a;
    a = p1.get_att_x() * (p2.get_att_y() - p3.get_att_y())
        + p2.get_att_x() * (p3.get_att_y() - p1.get_att_y())
        + p3.get_att_x() * (p1.get_att_y() - p2.get_att_y());
    if (a < Fixed(0))
        a = a * Fixed(-1);
    return (a / Fixed(2));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed ABC = areapoint(a, b, c);
    Fixed PBC = areapoint(point, b, c);
    Fixed PAB = areapoint(point, a, b);
    Fixed PAC = areapoint(point, a, c);

    if (PBC == Fixed(0) || PAB == Fixed(0) || PAC == Fixed(0))
        return false;
    
    return  (ABC == PBC + PAB + PAC);
}