#include<stdio.h>
#include<conio.h>

void main()
{
    int num[6],i,pos=0;

    for(i=0;i<6;i++)
    {
        printf("\nEnter number : ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<6;i++)
    {
        if(i>=2 && i<6)
        {
            pos = 3*num[i];
            printf("\nThe number %d is at position %d",pos,num[i]);
        }
        else
        {
            printf("\nThe number %d is at position %d",i,num[i]);
        }
    }
    getch();
}
