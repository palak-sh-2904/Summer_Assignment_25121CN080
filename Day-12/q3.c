#include <stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("Enter num of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

void fibonacci(int n){
    int fibNm2 = 0, fibNm1 = 1, fibN, i;
    printf("%d %d ", fibNm2, fibNm1);
    for(i = 3; i <= n; i++){
        fibN = fibNm2 + fibNm1;
        printf("%d ", fibN);
        fibNm2 = fibNm1;
        fibNm1 = fibN;
    }
}