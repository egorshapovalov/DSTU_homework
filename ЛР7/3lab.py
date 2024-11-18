import random
time_classes = ["8:30-10:05", "10:15-11:45", "12:00-13:35"]
dct = dict()
for x in range(random.randint(0,10)): #кол-во курсов
    dct[x] = {"Кабинет":f"{random.randint(1,8)}-{random.randint(101,499)}", "Время":time_classes[random.randint(0,2)]}

print(dct)

while True:
    N_classes = input("Введите номер Курса")

    try:
        print(dct[int(N_classes)])
    except:
        print("Вы ввели неправильный/некорректный номер")
