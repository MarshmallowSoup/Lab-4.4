// < Лисецький Володимир >
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 12

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6)
			y = R;
		if (x > -6 && x <= -R)
			y = ((x + 6) / (6 - R)) - 1;
		if (x > -R && x <= 0)
			y = R - sqrt(R * R - pow((x + R), 2));
		if (x > 0 && x <= R)
			y = sqrt(R * R - x * x); 
		if (x > R)
			y = R - x;

		cout << "|" << setw(7) << setprecision(0) << x
			<< " |" << setw(10) << setprecision(2) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
