N = 0
while N <= 0:
    try:
        N = int(input("Введите целое число больше нуля: "))
        if N <= 0:
            print("Введите целое число БОЛЬШЕ нуля!!!")
    except:
        print("Вводите целое число")
while N != 0 and N%3 == 0:
    N = N//3
print(N==1)
