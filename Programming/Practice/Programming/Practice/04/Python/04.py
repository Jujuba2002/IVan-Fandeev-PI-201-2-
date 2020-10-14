print("Вариант программы с помощью дополнительной переменной:")
print("Введите число a:")
a = input()
print("Введите число b:")
b = input()
c = 0
float(a)
float(b)
float(c)
print("a =",a,"b =",b)
c = a
a = b
b = c
print("a и b поменялись значениями:")
print("a =",a,"b =",b)
print("")
print("")
print("")
print("Вариант программы без помощи дополнительной переменной:")
print("Введите число a:")
a = input()
print("Введите число b:")
b = input()
float(a)
float(b)
print("a =",a,"b =",b)
a,b = b,a
print("После выполнения программы их значения равны:")
print("a =",a,"b =",b)