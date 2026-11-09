#include <stdio.h>

int main()
{
    int n, rem, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;

        if(rem == 0)
            rem = 1;
        else if(rem == 1)
            rem = 0;
        else
        {
            printf("Invalid binary number");
            return 0;
        }

        result = result + rem * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %d", result);

    return 0;
}
