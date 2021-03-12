#include<stdio.h>
#include<conio.h>

void main()
{
    int i,limit,num[12];
    printf("\nEnter limit : ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++)
    {
        printf("\nEnter integer between 1 to 12 : ");
        scanf("%d",&num[i]);

        switch(num[i])
        {
            case 1: printf("\nJanuary"); break;
            case 2: printf("\nFebruary"); break;
            case 3: printf("\nMarch"); break;
            case 4: printf("\nApril"); break;
            case 5: printf("\nMay"); break;
            case 6: printf("\June"); break;
            case 7: printf("\nJuly"); break;
            case 8: printf("\nAugust"); break;
            case 9: printf("\nSeptember"); break;
            case 10: printf("\nOctober"); break;
            case 11: printf("\nNovember"); break;
            case 12: printf("\nDecember"); break;
            default : printf("\nYou have entered wrong choice");
        }
    }
    getch();
}

