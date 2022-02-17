/*
7. Написать функцию, проверяющую является ли переданный
ей параметр алфавитно-цифровым.
*/

#include <iostream>
using namespace std;

bool lphanumeric(char x) // Функция проверяющая является ли переданный ей параметр алфавитно - цифровым.
{
	if (x >= '0' && x <= '9' || x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
		return true;
	return false;
}

int main()
{
	cout << "\nEnter the parameter: \n";
	char x{ 0 };
	cin >> x;

	if (lphanumeric(x))
		cout << "The passed parameter is alphanumeric.\n";
	else
		cout << "The passed parameter is not alphanumeric.\n";

	return 0;
}