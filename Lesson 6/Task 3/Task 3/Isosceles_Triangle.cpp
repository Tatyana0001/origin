#include <iostream>
#include "Isosceles_Triangle.h"

Isosceles_Triangle::Isosceles_Triangle() :Triangle(10, 20, 10, 50, 60, 50) {};
    std::string Isosceles_Triangle::name()  {
        return "Равнобедренный треугольник: ";
    }