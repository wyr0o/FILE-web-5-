#include "math.h"
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double var1{};
	double var2{};
	int choice{};

	std::cout << "Введите первое число: ";
	std::cin >> var1;
	std::cout << "Введите второе число: ";
	std::cin >> var2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		slozhenie(var1, var2);
		break;
	case 2:
		vychitanie(var1, var2);
		break;
	case 3:
		umnozhenie(var1, var2);
		break;
	case 4:
		delenie(var1, var2);
		break;
	case 5:
		stepen(var1, var2);
		break;
	default:
		break;
	}
}