#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[4],sum=0,i=0;
    float avg=0;

    for(i=0;i<5;i++)
    {
        printf("Enter marks of maths of 5 student : ");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    avg=sum/5;

    printf("\nThe average is : %0.2f",avg);
    getch();
}
