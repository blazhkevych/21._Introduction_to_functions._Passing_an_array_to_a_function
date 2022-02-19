/*
10. Написать функцию, возвращающую количество
простых чисел в передаваемом ей массиве.
*/

#include <iostream>
#include <iomanip> // Содержит setw.

using namespace std;

void Init1DArrayRandom(int arr[], int size, int min, int max) // Функция инициализирует одномерный массив псевдослучайными числами с заданным диапазоном.
{
	for (int i = 0; i < size; i++) // Заполняем одномерный массив псевдослучайными числами.
		arr[i] = rand() % (max - min + 1) + min;
}

void Print1DArray(int arr[], int size) // Функция выводит одномерный массив на экран.
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i]; // setw(4) - Задает ширину поля отображения для следующего элемента в потоке.
}

bool IsPrime(int number) // Функция проверяющая является ли число простым.
{
	if (number < 2)
		return false;
	for (int i = 2; i * i <= number; i++) // Проверка до квадратного корня из number.
		if (number % i == 0) // Если найден другой делитель числа number.
			return false;
	return true;
}

int NumberOfPrimesIn1DArr(int arr[], int size) // Функция возвращающая количество простых чисел в одномерном массиве.
{
	int count{ 0 };

	for (int i = 0; i < size; i++)
		if (IsPrime(arr[i]))
			count++;

	return count;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.
	srand(time(0));
	/*
		Функция srand() используется для установки начала последовательности,
	генерируемой функ­цией rand() (функция rand() возвращает псевдослучайные числа).
		Функция srand() позволяет запускать программу несколько раз	с различными
	последователь­ностями псевдослучайных чисел.
	*/

	const int size{ 6 }; // Размер одномерного массива. 

	int arr[size]{ 0 }; // Инициализируем двумерный массив.

	Init1DArrayRandom(arr, size, 0, 100);

	Print1DArray(arr, size);

	cout << endl << "Простых чисел в массиве: " << NumberOfPrimesIn1DArr(arr, size);

	return 0;
}