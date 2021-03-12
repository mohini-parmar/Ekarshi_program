#include<stdio.h>
#include<conio.h>

void main()
{
    int num[9]={'0'};
    int i=0;
    int pov_cnt=0;
    int neg_cnt=0;

    for(i=0;i<10;i++)
    {
        printf("Enter number %d : ",(i+1));
        scanf("%d",&num[i]);
    }

    neg_cnt=0;

    for(i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            pov_cnt+=1;
        }
        if(num[i]<0)
        {
            neg_cnt+=1;
        }
    }

    printf("\nYou have entered %d Positive Numbers and %d Negative Numbers.",pov_cnt,neg_cnt);

    getch();
}
