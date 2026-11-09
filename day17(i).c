#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;
    int count = 0, temp, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while(temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= count; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
