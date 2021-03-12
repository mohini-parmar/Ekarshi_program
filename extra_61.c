#include<stdio.h>
#include<stdio.h>

void main()
{
    int num;
    int rem,rev=0;
    printf("Enter number :");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    printf("The reversed number is : %d",rev);
    getch();
}
