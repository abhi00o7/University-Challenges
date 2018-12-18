def polynimial(a,x,n):
    sum=0
    b=1
    for i in range (0,n+1):
        sum=sum=sum+(a[i]*b)
        b=b*x
        return sum
a=[]
n=int(input("Order= "))
x=int(input("Enter= "))
for i in range (0,n+1):
    c=int(input("Coefficient= "));
    a.append(c)
print("value=",polynimial(a,x,n))
