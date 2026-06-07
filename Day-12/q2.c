#include<stdio.h>
#include<math.h>
int isarmstrong(int n);
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
if(isarmstrong(n)){
    printf("Number is armstrong");
}
else{
    printf("Number is not  armstrong");
}
return 0;
}
int isarmstrong(int n){
    int count=0,sum=0,rem,temp;
    temp=n;
    while(n>0){
        n=n/10;
        count++;
    }
    n=temp;
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(temp==sum){
        return 1;
    }
    else{
        return 0;
    }
}
