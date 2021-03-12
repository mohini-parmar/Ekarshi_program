#include<stdio.h>
#include<conio.h>

void main()
{
    int choice=0;
    int n1=1,n2=0;
    printf("1.AND operation\n2.OR operation\n3.NOT operattion\nEnter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter 2 number to check if they are same or not :\n");
            scanf("%d %d",&n1,&n2);
            if(n1 && n2)
                printf("\nBoth numbers are same.");
            else
                printf("\nBoth numbers are different.");
            break;

        case 2:
            if(n1 || n2)
                printf("\nAtleast one operation is true.");
                printf("\nOR operation performed.");
            break;

        case 3:
            if(!n2)
                printf("\nNOT operation perfomed!");
            break;

        case 4:
            exit(0);
    }



    getch();
}

