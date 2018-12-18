#Complexity O(n)
num=13
i=2
while i <= (num/2):
     if  num%i== 0:
         print("Not a Prime number")
     else:
         i=i+1
if (i==(num/2)+1):
  print ("Prime number")
