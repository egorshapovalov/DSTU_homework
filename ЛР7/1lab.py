def CHECK(x):
    if x.isdigit():
        if int(x)> 0:
            return int(x)
        return CHECK(input("Введите целое положительное число!\n"))
    return CHECK(input("Введите целое положительное число!\n"))
    
def SUM(x):
    Sum = 0
    for i in x:
        Sum += i
    return Sum
    
M = CHECK(input("Введите кол-во строк: "))
N = CHECK(input("Введите кол-во столбцов: "))
lst = [[m+n for n in range(N)] for m in range(M)]

print(*lst, sep="\n")
for x in range(0, M):
    print(x, SUM(lst[x]))
