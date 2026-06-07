#include<stdio.h>
int ispalidrome(int n);
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
if(ispalidrome(n)){
    printf("Number is palidrome");
}
else{
    printf("Number is not  palidrome");
}
return 0;
}
int ispalidrome(int n){
    int temp,rem,rev=0;
    temp=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        return 1;
    }
    else{
        return 0;
    }
}