#include <stdio.h>
//multipurpose c program
int checkP(int);
//prime checking function
int checkP(int n)
{
    int j, flag = 1;
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
        else
        {
            flag=1  ;
        }
    }
    return flag;
}
//main function for different values
void main()
{
    int n,sum,prime=1,result;
    printf("Enter the number of elemets in an array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &a[i]);
     }
    
    for(int i=0;i<n;i++)
    {
        if(checkP(i)==1)
        {
            sum=sum+a[i];
        }
        else{
        continue;
        }
    }
    
    //
    for(int i=0;i<n;i++)
    {
        if(checkP(a[i])==1){
            prime=a[i];
            break;
        }
        else{
        continue;
        }
    }
    //result
    result=sum/prime;
    printf("sum=%d /t prime=%d /t result= %d",sum,prime,result);

    //return 0;
}