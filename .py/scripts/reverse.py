#calculating the reverse of a number
num=int(input("Enter Your Number"))
rev=0
while num>0:
    rev=(num%10)+(rev*10)
    num=num//10
print("reversed number is ",rev)
