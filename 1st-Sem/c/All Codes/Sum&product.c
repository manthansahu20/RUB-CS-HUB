#include <stdio.h>

int main() {
    int n, sum = 0, product = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    
    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", product);
    return 0;
}
