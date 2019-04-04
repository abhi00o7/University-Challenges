#this program calculates the factorial nPr and increse
#first we take input for n and r for our future calculations
f=int(input("Enter the value of n= "))
r=int(input("Enter the value of r= "))
#here we have defined a simple and sweed factorial function
def factorial(f):
#so after giving it a name and going further to set the parameter we set n=1
#n=1 why ?? because we have to multiply from 1 to that number so we initialize n
    n=1
#start the good old for loop and set the range from 2 to that number
    for i in range(2,f+1):
#then all you have to is to just multiply by that number
#this will multiply n by i which is what we set for the range
#i will go upto the number for which you want to calculate the factorial of
#n on the other hand will keep on changeing by multipling itself over and over by i
        n=n*i
#print n
    return n
#print factorial
print("factorial of ",f," is ",factorial(f))
#print nPr with the formula
nPr=factorial(f)/factorial(f-r)
#same goes for the nCr
nCr=factorial(f)/factorial(f-r)*factorial(r)
print(nPr," is nPr")
print(nCr," is nCr")
