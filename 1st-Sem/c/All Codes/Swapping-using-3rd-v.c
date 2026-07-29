#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers (A and B): ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: A = %d, B = %d\n", a, b);
    return 0;
}
