#include <stdio.h>
int sum(int x, int y);
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum = %d", sum(x, y));
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}