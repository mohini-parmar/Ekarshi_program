#include<stdio.h>
#include<conio.h>

void main()
{
    int i,x;
    for(i=1;i<=6;i++)
    {
        if(i==1)
        {
            x+=1;
        }
        else
        {
            int num =(int)pow(i,i);
            x+=num;
        }
    }

    printf("X = %d",x);
	getch();
}
