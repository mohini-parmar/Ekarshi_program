#include<stdio.h>
#include<conio.h>

void main()
{
    int pwd=3355;
    int in_pwd=0;

    do
    {
        printf("\n\nEnter password :");
        scanf("%d",&in_pwd);

        if(in_pwd!=pwd)
        {
            printf("\nIncorrect Password!");
        }
    } while(in_pwd!=pwd);

        printf("\n\tCorrect Password!");

    getch();
}
