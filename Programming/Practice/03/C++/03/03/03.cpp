﻿#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    cout << "int и int" << endl;
    int(a);
    int(b);
    cout << "Введите целое число a:" << endl;
    cin >> a;
    cout << "Введите целое число b:" << endl;
    cin >> b;
    cout << "a + b =";
    cout << (int(a) + int(b)) << endl;
    cout << "a - b =";
    cout << (int(a) - int(b)) << endl;
    cout << "b - a =";
    cout << (int(b) - int(a)) << endl;
    cout << "a * b =";
    cout << (int(a) * int(b)) << endl;
    cout << "a / b =";
    cout << (int(a) / int(b)) << endl;
    cout << "b / a =";
    cout << (int(b) / int(a)) << endl;
    cout << "";
    cout << "";
    cout << "";
    cout << "double и double" << endl;
    double(c);
    double(d);
    cout << "Введите число c:" << endl;
    cin >> c;
    cout << "Введите число d:" << endl;
    cin >> d;
    cout << "c + d =";
    cout << (double(c) + double(d)) << endl;
    cout << "c - d =";
    cout << (double(c) - double(d)) << endl;
    cout << "d - c =";
    cout << (double(d) - double(c)) << endl;
    cout << "c * d =";
    cout << (double(c) * double(d)) << endl;
    cout << "c / d =";
    cout << (double(c) / double(d)) << endl;
    cout << "d / c =";
    cout << (double(d) / double(c)) << endl;
    cout << "int и double" << endl;
    cout << "Введите целое число a:" << endl;
    cin >> a;
    cout << "Введите число c:" << endl;
    cin >> c;
    cout << "a + c =";
    cout << (int(a) + double(c)) << endl;
    cout << "a - c =";
    cout << (int(a) - double(c)) << endl;
    cout << "c - a =";
    cout << (double(c) - int(a)) << endl;
    cout << "a * c =";
    cout << (int(a) * double(c)) << endl;
    cout << "a / c =";
    cout << (int(a) / double(c)) << endl;
    cout << "c / a =";
    cout << (double(c) / int(a)) << endl;
    cout << "";
    cout << "";
    cout << "";
    cout << "double и int" << endl;
    cout << "Введите число d:" << endl;
    cin >> d;
    cout << "Введите целое число b:" << endl;
    cin >> b;
    cout << "d + b =";
    cout << (double(d) + int(b)) << endl;
    cout << "d - b =";
    cout << (double(d) - int(b)) << endl;
    cout << "b - d =";
    cout << (int(b) - double(d)) << endl;
    cout << "d * b =";
    cout << (double(d) * int(b)) << endl;
    cout << "d / b =";
    cout << (double(d) / int(b)) << endl;
    cout << "b / d =";
    cout << (int(b) / double(d)) << endl;
}