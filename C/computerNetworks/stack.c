#include<stdio.h>
#include<process.h>
#include<stdlib.h>
// #include<conio.h>

#define MAX 10

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
	int ch;

	while(1)
	{
		// clrscr();
		printf("\n\t\t     Stack Menu");
		printf("\n\n\t\t1.Push\n\t\t2.Pop\n\t\t3.Display\n\t\t4.Exit");
		printf("\n\n\t\tEnter your choice(1-4):");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);

			default: printf("\n\tWrong Choice!!");
				printf("\n\n\n\t(Press any key to continue)");
				// getch();

		}
	}
}

void push()
{
	int val;

	if(top==MAX-1)
	{
		printf("\n\tStack is full!!");
	}
	else
	{
		printf("\n\tEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
	printf("\n\n\n\t(Press any key to continue)");
	// getch();

}

void pop()
{
	if(top==-1)
	{
		printf("\n\tStack is empty!!");
	}
	else
	{
		printf("\n\tDeleted element is %d",stack[top]);
		top=top-1;
	}
	printf("\n\n\n\t(Press any key to continue)");
	// getch();
}

void display()
{
	int i;

	if(top==-1)
	{
		printf("\n\tStack is empty!!");
	}
	else
	{
		printf("\n\tStack is...\n");
		for(i=top;i>=0;--i)
			printf("\t%d\n",stack[i]);
	}
	printf("\n\n\n\t(Press any key to continue)");
	// getch();
}