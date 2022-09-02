#pragma once
#include "Quadrilateral.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Parallelogram : public Quadrilateral {
    public:
        FIGURELIB_API Parallelogram();
        FIGURELIB_API std::string name() override;
    };
}