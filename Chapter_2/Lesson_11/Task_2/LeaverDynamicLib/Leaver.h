#pragma once
#include <iostream>

#ifdef LEAVERDYNAMICLIB_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif

namespace Leaver
{
	class Leaver
	{
	public:
		LEAVERDYNAMICLIB_API std::string leave(std::string& s);
	};
}
