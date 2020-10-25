print("Введите число, возводимое в степень и саму степень: ")
a, b = input().split()
i = 1
c = float(a)
if int(b) > 0:
	while i < int(b):
		c = float(c)*float(a)
		i +=1

print(c)