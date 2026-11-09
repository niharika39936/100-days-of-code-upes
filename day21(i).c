#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0;
    int divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = n % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    while(digits > 0)
    {
        divisor = divisor * 10;
        digits--;
    }

    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
