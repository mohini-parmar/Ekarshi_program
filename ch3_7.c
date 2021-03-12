#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,tmp=0;

    printf("Enter value of x :");
    scanf("%d",&x);

    printf("Enter value of y :");
    scanf("%d",&y);

    tmp = x;
    x = y;
    y = tmp;

    printf("\nAfter swapping x = %d and y = %d",x,y) ;
    getch();
}
