/*
2. Написать функцию, вычисляющую факториал переданного
ей числа.
*/

#include <iostream>
using namespace std;

int Factorial(int number) // Функция, вычисляющая факториал переданного ей числа.
{
	int result{ 1 };

	for (int i = 1; i <= number; i++)
	{
		result = result * i;
	}
	return result;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.

	cout << "Введите число: \n";
	int number{ 0 };
	cin >> number;

	cout << "Факториал числа " << number << " = " << Factorial(number) << endl;

	return 0;
}