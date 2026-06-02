#include<stdio.h>
int main()
{
    int n,sum =0;
    printf("enter the value N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }

    printf("sum of first natural numbers=%d",sum);
    return 0;
}
