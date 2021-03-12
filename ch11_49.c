#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    int ch;
    printf("Enter number : ");
    scanf("%d",&num);

    ch = num;

    printf("The number converted into character is : %c",ch);
    getch();
}
