print("Введите s, l1, r1, l2, r2: ")
s, l1, r1, l2, r2 = input().split()
# Если s меньше суммы нижних пределов или больше суммы верхних пределов диапазонов s1 и s1, то искомые x1 и x2 найти невозможно!
if int(s) < int(l1) + int(l2) or int(s) > int(r1) + int(r2):
    print(-1)
else:

	# Если сумму нижнего предела s1 и верхнего предела s2 равно s, то l1 и r2 и есть искомые x1 и x2
    if int(l1) + int(r2) == int(s):
        print(l1, r2)


    # Я не рассматриваю х1 и х2, которые можно получить из l2 и r1, потому что необходимо вывести х1 и х2, в которых x1 минимальное из всех возможных


    # Если сумма нижнего предела s1 и верхнего предела s2 меньше s, то x2 - должно быть максимальным(r2), а x1 = l1 + s - (l1 + r2)
    elif int(l1) + int(r2) < int(s):
        x1 = int(l1) + (int(s) - (int(l1) + int(r2)))
        print(x1, r2)


    # Если сумма нижнего предела s1 и верхнего предела s2 больше s, то беру минимальное х1(l1), а x2 = r2 - (l1 + r2 - s)
    	x2 = int(r2) - ((int(l1) + int(r2)) - int(s))
    	print(l1, x2)