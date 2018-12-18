#this is to create a fibanacci FUNCTION
def fibo(n):
    if n==1:
        return 1
    elif n==2:
        return 1
    elif n>2:
        return fibo(n-1)+fibo(n-2)
'''for n in range(0,11):
    print(fibo(n))'''
print(fibo(3))
