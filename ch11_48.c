#include<stdio.h>
#include<conio.h>

void main()
{
    float km;
    int inch;

    printf("\nEnter kilometers : ");
    scanf("%f",&km);

    inch = (int)km*399370;

    printf("\nThe inches are : %d",inch);
    getch();
}
