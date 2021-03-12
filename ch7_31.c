#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int x1,y1,x2,y2;
    printf("Enter co-ordinates of point 1 :\n");
    printf("\nx1 :");scanf("%d",&x1);
    printf("\ny1 :");scanf("%d",&y1);
    printf("\nx2 :");scanf("%d",&x2);
    printf("\ny2 :");scanf("%d",&y1);
    distance(x1,y1,x2,y2);
    getch();
}

void distance(int x1,int y1,int x2,int y2)
{
    float distance;
    float tmp = (x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
    distance=sqrt(tmp);
    printf("\nThe distance between 2 points are : %f ",distance);
}



