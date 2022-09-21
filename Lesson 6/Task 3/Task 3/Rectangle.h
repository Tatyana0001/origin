#pragma once
#include <string>
#include "Quadrilateral.h"

class Rect : public Quadrilateral {
public:
	Rect();
	std::string name() override;
};