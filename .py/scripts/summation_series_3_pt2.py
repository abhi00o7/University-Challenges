n=int(input("n= "))
s=0
t=1
for i in range(0,n+1):
    s=s+t
    t=t*(-3)
print(s)
