#include<stdio.h>
#define MAX 5
void push();
void pop();
void display();
int s[5];
int tos=-1;
void main()
{
	int c;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.display\n4.exit\n5.enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:return;
			 default:printf("enter properly");
		}
	}
}
void push()
{
	if(tos==MAX-1)
	{
		printf("\nstack overflow...NO PUSH");
		return;
	}
	tos=tos+1;
	printf("\nEnter data:");
	scanf("%d",&s[tos]);
}
void pop()
{
	if(tos==-1)
	{
		printf("underflow...NO POP");
		return;
	}
printf("\ndelete item=%d",s[tos]);
tos=tos-1;
}
void display()
{
	int i;
	if(tos==-1)
	{
		printf("NO DISPLAY");
		return;
	}
	for(i=tos;i>=0;i--)
	{
		printf("\n%d",s[i]);
	}
}
