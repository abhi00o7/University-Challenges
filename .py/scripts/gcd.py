#Program to calculate the GCD
def gcd(x,y):
    if y==0:
        return x
    else:
        return gcd(y,x%y)
print(gcd(2,10))
