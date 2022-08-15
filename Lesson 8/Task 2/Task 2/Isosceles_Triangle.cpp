#include <iostream>
#include <string>
#include "Isosceles_Triangle.h"
#include "figure_error.h"

Isosceles_Triangle::Isosceles_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    this->a = a;
    this->c = c;
    this->A = A;
    this->C = C;
    this->B = B;
    this->b = b;
    if ((a != c) && (A != C)) {
        print();
        throw figure_error("������� - ������� � � � �� ����� �(���) ���� � � � �� �����");
    }
}
std::string Isosceles_Triangle::name() {
    return "�������������� �����������";
}
std::string Isosceles_Triangle::side() {
    std::cout << "(�������: ";
    return "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + "; ";
}
std::string Isosceles_Triangle::angle() {
    std::cout << "����: ";
    return "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + ")";
}
void Isosceles_Triangle::print() {
    std::cout << name();
    std::cout << side();
    std::cout << angle();
    if ((a = c) && (A = C) && ((A + B + C) == 180)) {
        std::cout << " ������. ";
    }
    else std::cout << " �� ������. ";
}
    