#include<stdio.h>
#include<conio.h>


struct stu
{
    char name[20];
    int roll_no;
};
void main()
{
    struct stu s[10];
    int limit,i=0;

    printf("Enter limit : ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++)
    {
        printf("\n------------------------\n");
        printf("\nEnter roll number : ");
        scanf("%d",&s[i].roll_no);
        printf("\nEnter Name : ");
        scanf("%s",&s[i].name);
    }

    for(i=0;i<limit;i++)
    {
        printf("\nRoll number : %d , Name : %s",s[i].roll_no,s[i].name);
    }
    getch();
}
