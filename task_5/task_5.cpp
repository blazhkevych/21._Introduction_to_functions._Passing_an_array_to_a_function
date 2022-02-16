/*
5. Число называется совершенным, если сумма всех его
делителей равна ему самому. Написать функцию поиска
таких чисел во введенном интервале.
*/

#include <iostream>
using namespace std;

bool PerfectNumber(int number) // Функция проверки на совершенное число.
{
	int sum{ 0 };
	for (int j = 1; j < number; j++)
	{
		if (number % j == 0)
		{
			sum += j;
		}
	}
	if (number == sum)
		return true;
	return false;
}

void PrintPerfectNumber(int start, int end)
{
	for (int i = start; i < end; i++) // Числа из диапазона.
	{
		if (PerfectNumber(i))
		{
			cout << i << ' ';
		}
	}
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.

	cout << "Введите начало интервала, затем конец: \n";
	int num1{ 0 }, num2{ 0 };
	cin >> num1 >> num2;
	cout << endl;

	cout << "Совершенные числа из указанного диапазона : \n";
	PrintPerfectNumber(num1, num2);
	cout << endl;

	return 0;
}