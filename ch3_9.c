#include<stdio.h>
#include<conio.h>

void main()
{
    int num[7];
    int i=0,sum=0;
    for(i=0;i<8;i++)
    {
        printf("Enter value of index %i : ",i);
        scanf("%d",&num[i]);
    }
    sum=add(num);

    printf("\nThe sum of all the odd values is : %d",sum);
    getch();
}

int add(int num[])
{
    int i=0;
    int sum =0;
    for(i=0;i<8;i++)
    {
        if((num[i]%2)!=0)
            {
                sum +=num[i];
            }
    }
    return sum;
}
