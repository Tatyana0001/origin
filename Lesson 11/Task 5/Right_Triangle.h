#pragma once
#include "Triangle.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Right_Triangle : public Triangle {
    public:
        FIGURELIB_API Right_Triangle();
        FIGURELIB_API std::string name() override;
    };
}