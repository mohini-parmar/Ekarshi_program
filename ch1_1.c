#include<stdio.h>.
#include<conio.h>

void main()
{
    char name[15];
    long int mob_no;
    int d,m,y;

    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your mobile number : ");
    scanf("%ld",&mob_no);
    printf("Enter Your Date of Birth : ");
    scanf("%d %d %d",&d,&m,&y);

    printf("\n=====================================");
    printf("\nName : %s",name);
    printf("\nDate of Birth : %d/%d/%d",d,m,y);
    printf("\nMobile Number: %ld",mob_no);
    getch();
}
