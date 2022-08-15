#include <iostream>
#include <string>
#include "Rhomb.h"
#include "figure_error.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if ((A != C) && (B != D)) {
        print();
        throw figure_error("������� - ������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� �,�,�,D �� ����� 90");
    }
}
std::string Rhomb::name() {
    return "����";
}
std::string Rhomb::side() {
    std::cout << "(�������: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "; ";
}
std::string Rhomb::angle() {
    std::cout << "����: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + ")";
}
void Rhomb::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if (((A == C) && (B == D)) && ((A + B + C + D) == 360)) {
        std::cout << " ������. ";
    }
    else std::cout << " �� ������. ";
}