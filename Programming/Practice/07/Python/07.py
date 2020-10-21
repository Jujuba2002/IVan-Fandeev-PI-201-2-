from math import sqrt
print("Выберите способ ввода параметров треугольника: ")
opt = input()
if int(opt) == 1:
	print("Введите длину стороны a: ")
	a = input()
	print("Введите длину стороны b: ")
	b = input()
	print("Введите длину стороны c: ")
	c = input()
	# Вычисление площади треугольника по формуле Герона
	p = ((float(a)+float(b)+float(c))/2)
	S = sqrt(p*(p-float(a))*(p-float(b))*(p-float(c)))
	print("S = ", S)
elif int(opt) != 1 and (int(opt) >= -1000 and int(opt) <= 1000):
	print("Введите координаты вершины A(x;y):")
	A1, A2 = input()
	print("Введите координаты вершины B(x;y):")
	B1, B2 = input()
	print("Введите координаты вершины C(x;y):")
	C1, C2 = input()
	# Вычисление координат векторов сторон треугольника
	AB1 = float(B1) - float(A1)
	AB2 = float(B2) - float(A2)
	BC1 = float(C1) - float(B1)
	BC2 = float(C2) - float(B2)
	CA1 = float(A1) - float(C1)
	CA2 = float(A2) - float(C2)
	# Вычисление длин сторон трегольника по координатам их векторов
	AB = sqrt(AB1**2 + AB2**2)
	BC = sqrt(BC1**2 + BC2**2)
	CA = sqrt(CA1**2 + CA2**2)
	# Вычисление площади треугольника по формуле Герона
	p = (AB + BC + CA)/2
	S = sqrt(p*(p - AB)*(p - BC)*(p - CA))
	print("S = ", S)
elif int(opt) > 1000 or int(opt) < -1000:
	print("Ошибочный ввод")