#include <stdio.h>
int fibonacci(int n);
int main() {
    int n;
    printf("Enter term number : ");
    scanf("%d", &n);
    printf("Fibonacci term is : %d", fibonacci(n));
    return 0;
}
int fibonacci(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    int fibnm1 = fibonacci(n - 1);
    int fibnm2 = fibonacci(n - 2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}