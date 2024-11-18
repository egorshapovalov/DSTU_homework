import random

def proverka(x):
    if x.isdigit():
        if int(x)> 0:
            return int(x)
        return proverka(input("Введите целое положительное число!\n"))
    return proverka(input("Введите число!\n"))

M = proverka(input("Введите кол-во строк: "))
N = proverka(input("Введите кол-во столбцов: "))

lst = [[random.randint(-1000,1000) for n in range(N)] for m in range(M)]

print(*lst, sep="\n")
for n in range(N):
    print(n+1, "_"*20)
    for m in list(range(M))[::(1 if 1+n%2 == 1 else -1)]:
        print(lst[m][n])
