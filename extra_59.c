#include<stdio.h>
#include<conio.h>

void main()
{
    int input,i;
    printf("Enter number to find its divisor : ");
    scanf("%d",&input);

    printf("\nThe divisors are : ");
    for(i=1;i<=input;i++)
    {
        if(input%i==0)
        {
            printf(" %d ",i);
        }
    }
    getch();
}
