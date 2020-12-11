#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double(a);
    double(b);
    double(c);
    double(D);
    double(x1);
    double(x2);
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;
    cout << "Введите c:" << endl;
    cin >> c;
    D = sqrt(b * b - 4 * a * c);
    if ((b * b - 4 * a * c) < 0)
    {
        cout << "Решений нет";
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