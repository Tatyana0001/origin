#include <string>
#include "Square.h"

    Square::Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {};
    std::string Square::name() {
        return " вадрат: ";
    }