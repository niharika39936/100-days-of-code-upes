#include <stdio.h>
int main() {
    double num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);   // space before %c skips leftover whitespace/newline
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Modulus by zero not allowed.\n");
            } else {
                result = (int)num1 % (int)num2;   // modulus works on integers
                printf("Result = %.2lf\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}