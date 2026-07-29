#include <stdio.h>

int main() 
{
    int a, b;
    char op;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if(b != 0) printf("Result: %d\n", a / b);
            else printf("Cannot divide by zero.\n");
            break;
        default: printf("Invalid operator.\n");
    }
    return 0;
}
