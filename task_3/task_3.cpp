/*
3. Написать функцию, которая принимает два параметра:
основание степени и показатель степени, и вычисляет
степень числа на основе полученных данных.
*/

#include <iostream>
using namespace std;

int DegreeOfNumber(int base_of_degree, int exponent) // Функция, вычисляет степень числа.
{
	long long unsigned int result{ 1 }, i{ 0 };
	do
	{
		result = result * base_of_degree;
		i++;
	} while (i < exponent);
	return result;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.

	cout << "Введите основание степени: \n";
	int base_of_degree{ 0 }, exponent{ 0 };
	cin >> base_of_degree;
	cout << endl;

	cout << "Введите показатель степени: \n";
	cin >> exponent;
	cout << endl;

	cout << base_of_degree << " в степени " << exponent << " = "
		<< DegreeOfNumber(base_of_degree, exponent) << endl;
	cout << endl;

	return 0;
}