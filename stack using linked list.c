#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *link;
}*t,*p,*tos=NULL;								// struct node *t,*p,*tos;

void main()
{
	int ch;
	while(1)
	{
		printf("**************\n1.push\n2.pop\n3.display\n4.exit\n5.enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: return;
			default: printf("\nEnter properly!!!!!!");
		}
	}
}
void push()
{
	t=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data: ");
	scanf("%d",&t->data);
	if(tos==NULL)
		{
		tos=t;
		t->link=NULL;
		return;
		}
	  t->link=tos;
	  tos=t;
}
void pop()
{
		if(tos==NULL)
	{
		printf("\n\n!!!NOT POSSIBLE\n\n");
		return;
	}
	p=tos;
	if(p->link==NULL)
	{
		t=tos;
		tos=NULL;
		printf("deleted item=%d",t->data);
		free(t);
		return;
	}	
	if(p->link!=NULL)
	{
		t=p->link;
		printf("\nDeleted item=%d",p->data);
		p=NULL;
		free(p);
		tos=t;
	}
	return;
}
void display()
{
		if(tos==NULL)
	{
		printf("\nNo Display...............");
		return;
	}
	printf("\nData items are:\n");
	printf("tos->");
	p=tos;
	while(p!=NULL)
	{
		printf("|%d|->",p->data);
		p=p->link;
	}
	printf("NULL\n");
	return;
	
}
