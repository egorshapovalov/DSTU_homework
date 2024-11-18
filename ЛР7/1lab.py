
def proverka(x):
    if x.isdigit():
        return int(x)
    proverka(input("Введите число!\n"))
    
def SUM(x):
    Sum = 0
    for i in x:
        Sum += i
    return Sum
    
M = proverka(input("Введите кол-во строк: "))
N = proverka(input("Введите кол-во столбцов: "))
lst = [[m+n for n in range(N)] for m in range(M)]

for x in range(0, M):
    print(x, SUM(lst[x]))
