#include <string>
#include <iostream>
#include "Triangle.h"

namespace FigureDynamicLib
{
    Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Triangle::Triangle() {};
    std::string Triangle::name() {
        return "Треугольник: ";
    }
    std::string Triangle::side() {
        std::cout << "Стороны: ";
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
    }
    std::string Triangle::angle() {
        std::cout << "Углы: ";
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
    }
}