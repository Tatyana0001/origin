#include <iostream>
#include <string>
#include "Square.h"
#include "figure_error.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if ((a != b) && (a != c) && (a != d) && (A != 90) && (B != 90) && (C != 90) && (D != 90)) {
        print();
        throw figure_error("Причина - стороны а, b, c и d не равны и/или углы А,В,С,D не равны 90");
    }
}
std::string Square::name() {
    return "Квадрат";
}
std::string Square::side() {
    std::cout << "(Стороны: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "; ";
}
std::string Square::angle() {
    std::cout << "Углы: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + ")";
}
void Square::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if (((a == b) && (a == c) && (a == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90)) && ((A + B + C + D) == 360)) {
        std::cout << " создан. ";
    }
    else std::cout << " не создан. ";
}