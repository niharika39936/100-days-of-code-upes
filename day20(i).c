#include <stdio.h>

int main()
{
    int n, rem, product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;

        if(rem % 2 != 0)
        {
            product = product * rem;
            found = 1;
        }

        n = n / 10;
    }

    if(found == 1)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits found");

    return 0;
}
