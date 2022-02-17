/*
8. Написать функцию, которая принимает две даты (т .е.
функция принимает шесть параметров) и вычисляет
разность в днях между этими датами. Для решения этой
задачи необходимо также написать функцию, которая
определяет, является ли год високосным.
*/
// НЕ РАБОТАЕТ

/*
Возможно, стоит еще дописать ф-ю сравнения введенных дат на то, чтобы вторая дата была больше первой.
*/

#include <iostream>
using namespace std;

bool IsItALeapYear(int year) // Функция, проверяющая является ли год високосным.
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;
	else
		return false;
}

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

bool DateValidationCheck(int day, int month, int year) // Функция, проверяющая корректность введенных значений даты.
{

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

int DifferenceInDaysBetweenDates(
	int day1, int month1, int year1,
	int day2, int month2, int year2) // Функция, вычисляет разность в днях между этими датами.
{
	int differenceIs{ 0 }; // Счетчик разности в днях между этими датами.

	if (year1 == year2 && month1 == month2 && day1 == day2) // Если даты равны.
	{
		return differenceIs = 0;
	}
	else
	{
		while (year1 != year2 && month1 != month2 && day1 != day2) // Пока даты не равны, вычисляем следующую дату.
		{
			switch (month1)
			{
			case April: // Расчет следующей даты за введенной, для месяцев c 30 днями.
			case June:
			case September:
			case November:
				day1++;
				if (day1 > 30)
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;

			case January: // Расчет следующей даты за введенной, для месяцев c 31 днем.
			case March:
			case May:
			case July:
			case August:
			case October:
			case December:
				day1++;
				if (day1 > 31)
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;

			case February: // Расчет следующей даты за введенной, для февраля (как высокосного так и не високосного).
				day1++;
				if (!(year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0)) && (day1 > 28)) // Не високосный.
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				else if ((year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0)) && (day1 > 29)) // Високосный.
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;
			}
			//cout << "Следующая дата: " << day1 << '.' << month1 << '.' << year1 << endl;
			differenceIs++;
		}
	}
	return differenceIs;
}

int main()
{
	setlocale(LC_ALL, ""); // Работает только с потоком вывода.
/*cout << boolalpha << IsItALeapYear(15) << endl; // Задачу выполняет исправно, тесты прошла.
		cout << boolalpha << IsItALeapYear(1700) << endl;
		cout << boolalpha << IsItALeapYear(1800) << endl;
		cout << boolalpha << IsItALeapYear(2007) << endl;
		cout << boolalpha << IsItALeapYear(2021) << endl;
		cout << boolalpha << IsItALeapYear(2022) << endl;*/

	//Допроверить работу функций DateValidationCheck и DifferenceInDaysBetweenDates
	cout << "True:\n";
	cout << boolalpha << DateValidationCheck(29, 2, 2001) << endl;
	cout << "False:\n";

		












		/*int day1{ 0 }, month1{ 0 }, year1{ 0 };
		while (DateValidationCheck(day1, month1, year1) == false)
		{
			cout << "Введите 1-ю дату, сначала день, месяц, затем год (22.9.2019): \n";
			cin >> day1 >> month1 >> year1;
			cout << endl;
		}

		int day2{ 0 }, month2{ 0 }, year2{ 0 };
		while (DateValidationCheck(day2, month2, year2) == false)
		{
			cout << "Введите 2-ю дату, сначала день, месяц, затем год (1.10.2021): \n";
			cin >> day2 >> month2 >> year2;
			cout << endl;
		}

		cout << "Разность в днях между этими датами = " << DifferenceInDaysBetweenDates(day1, month1, year1, day2, month2, year2);*/

		return 0;
}