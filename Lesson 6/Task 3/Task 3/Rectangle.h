#pragma once
#include "Quadrilateral.h"
class Rectangle : public Quadrilateral {
public:
    Rectangle();
    std::string name() override;
};