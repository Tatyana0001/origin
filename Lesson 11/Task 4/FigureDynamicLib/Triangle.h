#pragma once
#include "Figure.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Triangle : public Figure {
    private:
        int a = 10, b = 20, c = 30;
        int A = 50, B = 60, C = 70;
    public:
        FIGURELIB_API Triangle(int a, int b, int c, int A, int B, int C);
        FIGURELIB_API Triangle();
        FIGURELIB_API std::string name() override;
        FIGURELIB_API std::string side();
        FIGURELIB_API std::string angle();
    };
}