#include<stdio.h>
int main()
{
    char name[20];
    double salary=0, value=0, total=0;
    scanf("%s", &name);
    scanf("%lf%lf", &salary, &value);
    total = salary+(value*.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
