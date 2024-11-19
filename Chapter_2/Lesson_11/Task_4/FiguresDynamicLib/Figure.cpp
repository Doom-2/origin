#include "Figure.h"


Figure::Figure() : _name{ "Фигура" } {}

Figure::Figure(const std::string& fig_name) : _name(fig_name) {}

void Figure::printMe() const {
	std::cout << _name << std::endl;
}
