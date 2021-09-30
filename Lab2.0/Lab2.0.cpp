// Lab_02.cpp
// < Фігура Тарас >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 12 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // вхідний параметр
	double Pi = 4 * atan(1.); // число пі
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "a = "; cin >> a;

	z1 = sin(4 * a) / (1 + cos(4 * a)) * cos(2 * a) / (1 + cos(2 * a));
	z2 = cos(3. / 2 * Pi - a) / sin(3. / 2 * Pi - a);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}