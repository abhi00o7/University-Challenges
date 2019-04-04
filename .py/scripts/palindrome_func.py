#this to print the aim of the Program
print('THIS IS TO CHECK THE GIVEN INPUT IS PALINDROME OR NOT')
#JUST TO ADD A BLANCK LINE IN THE PROGRAM
print()
#to take an input string for palindrome
string=input('Write here= ')
#we will define a function here
def palindrome(a):
    lenth=len(a)
    half=length//2
    flag=1
    for i in range(0,length):
        if (a[i]==a[i-1-half]):
            continue
        else:
            flag=0
            break
    if flag==0:
        print(a,'is not a palindrome')
        #break
    else:
        print(a,'is palindrome')
        #continue

#this to take the toatal length of the number
palindrome(string)
