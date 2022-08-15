#include <iostream>
#include <string>
#include "Right_Triangle.h"
#include "figure_error.h"

Right_Triangle::Right_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    if (C != 90) {
        print();
        throw figure_error("Причина - угол С не равен 90");
    }
}
std::string Right_Triangle::name() {
    return "Прямоугольный треугольник";
}
std::string Right_Triangle::side() {
    std::cout << "(Стороны: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "; ";
}
std::string Right_Triangle::angle() {
    std::cout << "Углы: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + ")";
}
    void Right_Triangle::print() {
        std::cout << name();
        std::cout << side();
        std::cout << angle();
        if ((C == 90) && ((A + B + C) == 180)) {
            std::cout << " создан. ";
        }
        else std::cout << " не создан. ";
    }