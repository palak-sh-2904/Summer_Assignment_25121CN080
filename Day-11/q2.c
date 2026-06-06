#include <stdio.h>
int maximum(int x, int y);
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Maximum = %d", maximum(x, y));
    return 0;
}
int maximum(int x, int y){
   if (x > y)
        return x;
    else
        return y;
}