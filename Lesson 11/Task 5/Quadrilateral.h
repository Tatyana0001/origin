#pragma once
#include "Figure.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Quadrilateral : public Figure {
    private:
        int a = 10, b = 20, c = 30, d = 40;
        int A = 50, B = 60, C = 70, D = 80;
    public:
        FIGURELIB_API Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
        FIGURELIB_API Quadrilateral();
        FIGURELIB_API std::string name() override;
        FIGURELIB_API std::string side();
        FIGURELIB_API std::string angle();
    };
}