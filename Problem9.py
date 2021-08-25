x = 1000
for a in range(x):
    for b in range(a):
        c=x-a-b
        if(a*a+b*b==c*c):
            print(a*b*c)
