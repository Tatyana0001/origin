#pragma once
#include "Quadrilateral.h"
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Rhomb : public Quadrilateral {
    public:
        FIGURELIB_API Rhomb();
        FIGURELIB_API std::string name() override;
    };
}