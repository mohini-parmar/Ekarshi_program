#include<stdio.h>
#include<conio.h>
void max(float i,float j,float k);
void min(float i,float j,float k);

void main()
{
    float i,j,k;
    printf("Enter values for i , j  and k : \n");

    scanf("%f",&i);
    scanf("%f",&j);
    scanf("%f",&k);

    max(i,j,k);
    min(i,j,k);

    getch();
}

void max(float i,float j,float k)
{
	if(i>j && i>k)
	{
        printf("\n%.2f is max",i);
	}
	else if(j>k)
	{
        printf("\n%.2f is max",j);
	}
	else
	{
         printf("\n%.2f is max",k);
	}
}

void min(float i,float j,float k)
{
	if(i<j && i<k)
	{
        printf("\n%.2f is min",i);
	}
	else if(j<k)
	{
        printf("\n%.2f is min",j);
	}
	else
	{
         printf("\n%.2f is min",k);
	}
}
