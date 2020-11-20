#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "json.h"

using namespace std;
using json = nlohmann::json;

int main()
{
	json inlocal; // Для работы с in.json
	json outlocal = json::array(); // Для работы с out.json


	ifstream fin("in.json");
	fin >> inlocal;

	int usr_cmplt = 0;// Кол-во юзеров 
	int completed;// Кол-во заданий сделанных одним юзером

	for(int i = 0; i < inlocal.size(); i++)// Цикл считает кол-во юзеров
	{
		if (usr_cmplt < inlocal[i]["userId"])
		{
			usr_cmplt++;
		}

	}
	for (int i = 1; i <= usr_cmplt; i++)// i = 1, а не i = 0, потому что нет юзера под номером 0
	{
		completed = 0;// В каждой итерации значение обнуляется 

		for(int j = 0; j < inlocal.size(); j++)// Цикл считает сколько верно решенных задач у юзера под номером i
		{
			if ((inlocal[j]["completed"] == true) && (inlocal[j]["userId"] == i))// Проверяется выполнено ли задание(completed) и выполнено ли оно одни и тем же пользователем(userId) 
			{
				completed++;
			}
		}

		if ((completed >= 1) && (completed <= 1000000000))// Требование из условия задачи
		{
			json data_usr;
			data_usr["task_completed"] = completed;
			data_usr["userId"] = i;
			outlocal.push_back(data_usr);// Создается json data_usr с ключами "task_completed" и "userId" и им присваивается соответствующее значение и вписывается в outlocal
		}

	}
	fin.close();// Закрытие файла
	ofstream fout("out.json");
	fout << std::setw(2) << outlocal << std::endl;// Перенос содержимого из utlocal в out.json
	fout.close();// Закрытие файла
}