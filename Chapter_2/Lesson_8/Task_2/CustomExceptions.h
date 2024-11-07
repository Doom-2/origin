#pragma once

#include <iostream>


class FigureException : public std::logic_error
{
public:
	FigureException(std::string const& err);
};