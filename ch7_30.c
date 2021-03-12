#include<stdio.h>
#include<conio.h>
void function1(int n1,int n2,int n3,int n4,int n5);
void function2(int n1,int n2,int n3,int n4,int n5);

void main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 numbers : \n");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    function1(n1,n2,n3,n4,n5);
    function2(n1,n2,n3,n4,n5);
    getch();
}

void function1(int n1,int n2,int n3,int n4,int n5)
{
    if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
    {
        printf("\nNumber 1 is biggest");
    }
    else if(n2>n3 && n2>n4 && n2>n5)
    {
        printf("\nNumber 2 is biggest");
    }
    else if(n3>n4 && n3>n5)
    {
        printf("\nNumber 3 is biggest");
    }
    else if(n4>n5)
    {
        printf("\nNumber 4 is biggest");
    }
    else
    {
        printf("\nNumber 5 is biggest");
    }
}

void function2(int n1,int n2,int n3,int n4,int n5)
{
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5)
    {
        printf("\nNumber 1 is smallest");
    }
    else if(n2<n3 && n2<n4 && n2<n5)
    {
        printf("\nNumber 2 is smallest");
    }
    else if(n3<n4 && n3<n5)
    {
        printf("\nNumber 3 is smallest");
    }
    else if(n4<n5)
    {
        printf("\nNumber 4 is smallest");
    }
    else
    {
        printf("\nNumber 5 is biggest");
    }
}
