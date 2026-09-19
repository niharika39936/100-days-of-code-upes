#include <stdio.h>
int SimpleInterest(int P, int R, int T) {
    return (P * R * T) / 100;
}
int CompoundInterest(int P, int R, int T) {
    return P * (1 + R / 100.0) * (1 + R / 100.0) - P;
}
int main() {
    int P, R, T;
    
    printf("Enter Principal amount: ");
    scanf("%d", &P);

    printf("Enter Rate of interest: ");
    scanf("%d", &R);

    printf("Enter Time period in years: ");
    scanf("%d", &T);    

    printf("Simple Interest: %d\n", SimpleInterest(P, R, T));
    printf("Compound Interest: %d\n", CompoundInterest(P, R, T));
}