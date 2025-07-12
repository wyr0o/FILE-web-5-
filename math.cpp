#include "math.h"

#include <iostream>

double slozhenie(double& a, double& b) { std::cout << a + b; return 0; }
double delenie(double& a, double& b) { std::cout << a / b;  return 0;
}
double vychitanie(double& a, double& b) { std::cout << a - b; return 0;
}
double stepen(double& a, double& n)
{
	int temp =1;
	for (int i = 0; i < n; i++)
	{
		temp *= a;
	}
	std::cout << temp;
	return 0;
}
double umnozhenie(double& a, double& b) { std::cout << a * b;  return 0;}