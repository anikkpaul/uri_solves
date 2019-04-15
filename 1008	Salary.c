#include<stdio.h>
int main()
{
    int number=0, hours=0;
    float salary=0;
    scanf("%d%d%f", &number, &hours, &salary);
    salary = hours*salary;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, salary);
}
