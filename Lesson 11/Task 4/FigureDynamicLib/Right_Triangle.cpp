#include <iostream>
#include "Right_Triangle.h"
namespace FigureDynamicLib
{
    Right_Triangle::Right_Triangle() : Triangle(10, 20, 30, 50, 60, 90) {};
    std::string Right_Triangle::name() {
        return "������������� �����������: ";
    }
}