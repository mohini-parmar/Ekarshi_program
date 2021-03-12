#include<stdio.h>
#include<conio.h>

void main()
{
    int input = 68500;

    int sec=(input % 60);
    int min=(input/60);
    int hr=(input/3600);

    printf("hour : %d , minute : %d , second : %d",hr,min,sec);
    getch();
}

