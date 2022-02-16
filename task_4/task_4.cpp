/*
4. Написать функцию, которая получает в качестве
параметров 2 целых числа и возвращает сумму чисел из
диапазона между ними.
*/

#include <iostream>
using namespace std;

int SumOfNumbersBetweenStartEnd(int start, int end) // Функция, вычисляет сумму чисел из диапазона между ними.
{
	int sum{ 0 }, i = start + 1;
	while (i < end)
	{
		sum += i;
		i++;
	}
	return sum;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.

	cout << "Введите первое число, затем второе: \n";
	int num1{ 0 }, num2{ 0 };
	cin >> num1 >> num2;
	cout << endl;

	cout << "Cумма чисел из диапазона между ними : \n" << SumOfNumbersBetweenStartEnd(num1, num2) << endl;

	return 0;
}