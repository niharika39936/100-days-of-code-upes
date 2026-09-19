#include <stdio.h>
int main()
{
    float cp, sp, percentage;
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
    {
        percentage = (sp - cp) * 100 / cp;
        printf("Profit %.0f%%\n", percentage);
    }
    else if (sp < cp)
    {
        percentage = (cp - sp) * 100 / cp;
        printf("Loss %.0f%%\n", percentage);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}