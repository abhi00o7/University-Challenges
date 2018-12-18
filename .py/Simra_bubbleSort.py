def bubble_sort(a):
    n=len(a)
    for i in range(0,n+1):
        for j in range(0,n-i-1):
            if (a[j]>a[j+1]):
                t=a[j+1]
                a[j+1]=a[j]
                a[j]=t
            else:
                continue
    return a
a=[2,1,5,3,4,6,8,7,9,0]
print(bubble_sort(a))
#print(a)
