m1 = 400/1000
m2 = 100
M = 80/1000
g = 9.8
while m2 <=300:
    print(round((m2/1000-m1)/(m2/1000+m1+M/2)*g, 2), "\t" ,m2)
    m2 += 20