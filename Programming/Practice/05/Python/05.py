xt = 0
g = 9.8
float(g)
a = g
print("Введите значение x0,v0,t(по очереди):")
x0, v0, t = input()
xt = float(x0) + float(v0)*float(t) - float(a)*float(t)*float(t)/2
print("Пройденное расстояние равно:",xt)
print("С точки зрения математики и программирование на Python нет никакой разницы между a*t*t/2 и 1/2*a*t*t.")