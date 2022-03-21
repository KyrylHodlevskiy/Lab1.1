#include "Money.h"
#include <iostream>
#include <cmath>
using namespace std;
bool Money::Init(int x, int y)
{
	if ((x == 1 || x == 2 || x == 5 || x == 10 || x == 20 || x == 50 || x == 100 || x == 200 || x == 500)&& y>=1)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Money::Read()
{
	int x, y;
	do
	{
		cout << "Введіть номінал і кількість" << endl;
		cout << " Номінал = "; cin >> x;
		cout << " Кількість = "; cin >> y;
	} while (!Init(x, y));
}
void Money::Display() const
{
	cout << endl;
	cout << " Номінал = " << first << endl;
	cout << " Кількість = " << second << endl;
}
double Money::summa() const
{
	return first * second;
}		