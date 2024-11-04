N = 0
while N <= 0:
    try:
        N = int(input("Введите целое число больше нуля: "))
    except:
        print("Введите целое число")
while N%3 == 0:
    N = N//3
print(N==1)
