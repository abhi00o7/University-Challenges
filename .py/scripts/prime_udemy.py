#setting the range
#it is 2 because you know 1 is messed up
for i in range(2,21):
#setting up intializing you did't use i because its already been used
    j=2
#to check for the future prime number
    counter=0
#if j is not less than i it will autometically go to next if as the counterremains 0 it will print prime
    while j<i:
#so for j it checks it ery fucking time if it's divisible by every number in between the number and two
#we did't take intial j as 1 because you know evey number is divisible by 1
#also that means it will increase the counter to a non zero digit and that means NOT prime
        if i%j==0:
#if any number between the number and 2 is divisible then counter will increase and so it won't be a prime number anymore
            counter=1
#This is to increse j to check for divisible number between i and j
            j=j+1
        else:
            j=j+1
    if counter==0:
        print(i,"Prime")
#    else:
#        print(j,"not Prime")
#        counter=0
