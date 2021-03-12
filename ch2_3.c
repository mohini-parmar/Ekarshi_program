#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0,j=0;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=0;j++)
        {
            printf("*");
            if(i==0 || i==2 || i==4)
            {
                printf("***");
            }
        }
        printf("\n");
    }
    getch();
}
