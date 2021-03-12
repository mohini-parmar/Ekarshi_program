#include<stdio.h>
#include<conio.h>

void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    num<<=2;

    printf("After shifting 2 bits left side the value is : %d",num);
    getch();
}
