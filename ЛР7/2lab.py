import random

M = random.randint(0,10)
N = random.randint(0,10)
lst = [[random.randint(-1000,1000) for n in range(N)] for m in range(M)]

for m in range(M):
    print(lst[m])
for n in range(N):
    print(n+1, "_"*20)
    for m in list(range(M))[::(1 if 1+n%2 == 1 else -1)]:
        print(lst[m][n])
