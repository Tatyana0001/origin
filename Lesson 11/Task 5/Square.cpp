#include <string>
#include "Square.h"
namespace FigureDynamicLib
{
    Square::Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {};
    std::string Square::name() {
        return " вадрат: ";
    }
}