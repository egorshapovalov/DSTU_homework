slovary = "цукенгшщзхъфывапроллджэячсмитьбюЙЦУКЕЕНГШГЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ "
stroka = False
while stroka is False:
    stroka = input("Введите слова\n")
    if False in [bukva in slovary for bukva in stroka]:
        print("Напишите русские слова")
        stroka = False
print(len(stroka.split(" ")))
