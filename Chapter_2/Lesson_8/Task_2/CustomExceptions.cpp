#include "CustomExceptions.h"
#include <iostream>

FigureException::FigureException(std::string const& what): std::logic_error(what) {};
