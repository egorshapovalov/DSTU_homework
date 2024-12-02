def N_str_reverse(N):
    
    N = str(N)
    if len(N) == 1:
        return N
    return N[-1], *N_str_reverse(N[:-1])

def check_value(func, value):
    while True:
        try:
            return func(value)
        except:
            value = input("Вы ввели неправильное значение: ")
        

while True:
    print(*N_str_reverse(check_value(int,input("Введите Число: "))), sep=" ")
