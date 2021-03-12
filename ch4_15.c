#include<stdio.h>
#include<conio.h>

void main()
{
    int num = 2389;
    int days = (num%365)%7;
    int year = num/365;

    printf("\nDays : %d",days);
    printf("\nYears : %d",year);
    getch();
}
