#include<stdio.h>
int main()
{
    float x,r1,r2,a,b,c;
    printf("Ente a  b  c  ");
    scanf("%f%f%f",&a,&b,&c);
    x=b*b-(4*a*c);
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    if (x>0){
        printf("\nroots are real and unequal");
        printf("r1=%f \n r2=%f",r1,r2);
    }
    
    else if (x<0)
    {
        printf("\nroots are imaginary");
        //printf("r1=%f \n r2=%f",r1,r2);
    }
    else{
        printf("\nroots are real and equal");
        printf("r1=%f \n r2=%f",r1,r2);
    }
    
    return 0;
}
