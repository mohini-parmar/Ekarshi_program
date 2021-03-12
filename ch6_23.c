#include<stdio.h>
#include<conio.h>

void main()
{
    char name[20];
    int i,cnt=0;

    printf("Enter your name : ");
    scanf("%s",name);

    while(name[i]!='\0')
    {
        i++;
        cnt++;
    }

    printf("\nName in reverse : ");
    for(i=cnt;i>=0;i--)
    {
        printf("%c",name[i]);
    }
    getch();
}
