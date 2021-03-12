#include<stdio.h>
#include<conio.h>

void main()
{
    int n1,n2,n3,n4,n5;

    printf("Enter five numbers to find max :");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
    {
        printf("%d is maximum",n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
    {
        printf("%d is maximum",n2);
    }
    else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
    {
        printf("%d is maximum",n3);
    }
    else if(n4>n1 && n4>n2 && n4>n3 && n4>n5)
    {
        printf("%d is maximum",n4);
    }
    else
    {
        printf("%d is maximum",n5);
    }
    getch();
}
