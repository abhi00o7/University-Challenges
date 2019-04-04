s=0
t=1
for i in range(1,101):
    s=s+(i/(i*t))
    t=t*2
print("summation is",s)
