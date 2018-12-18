from random import randint
file=open("RandomNumber.txt","w")
for x in range (50):
    x=randint(500,1000)
    x=str(x)
    file.write(x+"\n")
file.close()
