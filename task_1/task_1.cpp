/*
1. Написать функцию, которая проверяет, является ли
переданное ей число простым? Число называется простым ,
если оно делится без остатка только на себя и на единицу.
*/

#include <iostream>
using namespace std;

bool IsPrime(int number) // Функция проверяющая является ли число простым.
{
	if (number < 2)
		return false;
	for (int i = 2; i * i <= number; i++) // Проверка до квадратного корня из number.
		if (number % i == 0) // Если найден другой делитель числа number.
			return false;
	return true;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.
	cout << "Введите число: \n";
	int number{ 0 };
	cin >> number;

	cout << endl << boolalpha << IsPrime(number) << endl; // boolalpha позволяет вводить и выводить булевы значения с помощью ключевых слов true и false.

	return 0;
}