#include<stdio.h>
#include<conio.h>

void main()
{   int input;

    printf("Enter number to check the range : ");
    scanf("%d",&input);

    if(input<0)
    {
        printf("\nERROR!The number is negative.");
    }
    else if(input>0 && input<=10)
    {
         printf("\nThe number is between 1 to 10.");
    }
    else if(input>11 && input<=20)
    {
         printf("\nThe number is between 11 to 20.");
    }
    else if(input>21 && input<=30)
    {
         printf("\nThe number is between 21 to 30.");
    }
    else if(input>31 && input<=40)
    {
         printf("\nThe number is between 31 to 40.");
    }
    else if(input>41 && input<=50)
    {
         printf("\nThe number is between 41 to 50.");
    }
    else if(input>51 && input<=60)
    {
         printf("\nThe number is between 51 to 60.");
    }
    else if(input>61 && input<=70)
    {
         printf("\nThe number is between 61 to 70.");
    }
    else if(input>71 && input<=80)
    {
         printf("\nThe number is between 71 to 80.");
    }
    else if(input>81 && input<=90)
    {
         printf("\nThe number is between 81 to 90.");
    }
    else if(input>91 && input<=100)
    {
         printf("\nThe number is between 91 to 100.");
    }
    else if(input >100 )
    {
        printf("\nERROR!The number is greater than 100.");
    }
    getch();
}
