import random
#reading from a file as a string
def file_read_String():
    file=open("demoRead.txt","r")
    text=file.read()
    print(text)
    file.close()
#reading from a file as a Integer
def file_read_Integer():
    file=open("demoReadNum.txt","r")
    num=file.read()
    print(num)
    print(type(num))
    file.close()
#Creating a file with Integers
def file_write_random_number():
    file=open("demoReadNum.txt","w")
    for number in range(10):
        num=random.randint(0,100)
        num=str(num)
        file.write(num+"\n")
    file.close()
#reading numbers from a file and adding them()
def file_read_Integer_add():
    file=open("demoReadNum.txt","r")
    # num=int(file.readline())
    # print(type(num))
    # num_lines = sum(1 for line in file)
    # print("lines= ",num_lines+1)
    # add=0
    # add=int(add)
    f_sum=file.readlines()
    for line in f_sum:
        print(line)
    f_sum=[int(i) for i in f_sum]
    b=sum(f_sum)
    print("sum is=",b)
    """for i in range(11):
        num1=file.readline()
        num1=int(num1)
        print(num1)
        add=add+num1
    print(add)"""
    #Calling in the required functions:
file_write_random_number()#to create a number file randomly
#file_read_Integer()#to display that random file
file_read_Integer_add()
