#include <iostream>
#include <string>
#include "Parallelogram.h"
#include "figure_error.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if ((a != c) && (b != d) && (A != C) && (B != D)) {
        print();
        throw figure_error("Причина - стороны а и с не равны и/или стороны b и d не равны и/или углы А и С не равны и/или углы B и D не равны");
    }
}
std::string Parallelogram::name() {
    return "Параллелограм";
}
std::string Parallelogram::side() {
    std::cout << "(Стороны: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "; ";
}
std::string Parallelogram::angle() {
    std::cout << "Углы: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + ")";
}
void Parallelogram::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if (((a == c) && (b == d) && (A == C) && (B == D)) && ((A + B + C + D) == 360)) {
        std::cout << " создан. ";
    }
    else std::cout << " не создан. ";
}