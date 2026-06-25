#include<stdio.h>
struct Student
{
    char name[50];
    int rollno;
    float marks;
};
int main(){
    struct Student s;
    printf("Enter Name: ");
    scanf("%s",s.name);
    printf("Enter Roll Number: ");
    scanf("%d",&s.rollno);
    printf("Enter Marks: ");
    scanf("%f",&s.marks);
    printf("\n--- Student Record ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollno);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}