#include <stdio.h>
int main()
{
    int num, remainder;
    long long binary = 0, c = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * c;
        num = num / 2;
        c = c * 10;
    }
    printf("Binary = %lld", binary);

    return 0;
}