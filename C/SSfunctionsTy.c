#include<stdio.h>
#include<conio.h>
main()
{
    //void add(void);
    //add();
    // void add1(int,int);//function declaration | local declaration 
    // int x,y;
    // printf("Enter two nums ");
    // scanf("%d%d",&x,&y);
    // add1(x,y);//actual arguments || call by value
    // int add2(void);
    int add3(int,int);
    int x,y,z;
    printf("Enter two numbers");
    scanf("%d %d",&z,&y);
    x=add3(z,y);
    printf("%d",x);

}
//this is no parameter and no return value
void add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("sum is %d",c=a+b);
}
void add1(int a,int b) //function defenition | formal arguments
{
    int c;
    //printf("Enter two numbers");
    //scanf("%d %d",&a,&b);
    printf("sum is %d",c=a+b);
}
int add2()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    //printf("sum is %d",c=a+b);
    return (a+b);
}
int add3(int a,int b)
{
    return (a+b);
}