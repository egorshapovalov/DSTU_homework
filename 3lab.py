m1 = 400
m2 = 100
M = 80
g = 9.8
while m2 <=300:
    print(round((m2-m1)/(m2+m1+M/2)*g, 2), "\t" ,m2)
    m2 += 20
