n=int(input('dec= '))
lis=[]
while n>0:
    digit=n%10
    lis=lis+[digit]
    n=n//10
print(sum(lis))
