#include <stdio.h>
int sumDigits(int n);
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Sum of digits is : %d", sumDigits(n));
    return 0;
}
int sumDigits(int n) {
    if(n == 0) {
        return 0;
    }
    int lastDigit = n % 10;
    int remainingNum = sumDigits(n / 10);
    int sum = lastDigit + remainingNum;
    return sum;
}