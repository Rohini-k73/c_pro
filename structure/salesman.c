#include <stdio.h>
// typedef salesman
typedef struct salesman
{
    char name[20];
    double sal;
    double incentive;
    double target;
} salesman;

salesman storevalue(salesman s1);
void main()
{

    salesman s1;
    s1 = storevalue(s1);
    display(s1);
}

salesman storevalue(salesman s1)
{

    printf("Enter the name: ");
    scanf("%s", &s1.name);

    printf("Enter the salary: ");
    scanf("%lf", &s1.sal);

    printf("Enter incentive: ");
    scanf("%lf", &s1.incentive);

    printf("Enter target: ");
    scanf("%lf", &s1.target);

    return s1;
}
void display(salesman s1)
{

    printf("Name: %s\nSalary: %.2lf\nIncentive: %.2lf\nTarget: %.2lf\n", s1.name, s1.sal, s1.incentive, s1.target);
}
