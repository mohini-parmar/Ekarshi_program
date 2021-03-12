#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,ans=0;
    printf("Enter 2 number to calculate division : ");
    scanf("%d %d",&num1,&num2);
    ans=div(num1,num2);
    printf("\nThe division is : %d",ans);
    getch();
}

int div(int n1,int n2)
{
    return (n1/n2);
}
