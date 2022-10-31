// Lab_03_2.cpp
// Михайлович Юлії 
// Лабораторна робота № 4.3
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 13
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "--------------" << endl;
	cout << setw(7) << "| " << "F" << " |" << endl;
	cout << "--------------" << endl;
	x = xp;
	while (x <= xk)
	{
	    if (x - 1 < 0 && b - x != 0)
		     F = a * (x * x) + b;
	    else
	          if (x - 1 > 0 && b + x == 0)
		         F = (x - a) / (x);
		        else
		            F = x / c;
		cout << " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "--------------" << endl;
	return 0;
}