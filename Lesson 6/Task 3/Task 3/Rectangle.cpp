#include "Rectangle.h"

Rect::Rect() : Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90) {};
std::string Rect::name() {
	return "Прямоугольник: ";
}