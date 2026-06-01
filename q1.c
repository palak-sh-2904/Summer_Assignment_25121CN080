#include<stdio.h>
int main(){
    int n,f1=0,f2=1,f3,i;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The fibonacci series is  ");
    printf("%d\n",f1);
    printf("%d\n",f2);
    for( i=1;i<=n-2;i++){
        f3=f1+f2;
        printf("%d\n",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}