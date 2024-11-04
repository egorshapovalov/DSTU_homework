slovary = "цукенгшщзхъфывапроллджэячсмитьбюЙЦУКЕЕНГШГЩЗХЪФЫВАПРОЛДЖЭЯЧСМИТЬБЮ "
stroka = False
while stroka is False:
    stroka = input("Введите слова\n")
    if False in [bukva in slovary for bukva in stroka]:
        print("Напишите русские слова")
        stroka = False
slova = stroka.split(" ")

slova_dolya_aib_max = list()
for slovo_no_modific in slova:
    slovo = slovo_no_modific.lower()
    dolya_a = slovo.count("а")
    dolya_b = slovo.count("б")
    slovo = slovo.replace("а","").replace("б","")
    dolya_bykv = [slovo.count(bykva) for bykva in set(slovo)]
    #print(dolya_a, dolya_b, dolya_bykv, slovo_no_modific, slovo)
    if False in [dolya_a >= dolya_bykvi for dolya_bykvi in dolya_bykv] or False in [dolya_b >= dolya_bykvi for dolya_bykvi in dolya_bykv]:
            continue
    slova_dolya_aib_max.append(slovo_no_modific)
print(slova_dolya_aib_max)
        
