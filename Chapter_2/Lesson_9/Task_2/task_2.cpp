#include <iostream>
#include <string>

// Finds the largest common divisor of 2 integers
int getGSD(int a, int b)
{
	a = std::abs(a);
	b = std::abs(b);
	while (a > 0 && b > 0)
		a > b ? a %= b : b %= a;
	return a + b;
}

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator / getGSD(numerator, denominator);
		denominator_ = denominator / getGSD(numerator, denominator);
	}

	// Returns a string representation of a fraction
	std::string string_repr() const { return (std::to_string(numerator_) + "/" + std::to_string(denominator_)); }

	bool operator==(Fraction other) { return numerator_ * other.denominator_ == other.numerator_ * denominator_; }
	bool operator!=(Fraction other) { return !(*this == other); }
	bool operator<(Fraction other) { return numerator_ * other.denominator_ < other.numerator_ * denominator_; }
	bool operator>(Fraction other) { return numerator_ * other.denominator_ > other.numerator_ * denominator_; }
	bool operator<=(Fraction other) { return !(*this > other); }
	bool operator>=(Fraction other) { return !(*this < other); }
	Fraction operator+(Fraction other) {
		int res_numerator = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int res_denominator = denominator_ * other.denominator_;
		return Fraction(res_numerator, res_denominator);
	}
	Fraction operator-(Fraction other) {
		int res_numerator = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int res_denominator = denominator_ * other.denominator_;
		return Fraction(res_numerator, res_denominator);
	}
	Fraction operator*(Fraction other) {
		int res_numerator = numerator_ * other.numerator_;
		int res_denominator = denominator_ * other.denominator_;
		return Fraction(res_numerator, res_denominator);
	}
	Fraction operator/(Fraction other) {
		int res_numerator = numerator_ * other.denominator_;
		int res_denominator = denominator_ * other.numerator_;
		return Fraction(res_numerator, res_denominator);
	}
	Fraction operator-() const { Fraction temp = *this; temp.numerator_ = -numerator_; temp.denominator_ = denominator_; return temp; }
	Fraction& operator++() { numerator_ += denominator_; return *this; }
	Fraction operator++(int) {
		Fraction temp = *this;
		++(*this);
		return temp;
	}
	Fraction& operator--() { numerator_ -= denominator_; return *this; }
	Fraction operator--(int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int numerator_1, denominator_1, numerator_2, denominator_2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator_1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator_1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator_2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator_2;
	Fraction f1(numerator_1, denominator_1);
	Fraction f2(numerator_2, denominator_2);

	// Сложение
	std::cout << f1.string_repr() << " + " << f2.string_repr() << " = " << (f1 + f2).string_repr() << std::endl;

	// Вычитание
	std::cout << f1.string_repr() << " - " << f2.string_repr() << " = " << (f1 - f2).string_repr() << std::endl;

	// Умножение
	std::cout << f1.string_repr() << " * " << f2.string_repr() << " = " << (f1 * f2).string_repr() << std::endl;

	// Деление
	std::cout << f1.string_repr() << " / " << f2.string_repr() << " = " << (f1 / f2).string_repr() << std::endl;

	// Унарный минус
	std::cout << "Унарный минус для первой дроби: " << (-f1).string_repr() << std::endl;

	//Префиксный инкремент и умножение
	std::cout << "++" << f1.string_repr() << " * " << f2.string_repr() << " = ";
	std::cout << (++f1 * f2).string_repr() << std::endl;
	std::cout << "Значени дроби 1 = " << f1.string_repr() << std::endl;

	//Постфиксный декремент и умножение
	std::cout << f1.string_repr() << "--" << " * " << f2.string_repr() << " = ";
	std::cout << (f1-- * f2).string_repr() << std::endl;
	std::cout << "Значени дроби 1 = " << f1.string_repr() << std::endl;

	return 0;
}
