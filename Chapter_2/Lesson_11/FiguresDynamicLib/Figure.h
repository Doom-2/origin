#pragma once
#include <iostream>
#ifdef FIGURESDYNAMICLIB_EXPORTS
#define FIGURESDYNAMICLIB_API __declspec(dllexport)
#else
#define FIGURESDYNAMICLIB_API __declspec(dllimport)
#endif


class FIGURESDYNAMICLIB_API Figure
{
protected:
	std::string _name{ "Фигура" };

public:
	Figure();

	Figure(const std::string& fig_name);

	virtual void printMe() const;
};
