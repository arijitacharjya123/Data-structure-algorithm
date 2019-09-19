#include<stdio.h>
#define MAX 5
int Q[5];
int R=-1;
int F=-1;
void insert();
void del();
void dis();
void main()
{
int ch;
while(1)
    {
    printf("\n\n\n1.Insertion \n2.Deletion \n3.DISPLAY \n4.EXIT \nENTER YOUR CHOICE=");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1: insert();
                break;
        case 2: del();
                break;
        case 3: dis();
                break;
        case 4: return;
        defult: printf("enter property");

        }
}
}

void insert()
{
    char ans;
    while(1)
    {

    if(R==MAX-1)
    {
        printf("\nOVERFLOW ,NO INSERTION");
        return;
    }
    printf("ENTER DATA= ");
    R=R+1;
    scanf("%d",&Q[R]);
    if(R==0)
    {
        F=R;
    }
    printf("\nDo you want to continue???y/n ");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans!='y')
        return;

    }

}



void del()
{
    char ans;
    while(1)
   {
    if(F==-1&&R==-1)
    {
        printf("UNDERFLOW,NO DELETION");
        return;
    }
    printf("\nDELETED data %d",Q[F]);
    if(F==R)
    {
        F=-1;
        R=-1;
    }
    else
    {
        F=F+1;
    }
printf("\nDo you want to continue???y/n ");
fflush(stdin);
scanf("%c",&ans);
    if(ans!='y')
        return;
    }
}
void dis()
{
    int i;
    if(F==-1&&R==-1)
    {
        printf("UNDERFLOW,NO DISPLAY");
        return;
    }
    printf("\n\nITEMS ARE= \n");
    for(i=F;i<=R;i++)
    {
        printf("  |%d|",Q[i]);
    }

}








