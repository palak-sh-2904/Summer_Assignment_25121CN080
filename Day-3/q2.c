#include <stdio.h>

int main() {
    int first, last, i, j, prime;
    printf("Enter firstnumber: ");
    scanf("%d", &first);
    printf("Enter last number: ");
    scanf("%d", &last);
    printf("Prime numbers between %d and %d are:\n", first, last);

    for (i = first; i <= last; i++) {
    if(i<=2){
      continue;
    prime = 1;
    }   
     for (j = 2; j <= i / 2; j++){ 
      if (i % j == 0) {
                prime = 0;
                break;
            }
        }

    }
     if (prime==1){
     printf("%d ", i);
    }
    return 0;

}