#include "Square.h"


Square::Square() : Rectangle(10, 10) {
	_name = " вадрат";
}

Square::Square(double a) : Rectangle(a, a) {
	_name = " вадрат";
}
