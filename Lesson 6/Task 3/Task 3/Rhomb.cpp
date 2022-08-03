#include <string>
#include "Rhomb.h"

Rhomb::Rhomb() : Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40) {};
    std::string Rhomb::name() {
        return "Ромб: ";
    }