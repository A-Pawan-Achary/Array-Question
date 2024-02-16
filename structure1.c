#include<stdio.h>
#include<conio.h>
struct Employee
{
    int Eid;
    char Ename[30];
    float salary;
};
int main()
{
    int i;
    struct Employee E[3];
    for(i=0; i<3; i++)
    {
    printf("Enter the Eid,Name,and salary of the %dth Employee",i+1);
    scanf("%d%s%f",&E[i].Eid,E[i].Ename,&E[i].salary);
    }
    for(i=0; i<3; i++)
    if(E[i].salary<25000)
    E[i].salary=1.1*E[i].salary;
    for(i=0; i<3; i++)
    {
        printf("Employee:%d\n",i+1);
        printf("Emp id:%d\n",E[i].Eid);
        printf("Emp Name:%s\n",E[i].Ename);
        printf("Emp Salary:%3.2f\n",E[i].salary);
    }
}

