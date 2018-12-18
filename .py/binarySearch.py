print("binary Search Program")
print()
def binarySearch(a,low,high,x):
    if(low<=high):
        mid=(low+high)//2
        if(a[mid]==x):
            return mid+1
        elif(a[mid]<x):
            return binarySearch(a,mid+1,high,x)
        else:
            return binarySearch(a,low,mid-1,x)
    else:
        return 'NOT FOUND'
y=[2,5,6,9,11,52,55,69,85,445,1000]
high=len(y)
print(binarySearch(y,0,high,8))
