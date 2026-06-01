#include <stdio.h>
#include <math.h>
int main() {
    int start, end,temp,rem;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers are:\n");
    for(int num = start; num <= end; num++) {
     temp = num;
     int digits=0,sum=0;
        while(temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while(temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if(sum == num)
            printf("%d ", num);
    }
    return 0;
}

