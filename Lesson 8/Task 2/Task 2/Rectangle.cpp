#include <iostream>
#include <string>
#include "Rectangle.h"
#include "figure_error.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if ((a != c) && (b != d) && (A != 90) && (B != 90) && (C != 90) && (D != 90)) {
        print();
        throw figure_error("������� - ������� � � � �� ����� �/��� ������� b � d �� ����� �/��� ���� �,�,�,D �� ����� 90");
    }
}
std::string Rectangle::name() {
    return "�������������";
}
std::string Rectangle::side() {
    std::cout << "(�������: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "; ";
}
std::string Rectangle::angle() {
    std::cout << "����: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + ")";
}
void Rectangle::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if (((a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90)) && ((A + B + C + D) == 360)) {
        std::cout << " ������. ";
    }
    else std::cout << " �� ������. ";
}