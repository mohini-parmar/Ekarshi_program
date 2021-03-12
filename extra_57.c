#include<stdio.h>
#include<conio.h>

void main()
{
    float x_cord,y_cord;
    printf("\nEnter x quardinate :");
    scanf("%f",&x_cord);

    printf("\nEnter y quardinate :");
    scanf("%f",&y_cord);


    if(x_cord>=0 && y_cord>=0)
        printf("\nQuadrant 1.");
    else if(x_cord<0 && y_cord>0)
        printf("\nQuadrant 2.");
    else if(x_cord<0 && y_cord<0)
        printf("\nQuadrant 3.");
    else if(x_cord>0 && y_cord<0)
        printf("\nQuadrant 4.");
    getch();
}
