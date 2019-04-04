print("Program to check if provided number is prime or not.")
print(" ")
num=int(input("Enter your number"))
if num>1:
    for i in range(2,num):
        if num%i==0:
            print(num,"is not a prime number")
            break
    else:
            print(num,'is a PRIME number')
#else:
#    print('not prime')
