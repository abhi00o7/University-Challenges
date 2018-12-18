#insertion sort
a=[6,69,5,9,3,5,48,65,2,5,11]
n=11
for i in range (0,n):
    for j in range(i,0,-1):
        if(a[j]<a[j-1]):
            a[j],a[j-1]=a[j-1],a[j]
print(a)
