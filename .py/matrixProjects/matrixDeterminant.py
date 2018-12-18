import numpy
import random
print('*******************************')
print('**********Determinant**********')
print('*******************************')
#for defining a matrix
m=int(input("Matrix form for Determinant is = "))#3#int(random.randint(0,5))
n=m#3#int(random.randint(0,5))
a=[]
for row in range(0,m):
    a.append([])
    for column in range(0,n):
#used a random function to Create a random matrix can be changed for a custom matrix
        c=int(random.randint(-500,1000))#int(input("Enter elements row-wise= "))
        a[row].append(c)
for matrix in  range(0,m):
    print(a[matrix])
print('/n')
# to find the determinant of the matrix FOR A 3X3 MATRIX
print("Determinant is= ",abs(numpy.linalg.det(a)))
n=2**19347-1
print ("Total number of digits : ",len(str(abs(n))))
#print(help(random))
'''
if (m==4):
    D=
el
if (m==3):
    D=((a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])))-(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]))))
    print('\n')
    print("Determinant of the given Matrix is=",abs(D))
# to find the determinant of the matrix FOR A 2X2 MATRIX
elif(m==2):
    D=((a[0][0]*a[1][1])-(a[1][0]*a[0][1]))
    print('\n')
    print("Determinant of the given Matrix is=",abs(D))
# to find the determinant of the matrix FOR A 1x1 MATRIX
elif(m==1):
    D=(a[0][0])
    print('\n')
    print("Determinant of the given Matrix is=",abs(D))
# to find the determinant of the matrix FOR A any other MATRIX
else:
    print('\n')
    print("Determinant nahi Niklega")'''
