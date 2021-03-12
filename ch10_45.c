#include<stdio.h>
#include<conio.h>

void main()
{
    int cnt=0,i=0;
    char name[10];


    printf("Enter your name : ");
    scanf("%s",&name);

    while(name[i]!='\0')
    {
        cnt++;
        i++;
    }

    printf("Your name has %d letters in it.",cnt);

    getch();
}
