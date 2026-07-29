#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;
    int intNum1, intNum2; // Needed for modulo operation

    printf("--- Basic Calculator ---\n");
    printf("Enter an operator (+, -, *, /, %% for modulo): ");
    scanf("%c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            // Checking for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            // Modulo only works with integers, so we cast the floats to ints
            intNum1 = (int)num1;
            intNum2 = (int)num2;
            
            if (intNum2 != 0) {
                printf("Result: %d %% %d = %d\n", intNum1, intNum2, intNum1 % intNum2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
