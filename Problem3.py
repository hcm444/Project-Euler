import math #import math library
divisible = [] #dvisiible list for debugging
factors = [] #list for prime factors
i = 2 #first prime
input = 600851475143 #input goes here
while i < input: #less then input
    while input % i == 0: #check even
        input = input / i #divide by 2 until odd
        divisible.append(input) #add inputs
        factors.append(i) #add factors
    i = i + 1 #odd at this point
last_elem = divisible[-1] #steal last value of div list
factors.append(int(last_elem)) #convert to integer and append
print (factors) #final prime factor list
