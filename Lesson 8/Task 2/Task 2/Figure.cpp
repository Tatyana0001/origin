#include <iostream>
#include <string>
#include "Figure.h"
#include "figure_error.h"

Figure::Figure(int num, const std::string& name) {};
Figure::Figure() : Figure(0, "������") {
    this->num = num;
    if (num != 0) {
        throw figure_error("������ �� ���� �������. ������� - ���������� ������ �� ����� 0");
    }
}
std::string Figure::name() {
    return "������";
}
std::string Figure::side() {
        return ("(������� " + std::to_string(num) + ")");
}
std::string Figure::angle() {
    return ""; 
}
void Figure::print() {
    std::cout << name();
    std::cout << side();
    if (num == 0) {
        std::cout << " ������.";
    }
    else { std::cout << " �� ������."; }
}