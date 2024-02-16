#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int top=-1;
void push(int stack[maxsize],int element)
{
	top++;
	stack[top]=element;
}
int pop (int stack[maxsize])
{
	int temp;
	temp=stack[top];
	top--;
	return (temp);
}
int peep(int stack[maxsize])
{
	return(stack[top]);
}
int isfull(int stack [maxsize])
{
	if (top==maxsize)
	return 1;
	else
	return 0;
}
int isempty(int stack[maxsize])
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int main()
{
	
	int stack[ maxsize],element,choice;
	void push(int[maxsize],int);
	int pop(int[maxsize]);
	int peep(int[maxsize]);
	int isfull(int[maxsize]);
	int isempty(int[maxsize]);
	do
	{
		printf("stack operations\n");
		printf("----------------------\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peep\n");
		printf("4. exit\n");
		printf("enter your choice(1 to 4):");
        scanf("%d",&choice);
        switch(choice)
        {
        	case 1:
        		if(!isfull(stack))
        		{
        			printf("enter the element to push:");
        			scanf("%d",&element);
        			push(stack,element);
        		}
        		else
        		printf("stack overflows");
        		break;
        		
        		case 2:
        		if(! isempty(stack))
        		printf("the poped element is %d\n",pop(stack));
        		else
        		printf("stack underflows");
        		break;
        		
        		case 3:
        		if(! isempty(stack))
        		printf("the peeped element is %d\ns",peep(stack));
        		else
        		printf("stack underflows");
        		break;
        		case 4:
        		exit(0);
        		default:
        			printf("wrongg input! enter 1 to 4 only");
       	}//end switch
	}while (1);
}//end main()