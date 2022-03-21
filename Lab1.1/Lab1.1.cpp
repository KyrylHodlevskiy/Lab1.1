#include "Money.h"
#include <iostream>
using namespace std;
Money makeMoney(int x, int y, bool& isCorrect)
{
	Money z;
	if (!z.Init(x, y))
	{
		isCorrect = false;
		cout << "Wrong arguments to Init!" << endl;
		
	}
	return z;
}
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	Money z;
	z.Read();
	z.Display();
	cout << "Summa = " << z.summa() << endl << endl;
	double x, y;
	cout << "Введіть номінал і кількість" << endl << endl;
	cout << " Номінал = "; cin >> x;
	cout << " Кількість = "; cin >> y;
	
	bool isCorrect = true;
	z = makeMoney(x, y, isCorrect);
	if (!isCorrect) {
		return 0;
	}

	z.Display();
	cout << "Summa = " << z.summa() << endl;
	cin.get();
	return 0;
}
