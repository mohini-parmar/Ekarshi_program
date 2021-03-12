#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[6];
    int i=0;
    for(i=0;i<6;i++)
    {
        printf("\nEnter Element : ");
        scanf("%d",&arr[i]);
        if(arr[i]<=0)
        {
            arr[i]=100;
        }
    }

    for(i=0;i<6;i++)
    {
        printf("\nElement : %d",arr[i]);
    }


    getch();
}
