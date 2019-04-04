print("FIBONACCI SERIES CALCULATOR")
n=int(input("Enter Number"))
a=0
b=1
#print("0")
#print("1")
for i in range (1,n+1):
    c=a+b
    a=b
    b=c
    print (b)
