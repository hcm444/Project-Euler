sum1,sum2,sum3,i = 0,0,0,0
for i in range (0,1000):
    if i % 3 == 0: 
        sum1 += i
    if i % 5 == 0: 
        sum2 += i
    if i % 15 == 0: 
        sum3 += i
print (sum1+sum2-sum3)
