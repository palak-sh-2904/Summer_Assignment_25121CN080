#include<stdio.h>
int main(){
    int as=50;//available seats=as
    int t;//tickets=t
    printf("Available Seats=%d\n",as);
    printf("Enter Number of Tickets: ");
    scanf("%d",&t);
    if(t<=as){
        as-=t;
        printf("Booking Successful\n");
        printf("Remaining Seats=%d\n",as);
    }
    else{
        printf("Seats Not Available\n");
    }
    return 0;
}