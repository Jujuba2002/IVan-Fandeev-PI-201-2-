number = input("Введите число, от которого нужно нужно взять факториал: ")
if int(number) > 0:
	i = 1
	n = 1
	while i < int(number):
		n *= (i + 1)
		i += 1
	if n > 1000000000:
		print("n Не соответствует условию (1 <= n <= 1000000000)")
	else:
		print(n)
else:
	print("Неправильный ввод")