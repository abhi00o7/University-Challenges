import math
import random
print("Pseudo Random Generation and check for a triangle\n")
x1=int(random.randint(0,100))-int(random.randint(0,100))
x2=int(random.randint(0,100))-int(random.randint(0,100))
x3=int(random.randint(0,100))-int(random.randint(0,100))
#x4=random.randint(0,100)
y1=int(random.randint(-555,100))
y2=int(random.randint(0,100))-50
y3=int(random.randint(0,100))-10
#y4=random.randint(0,100)
AB=math.sqrt(((x2-x1)**2)+((y2-y1)**2))
BC=math.sqrt(((x3-x2)**2)+((y3-y2)**2))
AC=math.sqrt(((x1-x3)**2)+((y1-y3)**2))
print("Point A Co-Ordinates are ")
print("(x1,y1) = (",x1,y1,")\n")
#print()
#print("y1= ",y1)
print("Point B Co-Ordinates are")
print("(x2,y2) = (",x2,y2,")\n")
#print()
#print("y2= ",y2)
print("Point C Co-Ordinates are")
print("(x3,y3) = (",x3,y3,")\n")
#print()
print("length of Coordinates")
#print("x3= ",x3)
print("Sides of the triangle are:\n")
#print()
print("AB=",'% .2f'%AB,"\n")
#print()
print("BC=",'% .2f'%BC,"\n")
#print()
print("AC=",'% .2f'%AC,"\n")
#print()
#checking if the triangle is Right Angled or not
area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))
area=abs(area)
#if the area is zero(0) then the given points does not form a triangle
#making AC the biggest side
if (AB>AC):
    AB,AC=AC,AB
elif(BC>AC):
    BC,AC=AC,BC
else:
    pass
#pythagorus theorem
a=math.sqrt((AB**2)+(BC**2))
b=AC
#putting the area in "if"
if(area!=0):
    print("The Generated Co-ordinates form a Triangle")
    if(a==b):
        print("the triangle is RIGHT angled")
    else:
        print("the triangle is NOT RIGHT angled")
else:
    print("Generated points are of a single Straight Line")
