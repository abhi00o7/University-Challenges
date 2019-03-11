//wap to add,subtract,multiply and transpose on matrix

#include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,k;
printf("Enter elements of first matrix (2*2):\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
        printf("Element :[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
}
printf("Enter elements of second matrix (2*2):\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
        printf("Element :[%d][%d]",i,j);
		scanf("%d",&b[i][j]);
	}
}
printf("Press 1 to add two matrices\n");
printf("Press 2 to subtract two matrices\n");
printf("Press 3 to multiply two matrices\n");
printf("Press 4 to transpose a matrix\n");
int choice;
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
	case 1 :
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			c[i][j]=0;
			c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("The sum is:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
			}
		break;
	}
	case 2 :
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			c[i][j]=0;
			c[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("The subtraction result is:\n ");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		break;
	}
	case 3 : {
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;

			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	break;
	}
	case 4 :{
		char t;
		printf("Choose matrix A or B");
		scanf("%c",&t);
		if(t=='a'||t=='A')
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					c[i][j]=a[j][i];
				}
			}
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
		}
		else if(t=='b'||t=='B')
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
				c[i][j]=b[j][i];
				}
			}
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
		}
		break;
	}
}
}