
def Power2(A:float, N:int):
    if N == 0:
        return 1
    elif N > 0:
        return A**N
    elif N < 0:
        return 1/(A**abs(N))

def check_value(func, value):
    while True:
        try:
            return func(value)
        except:
            value = input("Вы ввели неправильное значение: ")
        

while True:
    A = check_value(float, input("Введите A(Вещественное число):"))
    B = check_value(int, input("Введите B(Целое число):"))
    print(Power2(A, B))
