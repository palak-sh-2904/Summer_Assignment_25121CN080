#include<stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main(){
    struct Book b[100];
    int n,i;
    printf("Enter number of books: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Book %d\n",i+1);
        printf("Enter Book ID: ");
        scanf("%d",&b[i].id);
        printf("Enter Book Title: ");
        scanf("%s",b[i].title);
        printf("Enter Author Name: ");
        scanf("%s",b[i].author);
    }
    printf("----- LIBRARY RECORDS -----\n");
    for(i=0;i<n;i++){
        printf("Book ID   :%d\n",b[i].id);
        printf("Book Title:%s\n",b[i].title);
        printf("Author  :%s\n",b[i].author);
    }
    return 0;
}