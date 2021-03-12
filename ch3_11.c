#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0;

    printf("Number which are divided by 7 between 1 to 50 : \n");
    for(i=1;i<=50;i++)
    {
        if(i%7==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
