#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("\n--- Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %d\n", (int)result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %d\n", (int)result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %d\n", (int)result);
            break;
        case 4:
            if (num2 != 0) {
                result = (float)num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select between 1-4.\n");
    }

    return 0;
}
