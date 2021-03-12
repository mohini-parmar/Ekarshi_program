#include<stdio.h>
#include<conio.h>

void main()
{
    int i=0,sum=0;

    for(i=1;i<=10;i++)
    {
        printf("\nThe square of %d is %d.",i,(i*i));
        sum+=(i*i);
    }
    printf("\n\nSum of all squares are : %d" ,sum);
    getch();
}
