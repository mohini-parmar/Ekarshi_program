#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[19],i=0,max=0,pos=0;

    printf("Enter elements of array : ");

    for(i=0;i<20;i++)
    {
        printf("\nEnter element %d : ",(i+1));
        scanf("%d",&arr[i]);
    }

    for(i=0;i<20;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            pos = i;
        }
    }

    printf("Maximum element is : %d and its position is : %d",max,(pos+1));

    getch();
}
