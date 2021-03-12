#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0;

    printf("Even Numbers Between 1 to 25  :\n\n");
    for(i=1;i<=25;i++)
    {
        if(i%2==0)
        {
            printf(" %d ",i);
        }
    }
    getch();
}
