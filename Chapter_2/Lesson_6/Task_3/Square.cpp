#include "Square.h"


Square::Square() : Rectangle(10, 10) {
	_name = "Квадрат";
}

Square::Square(double a) : Rectangle(a, a) {
	_name = "Квадрат";
}
