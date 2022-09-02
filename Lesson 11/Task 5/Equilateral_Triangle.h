#pragma once
#include "Triangle.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Equilateral_Triangle : public Triangle {
    public:
        FIGURELIB_API Equilateral_Triangle();
        FIGURELIB_API std::string name() override;
    };
}