#include <iostream>
#include <cmath>
using namespace std;
int main(){
setlocale(LC_ALL, "RUSSIAN");
double(a);
double(b);
double(c);
double(D);
double(x1);
double(x2);
cout << "������� a:" << emdl;
cin >> a;
cout << "������� b:" << emdl;
cin >> b;
cout << "������� c:" << emdl;
cin >> c;
D = sqrt(b * b - 4 * a * c);
if ((b * b - 4 * a * c) < 0)
{
    cout << "������� ���";
}
else {
    x1 = ((-b + D) / 2);
    x2 = ((-b - D) / 2);
    if (x1 == x2)
    {
        cout << "x = ";
        cout << x1;
    }
    else
    {
        cout << "x1 = ";
        cout << x1 << endl;
        cout << "x2 = ";
        cout << x2 << endl;
    }
}
}