sum,a,b = 0,0,1
for i in range(0, 100):
        a,b = b, a + b
        if(a < 4000000):
            if (a%2) == 0:
                sum += a
                print (sum)
