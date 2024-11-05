slovary = "цукенгшщзхъфывапроллджэячсмитьбюЙЦУКЕЕНГШГЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ "
stroka = False
while stroka is False:
    stroka = input("Введите слова\n")
    if False in [bukva in slovary for bukva in stroka]:
        print("Напишите русские слова")
        stroka = False
        
print(stroka)
print("-"*99)

sl = ""
ss=[]

for i in stroka:    
    if i!=" ":
        sl +=i
    else:
        if sl!='':
            ss.append(sl)
        sl = ''
if sl!='':
    ss.append(sl)    

COUNT = 0
for i in ss:
    if i != "":
        COUNT +=1
input(COUNT)
