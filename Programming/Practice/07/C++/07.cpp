#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUSSIAN");
	int opt;
	double a, b, c, S, p, AB, AB1, AB2, A1, A2, BC, BC1, BC2, B1, B2, CA, CA1, CA2, C1, C2;
	cout << "�������� ������ ����� ���������� ������������:" << endl;
	cin >> opt;
	if (int(opt) == 1){
		cout << "������� ����� ������� a:" << endl;
		cin >> a;
		cout << "������� ����� ������� b:" << endl;
		cin >> b;
		cout << "������� ����� ������� c:" << endl;
		cin >> c;
		// ���������� ������� ������������ �� ������� ������
		p = ((double(a) + double(b) + double(c)) / 2);
		S = (sqrt(double(p) * (double(p) - double(a)) * (double(p) - double(b)) * (double(p) - double(c))));
		cout << "S = ";
		cout << S << endl;
	}
	else if (int(opt) != 1 && int(opt) <= 1000 && int(opt) >= -1000){
		cout << "������� ���������� ������� A(x;y):" << endl;
		cin >> A1 >> A2;
		cout << "������� ���������� ������� B(x;y):" << endl;
		cin >> B1 >> B2;
		cout << "������� ���������� ������� C(x;y):" << endl;
		cin >> C1 >> C2;
		// ���������� ��������� �������� ������ ������������
		AB1 = double(B1) - double(A1);
		AB2 = double(B2) - double(A2);
		BC1 = double(C1) - double(B1);
		BC2 = double(C2) - double(B2);
		CA1 = double(A1) - double(C1);
		CA2 = double(A2) - double(C2);
		// ���������� ���� ������ ������������
		AB = sqrt(AB1 * AB1 + AB2 * AB2);
		BC = sqrt(BC1 * BC1 + BC2 * BC2);
		CA = sqrt(CA1 * CA1 + CA2 * CA2);
		// ���������� ������� ������������ �� ������� ������
		p = ((AB + BC + CA) / 2);
		S = sqrt(p * (p - AB) * (p - BC) * (p - CA));
		cout << "S = ";
		cout << S << endl;
	}
	else if (int(opt) > 1000 || int(opt) < -1000){
	    cout << "��������� ����" << endl;
	}
	}