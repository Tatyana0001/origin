#include <string>
#include "Rectangle.h"
namespace FigureDynamicLib
{
    Rectangle::Rectangle() : Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90) {};
    std::string Rectangle::name() {
        return "Прямоугольник: ";
    }
}