// Task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
		Fraction operator+(Fraction other) {
			if (denominator_ != other.denominator_) {
				numerator_ = numerator_ * other.denominator_;
				other.numerator_ = other.numerator_ * denominator_;
				denominator_ = denominator_ * other.denominator_;
			}
			return Fraction(numerator_ + other.numerator_, denominator_);
		}
		Fraction operator-(Fraction other) {
			if (denominator_ != other.denominator_) {
				numerator_ = numerator_ * other.denominator_;
				other.numerator_ = other.numerator_ * denominator_;
				denominator_ = denominator_ * other.denominator_;
			}
			return Fraction(numerator_ - other.numerator_, denominator_);
		}
		Fraction operator*(Fraction other) {
			return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
		}
		Fraction operator/(Fraction other) {
			return Fraction(numerator_ * other.denominator_, other.numerator_ * denominator_);
		}
		Fraction& operator++() { numerator_ = numerator_ + denominator_; return *this; }
		Fraction operator++(int) { Fraction temp = *this; ++(*this); return temp; }
		Fraction& operator--() { numerator_ = numerator_ - denominator_; return *this; }
		Fraction operator--(int) { Fraction temp = *this; --(*this); return temp; }
		void check() {
			int a;
			if (numerator_ < denominator_) { a = numerator_; }
			else {a = denominator_; }
			if (numerator_ > 0) {
				for (int i = a; i > 1; i--) {
					if (!(numerator_ % i) && !(denominator_ % i)) {
						numerator_ /= i;
						denominator_ /= i;
					}
				}
			}
			else if (numerator_ < 0) {
				for (int i = a; i < -1; i++) {
					if (!(numerator_ % i) && !(denominator_ % i)) {
						numerator_ /= -i;
						denominator_ /= -i;
					}
				}
			}
		}
		void print() {
			Fraction::check();
			std::cout << numerator_ << "/" << denominator_ << "\n";
		};
};

int main()
{
	setlocale(LC_ALL, "Russian");
	double f1_1, f1_2, f2_1, f2_2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> f1_1;
	do {
		std::cout << "Введите знаменатель дроби 1: ";
		std::cin >> f1_2;
		if (f1_2 == 0) { std::cout << "Делить на ноль нельзя!\n"; }
	} while (f1_2 == 0);
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> f2_1;
	do {
		std::cout << "Введите знаменатель дроби 2: ";
		std::cin >> f2_2;
		if (f2_2 == 0) { std::cout << "Делить на ноль нельзя!\n"; }
	} while (f2_2 == 0);
	Fraction f1(f1_1, f1_2);
	Fraction f2(f2_1, f2_2);
	Fraction sum = f1 + f2;
	std::cout << f1_1 << "/" << f1_2 << " + " << f2_1 << "/" << f2_2 << " = ";
	sum.print();
	Fraction sub = f1 - f2;
	std::cout << f1_1 << "/" << f1_2 << " - " << f2_1 << "/" << f2_2 << " = ";
	sub.print();
	Fraction mult = f1 * f2;
	std::cout << f1_1 << "/" << f1_2 << " * " << f2_1 << "/" << f2_2 << " = ";
	mult.print();
	Fraction div = f1 / f2;
	std::cout << f1_1 << "/" << f1_2 << " / " << f2_1 << "/" << f2_2 << " = ";
	div.print();
	Fraction incr_mult_pre = ++f1 * f2;
	std::cout << "++" << f1_1 << "/" << f1_2 << " * " << f2_1 << "/" << f2_2 << " = ";
	incr_mult_pre.print();
	Fraction decr_mult_post = f1-- * f2;
	std::cout << f1_1 << "/" << f1_2 << "-- " << " * " << f2_1 << "/" << f2_2 << " = ";
	decr_mult_post.print();
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
