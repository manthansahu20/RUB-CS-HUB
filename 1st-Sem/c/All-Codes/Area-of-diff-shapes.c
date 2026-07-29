#include <stdio.h>

int main() {
    int choice;
    float base, height, side, length, width, radius, area;

    printf("--- Area Calculator ---\n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Rectangle\n");
    printf("4. Area of Circle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;
            
        case 2:
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
            
        case 3:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;
            
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
            
        default:
            printf("Invalid choice! Please select an option between 1 and 4.\n");
    }

    return 0;
}
