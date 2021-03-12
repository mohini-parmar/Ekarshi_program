#include<stdio.h>
#include<conio.h>

void main()
{
    char ch='a',character='A';
    printf("\'a-z\' and \'A-Z\' with equivalent integers : \n\n");
    while(ch!='z')
    {
        printf("\n%c = %d\t\t%c = %d",character,character,ch,ch);
        ch+=1;
        character+=1;
    }
    getch();
}
