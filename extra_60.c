#include<stdio.h>
#include<conio.h>

void main()
{
    float si,n,p,r;
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("\nEnter principle : ");
    scanf("%f",&p);
    printf("\nEnter number of year : ");
    scanf("%f",&n);

    si = (n*p*r)/100;

    printf("\nSimple interest is : %0.2f",si);
    getch();
}
