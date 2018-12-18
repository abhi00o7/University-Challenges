#import math
num=int(input("Check For Prime="))
c=0
#p=math.sqrt(num)
p=int(num)
for i in range (2,p-1):
    if(p%i==0):
        c=c+1
if(c==0):
    print("prime")
else:
    print("Not Prime")
