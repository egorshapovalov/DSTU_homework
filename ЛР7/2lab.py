import random

M = random.randint(0,10)
N = random.randint(0,10)
lst = [[random.randint(-1000,1000) for n in range(N)] for m in range(M)]

for m in range(M):
    print(lst[m])

for x in range(M):
    print(*lst[x][::(1 if 1+x%2 == 1 else -1)])
