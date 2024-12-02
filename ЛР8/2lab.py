
def TimeToHMS(T):
    H = T//3600
    M = (T-H*3600)//60
    S = (T-(H*3600+M*60))
    return H, M, S

def check_value(func, value):
    while True:
        try:
            return func(value)
        except:
            value = input("Вы ввели неправильное значение: ")
        

while True:
    print(TimeToHMS(check_value(int,input("Введите кол-во секунд: "))))
