#pragma once
#include <string>
#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif
namespace DynamicLeaver
{
	class Leaver
	{
	public:
		LEAVER_API std::string leave(std::string name);
	};
}