from math import sqrt
print("Введите a:")
a = input()
print("Введите b:")
b = input()
print("Введите c:")
c = input()
if (float(b)*float(b) - 4*float(a)*float(c)) < 0:
	print("Решений нет")
else:
	D = sqrt(float(b)*float(b) - 4*float(a)*float(c))
	x1 = (-float(b) + float(D))/2
	x2 = (-float(b) - float(D))/2
	if x1 == x2:
			print("x = ", x1)
	else:
			print("x1 = ", x1)
			print("x2 - ", x2)