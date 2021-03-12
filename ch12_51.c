#include<stdio.h>
#include<conio.h>

struct sc
{
    int emp_id;
    char name[30];
    int tot_work_hr_mnth;
    int sal_pr_hr;
};
void main()
{
    struct sc info;
    int tot_sal;

    printf("\nEnter employee id :");
    scanf("%d",&info.emp_id);

    printf("\nEnter Employee name :");
    scanf("%s",&info.name);

    printf("\nEnter total working hour of a month :");
    scanf("%d",&info.tot_work_hr_mnth);

    printf("\nEnter salary per hour :");
    scanf("%d",&info.sal_pr_hr);

    tot_sal = (info.sal_pr_hr*info.tot_work_hr_mnth);

    printf("\n-------------------------------------\n");
    printf("\nEmployee id : %d",info.emp_id);
    printf("\nEmployee salary of month : %d",tot_sal);
    printf("\n-------------------------------------\n");
    getch();
}
