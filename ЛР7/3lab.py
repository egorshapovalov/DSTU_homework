import random
time_classes = ["8:30-10:05", "10:15-11:45", "12:00-13:35"]
dct_classroom = dict()
dct_time_class = dict()
for x in range(random.randint(1,10)): #кол-во курсов
    dct_classroom[x] = {"Кабинет":f"{random.randint(1,8)}-{random.randint(101,499)}"}
    dct_time_class[x] = {"Время":time_classes[random.randint(0,2)]}

print(dct_classroom, sep="\n")
print(dct_time_class, sep="\n")
print("_"*100)
print(*dct_time_class)

while True:
    N_classes = input("Введите номер Курса: ")

    try:
        print(dct_classroom[int(N_classes)], dct_time_class[int(N_classes)])
    except:
        print("Вы ввели неправильный/некорректный номер")
