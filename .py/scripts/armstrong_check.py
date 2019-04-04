#to check for armstrong number from 100-1000
print("TO CHECK FOR ARMSTRONG")
#taking input from user
num=int(input("Enter number here== "))
#initializing Sum & n
su=0
n=num
#using while loop to reverse and square the number
while n>0:
    digit=n%10
    su=su+digit**3
    n=n//10
#using if to print the Outputs
if num==su:
    print(num," IS ARMSTROMG")
else:
    print(num,"IS NOT ARMSTRONG")
