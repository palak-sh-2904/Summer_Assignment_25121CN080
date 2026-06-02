#include <stdio.h>
int main()
{
    int binary, decimal = 0, c = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while(binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * c;
        c = c * 2;
        binary = binary / 10;
    }
    printf("Decimal = %d", decimal);
    return 0;
}