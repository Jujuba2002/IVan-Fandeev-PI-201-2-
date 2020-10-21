print("Введите пример: ")
a, deistvie, b = input().split()
if deistvie == "+":
	print(float(a) + float(b))
elif deistvie == "-":
	print(float(a) - float(b))
elif deistvie == "*":
	print(float(a) * float(b))
elif deistvie == "/":
	if float(b) == 0:
		print("Ошибка: делитель равен нулю")
	else:
		print(float(a) / float(b))
else:
	print("Неправильный ввод")