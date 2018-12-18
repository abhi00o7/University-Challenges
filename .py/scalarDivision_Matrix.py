import random
m=3#int(random.randint(1,9))#int(input("no of rows of the matrix= "))
n=3#int(random.randint(1,8))#int(input("no of column of the matrix= "))
a=[]
for row in range(0,m):
    a.append([])
    for column in range(0,n):
        c=int(random.randint(1,10))#int(input("no of Elements of the matrix(row-wise)= "))
        a[row].append(c)
        #print('inside loop',a)
#print("outside loop",a)
print()
print("matrix A\n ")
for matrix in range(0,m):
    print (a[matrix])
print()
divisor=int(input("Enter number to divide the matrix by___"))
#for second matrix
'''
b=[]
for row in range(0,m):
    b.append([])
    for column in range(0,n):
        c=int(random.randint(0,100))#int(input("no of Elements of the matrix(row-wise)= "))
        b[row].append(c)
        #print('inside loop',a)
#print("outside loop",b)
print()
print("matrix B.\n")
for matrix in range(0,m):
    print (b[matrix])
    '''
#Division of matrix
#creating a new matrix C to fill in the Division values
c=[]
for row in range(0,m):
    c.append([])
    for column in range(0,n):
        c[row].append(0)
print()
'''print('matrix C.\n')
for matrix in range(0,m):
    print(c[matrix])
'''
# filling in the Division
for row in range (0,m):
    for column in range(0,n):
        c[row][column]=c[row][column]+(a[row][column]/divisor)
print()
print('Division of Matrix A/B\n')
for matrix in range(0,m):
    print(c[matrix])
