#include<stdio.h>
#include<conio.h>

void main()
{
    float num;
    int con_num;

    printf("Enter float number : ");
    scanf("%f",&num);

    con_num = num ;

    printf("The number after converted into int is : %d",con_num);
    getch();
}
