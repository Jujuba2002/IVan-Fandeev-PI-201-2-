#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int a;
    int b;
    double c;
    double d;
    a = 3;
    b = 3.14;
    c = 3;
    d = 3.14;
    cout << "a = ";
    cout << int(a) << endl;
    cout << "b = ";
    cout << int(b) << endl;
    cout << "b = 3, потому что она типа int, который включает только целые числа" << endl;
    cout << "c = ";
    cout << double(c) << endl;
    cout << "d = ";
    cout << double(d) << endl;
}