#include <string>
#include "Parallelogram.h"
namespace FigureDynamicLib
{
    Parallelogram::Parallelogram() : Quadrilateral(20, 30, 20, 30, 30, 40, 30, 40) {};
    std::string Parallelogram::name() {
        return "��������������: ";
    }
}