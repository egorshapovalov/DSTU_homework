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
lst_2 = [[0]*N for m in range(M)]
for n in range(N):
    m0 = list(range(M))
    m1 = list(range((0 if 1+n%2 == 1 else M-1),(M if 1+n%2 == 1 else -1),(1 if 1+n%2 == 1 else -1)))
    
    for m in [(m0[i], m1[i])  for i in range(M)]:
        lst_2[m[0]][n] = lst[m[1]][n]
print("-"*50)
print(*lst_2, sep="\n")
