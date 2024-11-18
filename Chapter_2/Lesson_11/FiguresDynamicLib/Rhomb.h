#pragma once
//#ifdef FIGURESDYNAMICLIB_EXPORTS
//#define FIGURESDYNAMICLIB_API __declspec(dllexport)
//#else
//#define FIGURESDYNAMICLIB_API __declspec(dllimport)
//#endif

#include "Parallelogram.h"


class FIGURESDYNAMICLIB_API Rhomb : public Parallelogram
{
public:
	Rhomb(double a, double A, double B);
};
