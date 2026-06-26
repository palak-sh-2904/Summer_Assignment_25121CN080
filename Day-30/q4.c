#include<stdio.h>
#include<string.h>
struct student
{
char name[50];
int roll;
float marks;
};
struct student s[100];
int count=0;
void addStudent(int roll,char name[],float marks);
void displayStudents();
void updateStudent(int roll);
void searchStudent(int roll);
int main(){
    int choice,roll;
    char name[50];
    float marks;
    do{
        printf("\n-----STUDENT MANAGEMENT SYSTEM-----");
        printf("\n1.Add Student\n2.Display Students\n3.Search Student\n4.Update Student\n5.Exit");
        printf("\nEnter Choice: ");
        scanf("%d",&choice);
        switch (choice){
        case 1:
            printf("Enter the roll number:");
            scanf("%d",&roll);
            printf("Enter the name:");
            scanf("%s",name);
            printf("Enter the Marks:");
            scanf("%f",&marks);
            addStudent(roll,name,marks);
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d",&roll);
            searchStudent(roll);
            break;
        case 4:
            printf("Enter Roll Number to Update: ");
            scanf("%d",&roll);
            updateStudent(roll);
            break;
        case 5:
            printf("Thank You!\n");
            break;
        default:
                printf("Invalid Choice!\n");
        }
    }while(choice!=5);
    return 0;
}
void addStudent(int roll,char name[],float marks){
    s[count].roll=roll;
    strcpy(s[count].name, name);
    s[count].marks=marks;
    count++;
}
void displayStudents(){
    int i;
    if(count==0){
        printf("No Records Found!\n");
        return;
    }
    printf("----- STUDENT RECORDS -----\n");
    for(i=0;i<count;i++){
        printf("\nRoll No:%d\nName   :%s\nMarks  :%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}
void updateStudent(int roll){
    int i;
    for(i=0;i<count;i++){
        if(s[i].roll==roll){
            printf("Enter New Name: ");
            scanf("%s",s[i].name);
            printf("Enter New Marks: ");
            scanf("%f",&s[i].marks);
            printf("\nRecord Updated Successfully!");
            return;
        }
    }
    printf("\nStudent Not Found!");
}
void searchStudent(int roll){
    int i;
    for(i=0;i<count;i++){
        if(s[i].roll==roll){
            printf("\nRoll No:%d\nName   :%s\nMarks  :%.2f\n",s[i].roll,s[i].name,s[i].marks);
            return;
        }
    }
    printf("\nStudent Not Found!");
}