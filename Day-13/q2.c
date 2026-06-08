#include <stdio.h>
int main(){
    int n, i, sum = 0;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}