/*
1. Написать функцию, которая проверяет, является ли
переданное ей число простым? Число называется простым ,
если оно делится без остатка только на себя и на единицу.
*/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setw; // setw(4) - Задает ширину поля отображения для следующего элемента в потоке.

bool IsPrime(int number) // Функция проверяющая является ли число простым. /2
{
	for (int i = 2; i * i <= number; i++)
		if (number % i == 0)
			return false;
	return true;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.
	cout << "Введите число: \n";
	int number{ 0 };
	cin >> number;

	cout << endl << bool(IsPrime(number));

	return 0;
}