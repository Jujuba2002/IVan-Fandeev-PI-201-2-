# Код точно такой же как на C++(все комментарии там)

def dividerslist(quantity: int):
	Data = []
	i = 1

	while 2002:

		if i == quantity:
			Data.append(i)
			break

		elif (i != 1) and ((quantity % i) == 0):
			Data.append(i)
			quantity /= i
			i = 0

		i += 1
	return Data

def print_factorization(quantity: int) -> None:
	Data = dividerslist(quantity)
	size = int(len(Data))

	i = 0
	while i < size:
		
		if i == 0:
			print(Data[0], end ="")

		elif Data[i] == Data[i - 1]:
			degreeofnum = 1
			while Data[i] == Data[i - 1]:
				i += 1
				degreeofnum += 1
				if i == size: 
					break
			print("^", end ="")
			print(degreeofnum, end ="")
			i -= 1
		else:
			print("*", end = "")
			print(Data[i], end = "")
		i += 1

quantity = int(input("Введите число: "))
print_factorization(quantity)