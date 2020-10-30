a = input("Введите число: ")
dvoika = 2
i = 1
if float(a) > 0:
	while i:
		if dvoika <= float(a):
			dvoika *=2
		else:
			break
		i += 1
	print(i)
if float(a) == 0:
	print(0)