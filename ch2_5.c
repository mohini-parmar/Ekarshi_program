#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1;
    float j=0;
    double k=0;
    long m=0;
    long double n=0;

    printf("\nsize of int is : %d byte ",sizeof(i));
    printf("\nsize of float is : %d byte ",sizeof(j));
    printf("\nsize of double is : %d byte ",sizeof(k));
    printf("\nsize of long is : %d byte ",sizeof(m));
    printf("\nsize of long double is : %d byte ",sizeof(n));
    getch();
}
