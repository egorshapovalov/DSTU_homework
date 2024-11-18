
def proverka(x):
    if x.isdigit():
        if int(x)> 0:
            return int(x)
        return proverka(input("Введите целое положительное число!\n"))
    return proverka(input("Введите число!\n"))
    
def SUM(x):
    Sum = 0
    for i in x:
        Sum += i
    return Sum
    
M = proverka(input("Введите кол-во строк: "))
N = proverka(input("Введите кол-во столбцов: "))
lst = [[m+n for n in range(N)] for m in range(M)]

print(*lst, sep="\n")
for x in range(0, M):
    print(x, SUM(lst[x]))
