/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 7: 5)
	Цель: Реализовать функцию для вычисления гиперболического синуса(граница ряда определяется как константа).
*/

#include <iostream>
#include <climits>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

class SimpleClass
{
public:
	static int x;
	static int n;
	void show();
} obj1, obj2;
int SimpleClass::x;
int SimpleClass::n;

int value() 
{
	while (true)
	{
		cout << "Enter the argument: ";
		short obj1;
		cin >> obj1;
		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "The entered value is not correct, please try again " << endl;
		}
		else 
		{
			return obj1;
		}
	}
}

int factorial(int obj2) 
{
	return (obj2 == 0) ? 1 : obj2 * factorial(obj2 - 1);
}

double calculations(int obj1)
{
	double sh = 0;
	const unsigned short obj2 = 8;
	for (int i = 0; i < obj2; i++) 
	{
		sh += pow(obj1, 2 * i + 1) / factorial(2 * i + 1);
	}
	return sh;
}

int main() {
	int obj1 = value();
	double sh = calculations(obj1);
	cout << "Hyperbolic sine sh(" << obj1 << ") = " << sh << endl;
	system("pause");
	return 0;
}
