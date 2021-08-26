import math
divisible = []
factors = []
i = 2
input = 600851475143
while i < input:
    while input % i == 0:
        input = input / i
        divisible.append(input)
        factors.append(i)
    i = i + 1
last_elem = divisible[-1]
factors.append(int(last_elem))
print (factors)
