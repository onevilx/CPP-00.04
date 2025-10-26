#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);
    Point p(3, 3);

    if (bsp(a, b, c, p))
        std::cout << "it's Inside!!" << std::endl;
    else
        std::cout << "it's Outside L" << std::endl;
}