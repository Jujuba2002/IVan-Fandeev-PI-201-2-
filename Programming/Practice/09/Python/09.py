import math
print("Введите время для первого человека")
h1, m1 = input().split(":")
print("Введите время для второго человека")
h2, m2 = input().split(":")
m1h = int(m1) + 60
m2h = int(m2) + 60
if int(h1) >= 0 and int(h1) <= 23 and int(h2) >= 0 and int(h2) <= 23 and int(m1) >= 0 and int(m1) <= 59 and int(m1) >= 0 and int(m1) <= 59:
	if h1 == h2:
		if math.fabs(int(m1) - int(m2))<= 15:
			print("Встреча состоится")
		else:
			print("Встреча не состоится")
	else:
		if (math.fabs(int(h1) - int(h2))) == 1:
			if int(h1) > int(h2):
				if (int(m1h) - int(m2)) <= 15:
					print("Встреча состоится")
				else:
					print("Встреча не состоится")
			elif int(h2) > int(h1):
				if (int(m2h) - int(m1)) <= 15:
					print("Встреча состоится")
				else:
					print("Встреча не состоится")
		else:
			print("Встреча не состоится")
else:
	print("Неправильный ввод")