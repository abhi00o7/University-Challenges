#take input in "d"
d=int(input("n= "))
#create an empty array
c=[]
#staet the while loop
while d>0:
#crate a new variable to save the digits of the decimal
    b=d%2
    c=[b]+c
    d=d//2
print("bin = ",c)
