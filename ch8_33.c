#include<stdio.h>
#include<conio.h>

void main()
{
    int num[9];
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter Number %d : ",i);
        scanf("%d",&num[i]);
    }

    for(i=1;i<=10;i++)
    {
       if(num[i]%2!=0)
       {
           sum+=num[i];
       }
    }

    printf("The sum of odd numbers are : %d",sum);
    getch();
}

