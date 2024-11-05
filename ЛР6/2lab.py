slovary = "цукенгшщзхъфывапроллджэячсмитьбюЙЦУКЕЕНГШГЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ "
stroka = False
while stroka is False:
    stroka = input("Введите слова\n")
    if False in [bukva in slovary for bukva in stroka]:
        print("Напишите русские слова")
        stroka = False
print(stroka)
print("-"*99)

def COUNT(a, b):
    COUNT = 0
    for i in b:
        if i == a:
            COUNT +=1
    return COUNT

def REPLACE(a, b, c):
    REPLACE = ""
    for i in a:
        if b == i:
            REPLACE += c
        else:
            REPLACE += i
    return REPLACE

slova = stroka.split(" ")

slova_dolya_aib_max = list()
for slovo_no_modific in slova:
    slovo = slovo_no_modific.lower()
    dolya_a = COUNT("а",slovo)
    dolya_b = COUNT("б",slovo)
    slovo = REPLACE(REPLACE(slovo,"а",""),"б","")
    dolya_bykv = [COUNT(bykva, slovo) for bykva in set(slovo)]
    #print(dolya_a, dolya_b, dolya_bykv, slovo_no_modific, slovo)
    if False in [dolya_a >= dolya_bykvi for dolya_bykvi in dolya_bykv] or False in [dolya_b >= dolya_bykvi for dolya_bykvi in dolya_bykv]:
            continue
    slova_dolya_aib_max.append(slovo_no_modific)
print(slova_dolya_aib_max)
input()
        
