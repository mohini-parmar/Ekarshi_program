#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    float sum=0;

    for(i=1;i<=50;i++)
    {
        sum+=(1/i);
    }

    printf("The sum is : %.4f",sum);
    getch();
}

