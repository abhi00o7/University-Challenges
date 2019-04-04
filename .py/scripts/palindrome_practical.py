x=input("string here= ")
n=len(x)
l=n//2
flag=1
for i in range(0,l):
    if (x[i]==x[n-i-1]):
        continue
    else:
        flag=0
        break
if(flag==0):
    print(x,'is NOT PALINDROME')
else:
    print(x,'is PALINDROME')
