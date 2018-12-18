import math
num=input("enter the number ")
num=int(num)
i=2
k=0
p=math.sqrt(num)
p=int(p)
for i in range(i,p+1):
    if(num%i==0):
        k=k+1
        break
    i=i+1
if(k==1):
    print("not prime ")
else:
    print("prime")
print("program over \n press any key to leave the page")
