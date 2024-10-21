A = int()
B = int()
while A <=0 or B <=0:
    try:
        A = int(input("Введите положительное целое число A: "))
        B = int(input("Введите положительное целое число B: "))
    except:
        print("Вводите ЧИСЛО!!!")
print(A%B)
