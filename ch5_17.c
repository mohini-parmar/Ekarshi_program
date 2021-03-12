#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y,ans=0;
    printf("Enter value of x and y :\n");
    scanf("%d %d",&x,&y);

    printf("\nThe addition is : %d",(x+y));
    printf("\nThe subtraction is : %d",(x-y));
    printf("\nThe multiplication is : %d",(x*y));
    printf("\nThe division is : %d",(x/y));
    getch();
}
