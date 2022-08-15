#include <iostream>
#include <string>
#include "Figure.h"
#include "figure_error.h"

Figure::Figure(int num, const std::string& name) {};
Figure::Figure() : Figure(0, "Фигура") {
    this->num = num;
    if (num != 0) {
        throw figure_error("Фигура не была создана. Причина - количество сторон не равно 0");
    }
}
std::string Figure::name() {
    return "Фигура";
}
std::string Figure::side() {
        return ("(Стороны " + std::to_string(num) + ")");
}
std::string Figure::angle() {
    return ""; 
}
void Figure::print() {
    std::cout << name();
    std::cout << side();
    if (num == 0) {
        std::cout << " создан.";
    }
    else { std::cout << " не создан."; }
}