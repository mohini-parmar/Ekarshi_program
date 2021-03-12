#include<stdio.h>
#include<conio.h>

void main()
{
    char ori[50],cpy[50];
    int i=0;
    printf("\nEnter string to copy : ");
    scanf("%s",ori);

    while(ori[i]!='\0')
    {
        cpy[i]=ori[i];
        i++;
    }

    printf("The copied string is : %s",cpy);
    getch();
}
