import math
import random
x1=random.randint(0,100)
x2=random.randint(0,100)
x3=random.randint(0,100)
#x4=random.randint(0,100)
y1=random.randint(0,100)
y2=random.randint(0,100)
y3=random.randint(0,100)
#y4=random.randint(0,100)
AB=math.sqrt(((x1-x2)**2)+((y1-y2)**2))
BC=math.sqrt(((x2-x3)**2)+((y2-y3)**2))
AC=math.sqrt(((x3-x1)**2)+((y3-y1)**2))
print("Point A Co-Ordinates are")
print("(x1,y1) =(",x1,y1,")")
print()
#print("y1= ",y1)
print("Point B Co-Ordinates are")
print("(x2,y2) =(",x2,y2,")")
print()
#print("y2= ",y2)
print("Point C Co-Ordinates are")
print("(x3,y3) =(",x3,y3,")")
print()
#print("x3= ",x3)
print("Sides of the triangle are:")
print()
print("AB= ",AB)
print()
print("BC= ",BC)
print()
print("AC= ",AC)
print()
#checking if the triangle is Right Angled or not
area=x1(y2-y3)+x2(y3-y1)+x3(y1-y2)
#if the area is zero(0) then the given points does not form a triangle
print("length of Coordinates")
#making AC the biggest side
if (AB>AC):
    AB,AC=AC,AB
elif(BC>AC):
    BC,AC=AC,BC
else:
    pass
#pythagorus theorem
a=math.sqrt((AB**2)+(BC**2))
b=(AC**2)
#putting the area in "if"
if(area!=0):
    print("The Generated Co-ordinates form a Triangle")
    if(a==b):
        print("the triangle is RIGHT angled")
    else:
        print("the triangle is NOT RIGHT angled")
else:
    print("Generated points are of a single Straight Line")
