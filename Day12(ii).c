#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units <= 0) {
        printf("Invalid input / No consumption.\n");
    }
    else if (units <= 100) {
        bill = units * 5;
        printf("Electricity Bill = Rs. %.2f\n", bill);
    }
    else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
        printf("Electricity Bill = Rs. %.2f\n", bill);
    }
    else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
        printf("Electricity Bill = Rs. %.2f\n", bill);
    }
    else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
        printf("Electricity Bill = Rs. %.2f\n", bill);
    }
    return 0;
}