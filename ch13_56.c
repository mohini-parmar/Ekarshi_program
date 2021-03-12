#include<stdio.h>
#include<conio.h>

void main()
{
    int x[5]={10,20,30,40,50};
    int *ptr,i;
    ptr=x;

    for(i=0;i<5;i++)
    {
        if(i==1)
        {
            *(ptr+i)=5;
        }
    }

    printf("\nAfter replacing 2nd the element with 5,The array is : \n");
    for(i=0;i<5;i++)
    {
        printf("\nElement : %d",*(ptr+i));
    }
    getch();
}
