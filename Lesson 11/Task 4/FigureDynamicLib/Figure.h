#pragma once
#ifdef FIGUREDYNAMICLIB_EXPORTS
#define FIGURELIB_API __declspec(dllexport)
#else
#define FIGURELIB_API __declspec(dllimport)
#endif
namespace FigureDynamicLib
{
    class Figure {
    public:
        FIGURELIB_API virtual std::string name();
        FIGURELIB_API virtual std::string side();
        FIGURELIB_API virtual std::string angle();
    };
}