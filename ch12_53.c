#include<stdio.h>
#include<conio.h>

struct interest
{
    int amount;
    int rate;
    int period;
};
void main()
{
    struct interest i;
    float final_int=0,inte=0,j=0;
    int k=0;
    i.amount = 100000;
    i.rate = 5;

    for(j=0;j<12;j++,k++)
    {
        inte = (i.amount*i.rate*((1+j)/12))/100;
        printf("\nThe interest of %d month is : %0.2f",(k+1),inte);
        final_int=final_int+inte;
    }

    printf("\n\n1 year interest is : %0.2f",final_int);
    getch();
}
