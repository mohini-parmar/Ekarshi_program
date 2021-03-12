#include<stdio.h>
#include<conio.h>

void main()
{
    int num,tmp,rem,cnt=0;;
    printf("Enter number : ");
    scanf("%d",&num);
    tmp=num;
    while(tmp>0)
    {
        rem=tmp%10;
        tmp/=10;
        if(rem==1)
            cnt++;
    }
    printf("The number of 1's in the number : %d",cnt);
    getch();
}

