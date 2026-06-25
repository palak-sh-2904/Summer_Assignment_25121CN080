#include<stdio.h>
int main(){
    float basicSalary,hra,da,grossSalary;
    printf("Enter Basic Salary: ");
    scanf("%f",&basicSalary);
    hra=basicSalary*0.20;
    da=basicSalary*0.10;
    grossSalary=basicSalary+hra+da;
    printf("Basic Salary=%.2f\n",basicSalary);
    printf("HRA=%.2f\n",hra);
    printf("DA=%.2f\n",da);
    printf("Gross Salary=%.2f\n",grossSalary);
    return 0;
}
