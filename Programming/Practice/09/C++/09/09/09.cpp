#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int h1, h2, m1, m2, m1h, m2h;
	char shtu4ka1, shtu4ka2;
	cout << "Введите время для первого человека: " << endl;
	cin >> h1 >> shtu4ka1 >> m1;
	cout << "Введите время для второго человека: " << endl;
	cin >> h2 >> shtu4ka2 >> m2;
	m1h = m1 + 60;
	m2h = m2 + 60;
	if (h1 >= 0 && h1 <= 23 && h2 >= 0 && h2 <= 23 && m1 >= 0 && m1 <= 59 && m2 >= 0 && m2 <= 59 && shtu4ka1 == ':' && shtu4ka2 == ':') 
	{
		if (h1 == h2)
		{
			if ( (abs(m1 - m2)) <= 15 )
			{
				cout << "Встреча состоится" << endl;
			}
			else
			{
				cout << "Встреча не состоится" << endl;
			}
		}
		else if (h1 != h2)
		{
			if (h1 > h2)
			{
				if ((h1 - h2) == 1)
				{
					if ((m1h - m2) <= 15)
					{
						cout << "Встреча состоится" << endl;
					}
				}
				if ((h1 - h2) != 1)
				{
					cout << "Встреча не состоится" << endl;
				}
			}
			else if (h2 > h1)
			{
				if ((h2 - h1) == 1)
				{
					if ((m2h - m1) <= 15)
					{
						cout << "Встреча состоится" << endl;
					}
					else
					{
						cout << "Встреча не состоится" << endl;
					}
				}
				if ((h2 - h1) != 1)
				{
					cout << "Встреча не состоится";
				}
			}
		}
	}
	else
	{
		cout << "Неправильный ввод";
	}
}