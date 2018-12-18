'''m=int(input("no of rows of the matrix= "))
n=int(input("no of column of the matrix= "))
a=[]
for row in range(0,m):
    a.append([])
    for column in range(0,n):
        c=int(input("no of Elements of the matrix(row-wise)= "))
        a[row].append(c)
        print('inside loop',a)
print("outside loop",a)
print()
print("matrix\n")
for matrix in range(0,m):
    print (a[matrix])
'''
import random
m=int(random.randint(1,5))#int(input("no of rows of the matrix= "))
n=int(random.randint(1,5))#int(input("no of column of the matrix= "))
a=[]
for row in range(0,m):
    a.append([])
    for column in range(0,n):
        c=int(random.randint(0,100))#int(input("no of Elements of the matrix(row-wise)= "))
        a[row].append(c)
        print('inside loop',a)
print("outside loop",a)
print()
print("matrix\n")
for matrix in range(0,m):
    print (a[matrix])
# print('m[0]= ',len(a[1]))
# print('m[]',len(a))
'''listC=[i for() in a]
print(listC)
'''
print()
transpose=[]
for i in range(len(a[0])):
    c=[]
    for j in range(len(a)):
        t=a[j][i]
        c.append(t)
    transpose.append(c)
print('transpose\n')
for t in range(0,len(a[0])):
    print(transpose[t])
