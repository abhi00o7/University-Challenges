#area of a triangle using Heron's formula
#import math to use square root function
import math
#take input of all sides
a=int(input("side 'a'= \n"))
b=int(input("side 'b'= \n"))
c=int(input("side 'c'= \n"))
#use heron's formula to find half parameter
s=(a+b+c)/2
#use heron's formula and calculate the area
area=math.sqrt(s*(s-a)*(s-b)*(s-c))
#print your values
print("area of the triangle with sides",a,"",b,"",c,"","is",area,"unit square")
