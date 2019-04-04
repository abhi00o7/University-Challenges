f=int(input("Enter the value of n= "))
r=int(input("Enter the value of r= "))
def factorial(f):
    n=1
    for i in range(2,f+1):
        n=n*i
    return n
print("factorial of ",f," is ",factorial(f))
nPr=factorial(f)/factorial(f-r)
nCr=factorial(f)/factorial(f-r)*factorial(r)
print(nPr," is nPr")
print(nCr," is nCr")
