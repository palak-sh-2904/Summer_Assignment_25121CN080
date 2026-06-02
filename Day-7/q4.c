#include <stdio.h>
int rev = 0;
int reverseNumber(int n);
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    reverseNumber(n);
    printf("Reversed number is : %d", rev);
    return 0;
}
int reverseNumber(int n) {
    if(n == 0) {
        return rev;
    }
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    reverseNumber(n / 10);
    return rev;
}