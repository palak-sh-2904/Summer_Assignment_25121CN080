#include<stdio.h>
struct Employee
{
    int EmployeeID;
    char name[50];
    float salary;
};
int main(){
    struct Employee e[100];
    int n,i;
    printf("Enter number of Employees: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Employee %d\n",i+1);
        printf("Enter Employee ID: ");
        scanf("%d",&e[i].EmployeeID);
        printf("Enter Employee Name:");
        scanf("%s",e[i].name);
        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }
    printf("\n----- Employee RECORDS -----\n");
    for(i=0;i<n;i++){
        printf("EmployeeID:%d\n",e[i].EmployeeID);
        printf("Name      :%s\n",e[i].name);
        printf("Salary    :%.2f\n",e[i].salary);
    }
    return 0;
}