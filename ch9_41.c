#include<stdio.h>
#include<conio.h>

void main()
{
    int tot;
    float per;
    printf("\nEnter your total marks out of 600 : ");
    scanf("%d",&tot);
    per = ((tot*100)/600);
    printf("\nYour percentage is : %0.2f",per);
    getch();
}
