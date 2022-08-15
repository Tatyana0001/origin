#include <string>
#include <iostream>
#include "Quadrilateral.h"
#include "figure_error.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        if ((A + B + C + D) != 360) {
            print();
            throw figure_error("Причина: Сумма углов не равна 360");
        }
    }
std::string Quadrilateral::name() {
    return "Четырехугольник";
}
    std::string Quadrilateral::side() {
        std::cout << "(Стороны: ";
        return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "; ";
    }
    std::string Quadrilateral::angle() {
        std::cout << "Углы: ";
        return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + ")";
    }
    void Quadrilateral::print() {
        std::cout << name();
        std::cout << side();
        std::cout << angle();
        if (((A + B + C + D) == 360) && (num = 4)) {
            std::cout << " создан. ";
        }
        else std::cout << " не создан. ";
    }