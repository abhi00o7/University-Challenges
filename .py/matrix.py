#for first Matrix
#take inout for no of rows and column in your Matrix
m = int(input("Enter the number of rows of FIRST Matrix= "))
#print()
n = int(input("Enter the number of column of FIRST Matrix= "))
#print()
#deciding the no of rows and column we can put that in a list
#for that we created an empty list
a = []
#now we initiate for loop for the input in a list
for i in range(0, m):
    a.append([])
    for j in range(0, n):
        c = int(input("Enter the Elements (row-wise) = "))
        #print()
        a[i].append(c)
#print()
#        for s in range(0,j):
print('Matrix A is:')
#print()
#            print(a)
for s in range(0, m):
        print(a[s])
#print()
#print()
#print()
#for second matrix
p = int(input("Enter the number of rows of SECOND Matrix= "))
#print()
q = int(input("Enter the number of column of SECOND Matrix= "))
#print()
b = []
for i in range(0, p):
    b.append([])
    for j in range(0, q):
        c=int(input("Enter the Elements(row-wise)= "))
        #print()
        b[i].append(c)
#print()
print('Matrix B is :')
#print()
for w in range(0, p):
        print(b[w])
#for matrix multiplication
if n == p:
    c = []
    for i in range(0, m):
        c.append([])
        for j in range(0, q):
            c[i].append(0)
    #print()
    #print()
    #print()
    print('The RESULT of the provided matrices is: ')
    #print()
    #print()
    ##print()
    #for multiplication the FINAL code
    for k in range(0, n):
        for i in range(0, m):
            for j in range(0, q):
                c[i][j] = c[i][j]+a[i][k]*b[k][j]
    for w in range(0, p):
        print(c[w])
#for the condition where p!=n.
else:
    #print()
    print("Matrix multiplication is not possible")
    #print()
    print("Invalid Matrices")
    print("Please try again with different Matrices")
