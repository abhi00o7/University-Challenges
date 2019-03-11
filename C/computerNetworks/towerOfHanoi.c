
/*
    Abhishek kumar
    making this program for Data Structures lab ;
    githubID abhi00o7
*/
#include<stdio.h>
//creating a program for finding the steps to solve the tower of hanoi
     int i=1; 
void hanoi(int count,char source,char destination,char spare)
    {
        // int i=1;
        if(count==1)
            {
                printf("\nSTEP:%d Move the top disk from %c pole to %c pole",i,source,destination);
                i++;

            }
        else
            {
                hanoi(count-1,source,spare,destination);//x
                hanoi(1,source,destination,spare);//y
                hanoi(count-1,spare,destination,source);//z

            }
    }
//creating the main function
void main()
    {
        int number;
        printf("\nprogram to print the solution for steps to solve the tower of hanoi");
        printf("\nnumber of disks on source pole: ");
        scanf("%d",&number);
        //printing the solution with the function created above
        printf("\n\nsteps to move the disks from source to destination\n");
        hanoi(number,'A','B','C');
    }
 