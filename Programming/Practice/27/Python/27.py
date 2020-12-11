def Sorting(array: list, quantity: int):
	qs = quantity - 1
	for i in range(qs):
		for j in range(qs):
			if (array[j] < array[j + 1]):
				array[j], array[j + 1] = array[j + 1], array[j]
	return array

quantity = int(input("Введите кол-во сигналов: \n"))
first = list(map(int, input('Введите сигналы: \n').split(' ')))
last = []
size = 0

for i in range(quantity):
	last.append(first[i])
	size += 1
	last = Sorting(last, size)

	if size <= 5:
		for j in range(size):
			print(last[j], end=" ")
		print("")

	else:
		k = size - 5
		while k < size:
			print(last[k], end = " ")
			k += 1
		print("")
	i += 1