// Lab_02.cpp
// < Գ���� ����� >
// ����������� ������ � 2.
// ˳����� ��������.
// ������ 12 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a; // ������� ��������
	double Pi = 4 * atan(1.); // ����� �
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "a = "; cin >> a;

	z1 = sin(4 * a) / (1 + cos(4 * a)) * cos(2 * a) / (1 + cos(2 * a));
	z2 = cos(3. / 2 * Pi - a) / sin(3. / 2 * Pi - a);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}