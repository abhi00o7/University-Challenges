x=int(input("number here= "))
g1=x/2
g2=0
while (g1*g1-x)>0.5: #or (x-(g1*g1))<0.5:
    g2=(g1+(x/g1))/2
    g1=g2
print(g1)
