#include<stdio.h>
#include<conio.h>

void main()
{
    float x = 10.5;
    float swap = 255.6,*ptr;
    ptr=&swap;
    x=*(ptr);
    printf("The value of x is : %0.2f",x);
    printf("\nAfter changing the value with 255.6,");
    printf("\nNew value is : %0.2f",x);
    getch();
}
