import random
lst = [random.randint(-1000,1000) for _ in range(int(input("Введите кол-во элементов в списке: ")))]
print(lst)
SUM = 0
COUNT = 0
for x in lst:
    if x > 0:
        COUNT += 1
lst.reverse()
#lst = lst[::-1]
#nyl_posledniy = lst.index(0) if 0 in lst else -1
#for x in lst[:nyl_posledniy]:
#    SUM += x
for x in lst:
    if x == 0:
        break
    SUM += x

print(f"{SUM=}")
print(f"{COUNT=}")
input()
