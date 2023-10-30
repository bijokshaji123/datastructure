#include<stdio.h>
int stack[100],choice,n,i,top,x,s,flag=0;
void push();
void pop();
void display();
void search();
int main()
{
top=-1;
printf("\n enter the size of array[max=[100]\n\t:");
scanf("%d",&n);
printf("\n\t stack operations using array");
printf("\n\t-------------------------");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.SEARCH\n\t  5.EXIT\n\t");
do
{
	printf("\n\tEnter the choice\n\t");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			search();
			break;
		}
		case 5:
		{
			printf("\n\t EXIT POINT");
			break;
		}

		default:
		{
			printf("\n\t please enter a valid choice(1/2/3/4)");
		}
	}
}
while(choice!=5);
return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\tSTACK is over flow");
	}
	else
	{
	printf(" Enter a value to be pushed:");
	scanf("%d",&x);
	top++;
	stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
	printf("\n\t stack is underflow");
}
else
{
	printf("\n\t The popped element is %d",stack[top]);
	top--;
   }
}
void display()
{
	if(top>=0)
	{
	printf("\n The element is STACK \n");
	for(i=0; i>=0; i--)
	   printf("\n%d",stack[i]);
	printf("\n press next choice");
}
else
{
	printf("\n The stack is empty");
}
}
void search()
{
printf("\n\t Enter the element to be searched\n\t");
scanf("%d",&s);
for(i=top;i>=0;i--)
if(stack[i]==s)
{
flag=1;
break;
}
else
{
flag=0;
}
if(flag==1)
{
printf("searched element found");
}
else
{
printf("searched element not found");
}
}

