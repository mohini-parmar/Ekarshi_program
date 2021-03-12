#include<stdio.h>
#include<conio.h>

void main()
{
    int num,tmp,rem=0,cnt=0;
    printf("Enter 5 digit number : ");
    scanf("%d",&num);
    tmp=num;

    while(tmp>0)
    {
        rem=tmp%10;
        tmp=tmp/10;
        cnt=cnt*10+rem;
    }

    if(num==cnt)
    {
        printf("\nThe number is pelindrome");
    }
    else
    {
        printf("\nThe number is not pelindrome");
    }

    getch();
}

