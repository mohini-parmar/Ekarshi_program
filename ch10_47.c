#include<stdio.h>
#include<conio.h>

void main()
{
    int num[6],i,tmp=0;

    for(i=0;i<6;i++)
    {
        printf("\nEnter number : ");
        scanf("%d",&num[i]);
    }

    tmp=num[0];
    num[0]=num[5];
    num[5]=tmp;

    for(i=0;i<6;i++)
    {
        printf("\nNumber : %d",num[i]);
    }
    getch();
}
