#include<stdio.h>
#include<conio.h>

void main()
{
    int i,*ptr,arr[4],max=0,min=0;
    ptr=arr;

    for(i=0;i<4;i++)
    {
        printf("\nEnter number %d : ",(i+1));
        scanf("%d",(ptr+i));
    }

    max=*ptr;
    min=*ptr;

    for(i=0;i<4;i++)
    {
        if(*(ptr+i)>max)
            max =*(ptr+i);
        if(*(ptr+i)<min)
            min =*(ptr+i);
    }
    printf("\nThe maximum value is : %d",max);
    printf("\nThe minimum value is : %d",min);
    printf("\nThe difference between minimum and maximum value is : %d",max-min);
    getch();
}
