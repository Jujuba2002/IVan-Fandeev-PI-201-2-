import random # Для рандомной сортировки
import math   # Для вынесения квадратного корня

# Функция 1 для сортировки одномерного массива
def BozoSort1(arr: list, top = True) -> list:
	
	sorted = False
	quantity = int(len(arr))
	quantityforrandom = (quantity - 1)

	while not sorted:
		if top:
			# Случайные индексы в массиве
			randvalue1 = random.randint(0, quantityforrandom)
			randvalue2 = random.randint(0, quantityforrandom)
			# Обмен значениями
			arr[randvalue1],arr[randvalue2] = arr[randvalue2], arr[randvalue1]

			sorted = True
			# Цикл, который проверяет отсортировался ли массив
			for i in range(1, quantity):
				if (arr[i - 1] > arr[i]):
					sorted = False
					break

		if not top:
			# Случайные индексы в массиве
			randvalue1 = random.randint(0, quantityforrandom)
			randvalue2 = random.randint(0, quantityforrandom)
			# Обмен значениями
			arr[randvalue1],arr[randvalue2] = arr[randvalue2], arr[randvalue1]

			sorted = True
			# Цикл, который проверяет отсортировался ли массив
			for i in range(1, quantity):
				if (arr[i - 1] < arr[i]):
					sorted = False
					break

	return arr
# Функция 2 для сортировки двумерного массива
def BozoSort2(arr2D:list, top = True) -> list:
	'''
	Двумерный массив преобразуется в одномерный 
	и обрабатывается первой функцией
	'''
	quantity2D = int(len(arr2D))
	arrimprv = []

	for i in range(quantity2D):
		for k in range(quantity2D):

			arrimprv.append(arr2D[i][k])

	return BozoSort1(arrimprv, top)
# Функция 3 для сортировки первых 3 элементов:
def BozoSort3(a: int, b: int, c: int, top = True) -> list:
	'''
	Из 3 элементов создается массив,
	который обрабатывается первой фунцией
	'''
	arrnum = list(range(3))
	arrnum[0] = a
	arrnum[1] = b
	arrnum[2] = c

	return(BozoSort1(arrnum, top))
# Функция для вывода на экран отсортированных массивов
def Output(arr: list, quantity: int):
	
	for i in range(quantity):
		print(arr[i], end=' ')
	print("")

quantity = int(input("Введите кол-во элементов:\n"))
quantity2D = int(math.sqrt(quantity))
# Ввод одномерного массива
arr = list(map(int, input('Введите элементы:\n').split(' ')))
print("")

arr2D = []
item2D = []
q = 0
# Цикл для создания двухмерного массива из одномерного
for i in range(quantity):

	item2D.append(arr[i])
	q += 1

	if q % quantity2D == 0:

		arr2D.append(item2D)
		item2D = []

# Переменные для первых 3 элементов
a = int(arr[0])
b = int(arr[1])
c = int(arr[2])
# Выполнение функций и вывод на экран
itemout = BozoSort1(arr)
Output(itemout, quantity)
itemout = BozoSort1(arr, False)
Output(itemout, quantity)
itemout = BozoSort2(arr2D)
Output(itemout, quantity)
itemout = BozoSort2(arr2D, False)
Output(itemout, quantity)
itemout = BozoSort3(a, b, c)
Output(itemout, 3)
itemout = BozoSort3(a, b, c, False)
Output(itemout, 3)