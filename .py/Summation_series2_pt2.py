s=0
#t=1
for i in range(1,101):
    s=s+(i/(2**i))
    #t=t*2
print("summation is",s)
