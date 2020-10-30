#include<iostream>
using namespace std;
double BMI(double weight, double height)
{
	double BMI = (weight / (height * height));
	return BMI;
}

void printBMI(double BMI)
{
	if (BMI < 18.5) cout << "Underweight" << endl;
	if ((18.5 <= BMI) && (BMI < 25)) cout << "Normal" << endl;
	if ((25 <= BMI) && (BMI < 30)) cout << "Overweight" << endl;
	if (30 <= BMI) cout << "Obesity" << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double weight, height, bmi;
	cout << "Введите вес и рост:" << endl;
	cin >> weight >> height;

	bmi = BMI(weight, height);

	printBMI(bmi);


}