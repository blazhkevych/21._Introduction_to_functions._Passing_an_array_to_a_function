/*
8. Написать функцию, которая принимает две даты (т .е.
функция принимает шесть параметров) и вычисляет
разность в днях между этими датами. Для решения этой
задачи необходимо также написать функцию, которая
определяет, является ли год високосным.
*/
// НЕ РАБОТАЕТ

#include <iostream>
using namespace std;

bool DateValidationCheck(int day, int month, int year) // Функция, проверяющая корректность введенных значений даты.
{
	enum Months
	{
		January = 1, // Январь, 31 день
		February = 2, // Февраль, 28 дней (В високосные годы вводится дополнительный день — 29 февраля.)
		March = 3, // Март, 31 день 
		April = 4, // Апрель, 30 дней 
		May = 5, // Май, 31 день 
		June = 6, // Июнь, 30 дней 
		July = 7, // Июль, 31 день 
		August = 8, // Август, 31 день 
		September = 9, // Сентябрь, 30 дней 
		October = 10, // Октябрь, 31 день 
		November = 11, // Ноябрь, 30 дней 
		December = 12 // Декабрь, 31 день 
	};

	//cout << "Введите год ( > 1 ):" << endl;
	//cin >> year;
	if (year > 0)
	{
		//cout << "Введите месяц ( > 0 и < 13):" << endl;
		//cin >> month;
		if (month > 0 && month < 13)
		{
			//cout << "Введите день ( > 0 и < 32):" << endl;
			//cin >> day;
			if (
				((IsItALeapYear(year))
					&& (month == February) && (day == 29)) // если 29 февраля в високосном году
				|| ((IsItALeapYear(year))
					&& (month == February) && (day > 0 && day < 29)) // если 1-28 февраля, високосный год
				|| (!(IsItALeapYear(year))
					&& (month == February) && (day > 0 && day < 29)) // если 1-28 февраля, обычный год
				|| ((month == January
					|| month == March
					|| month == May
					|| month == July
					|| month == August
					|| month == October
					|| month == December) && (day > 0 && day < 32)) // все месяца, в которых 31 день
				|| ((month == April
					|| month == June
					|| month == September
					|| month == November) && (day > 0 && day < 31)) // все месяца, в которых 30 дней
				)
			{
				//cout << "Введите часы ( > -1 и < 24 ):" << endl;
				//cin >> time_hours;
				//if (time_hours > -1 && time_hours < 24)
				//{
					//cout << "Введите минуты ( > -1 и < 60 ):" << endl;
					//cin >> time_minutes;
					//if (time_minutes > -1 && time_minutes < 60)
					//{
						//cout << "Введите секунды( > 0 и < 60 ):" << endl;
						//cin >> time_seconds;
						//if (time_seconds > 0 && time_seconds < 60)
						//{
				return true;// cout << "Все введённые значения корректны."
								//<< "\nДата: " << day << '.' << month << '.' << year;
							//if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
								//cout << " (високосный год)." << endl;
							//else
							//	cout << " (обычный год)." << endl;
							//cout << "\nВремя: " << time_hours << ':' << time_minutes << ':' << time_seconds << endl;
						//}
						//else
							//cout << "Введите корректные секунды." << endl;
					//}
					//else
						//cout << "Введите корректные минуты." << endl;
				//}
				//else
					//cout << "Введите корректные часы." << endl;
			}
			else
				return false;//cout << "Введите корректный день." << endl;
		}
		else
			return false;//cout << "Введите корректный месяц." << endl;
	}
	else
		return false;//cout << "Введите корректный год." << endl;
}

bool IsItALeapYear(int year) // Функция, проверяющая является ли год високосным.
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;
	else
		return false;
}

int DifferenceInDaysBetweenDates(
	int day1, int month1, int year1,
	int day2, int month2, int year2) // Функция, вычисляет разность в днях между этими датами.
{
	int differenceIs{ 0 };
	
}



int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.

	return 0;
}