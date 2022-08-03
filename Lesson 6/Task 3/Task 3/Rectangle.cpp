#include <string>
#include "Rectangle.h"

Rectangle::Rectangle() : Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90) {};
std::string Rectangle::name() {
    return "Прямоугольник: ";
    }