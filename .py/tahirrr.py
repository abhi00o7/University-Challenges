print("Program to check if provided number is prime or not.")
print(" ")
num=int(input("Enter your number"))
f=0
for i in range(2,num):
    if num%i==0:
        f=f+1
        break
if(f==0):
    print(num,'is a PRIME number')
else:
    print(num,"is not a prime number")
