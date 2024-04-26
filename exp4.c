#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input operator and operands
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error! Division by zero.");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;
        case '%':
            if(num2 == 0) {
                printf("Error! Modulo by zero.");
            } else {
                result = (int)num1 % (int)num2; // Convert to int for modulo operation
                printf("%.2lf %% %.2lf = %.2lf", num1, num2, result);
            }
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}
