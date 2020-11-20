import json
import os

usr_cmplt = 0 # Кол-во пользователей
with open ('in.json', 'r', encoding = 'utf-8') as read_in:
	inlocal = json.load(read_in)# В inlocal заптсывается содержимое in.json
outlocal = []
# Цикл, который вычисляет кол-во пользователей:
for i in inlocal: 
	if int(usr_cmplt) < int(i["userId"]):
		usr_cmplt += 1

for j in range(usr_cmplt + 1):#usr_cmplt + 1, потому что отсчет идет с 0
	completed = 0
	# Внутренний цикл считает сколько заданий сделал один пользователь:
	for n in range(len(inlocal)):
		if inlocal[n]["completed"] == True and inlocal[n]["userId"] == j:
			completed += 1
	# Запись данных о пользователе в outlocal:
	if completed >= 1 and completed <= 1000000000: # Условие задачи
		data = { "task_completed":completed, "userID":j}
		outlocal += [data]
# Запись содержимого outlocal в out.json:
with open("out.json", "w") as write_out:
    json.dump(outlocal, write_out, indent=2)