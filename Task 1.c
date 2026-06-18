#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // 1. Get the operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to catch any leftover newline characters

    // 2. Get the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // 3. Perform operation selection using switch case
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Code handles potential division by zero safely
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // Handles any invalid operator input
        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}