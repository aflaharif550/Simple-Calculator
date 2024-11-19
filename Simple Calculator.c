#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    } else if (choice == 2) {
        printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    } else if (choice == 3) {
        printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    } else if (choice == 4) {
        if (num2 != 0) {
            printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("\nError: Division by zero is not allowed.\n");
        }
    } else {
        printf("\nInvalid choice. Please select a valid operation.\n");
    }

    return 0;
}