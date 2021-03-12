#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0,j=0,k=0;
    for(i=0;i<=4;i++)
    {
        for(j=4-i;j>0;j--)
		printf(" ");
        for(k=0;k<i;k++)
        {
            printf("%d",i);
            printf(" ");
        }
        printf("\n");
    }
    getch();
}

