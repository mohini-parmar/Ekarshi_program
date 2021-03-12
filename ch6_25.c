#include<stdio.h>
#include<conio.h>

void main()
{
     char ch1,ch2;
    printf("Enter 2 character as input : ");
    scanf("%c %c",&ch1,&ch2);

    if(ch1==ch2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    getch();
}
