#include<stdio.h>
#include<conio.h>

void main()
{
    int limit,i;

    printf("Enter the limit : ");
    scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
        if(i%2==0)
        {
            printf("\nThe square of %d is %d",i,(i*i));
        }
    }
    getch();
}
