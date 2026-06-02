#include <stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Factorial is : %d", factorial(n));
    return 0;
}
int factorial(int n) {
    if(n == 0 || n==1) {
        return 1;
    }
    int factnm1 = factorial(n - 1);
    int factn = n * factnm1;
    return factn;
}