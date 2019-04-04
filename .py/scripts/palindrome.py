#this is a input function to get input from user
l=input('String= ')
#len(l) gives the length of the input string and also saves that value to the n variable
n=len(l)
flag=1
for i in range (0,n//2):
    if(l[i]==l[n-i-1]):
        continue
    else:
        flag=0
        break
if flag==0:
    print("not a palindrome")
else:
    print("it is a palindrome")
