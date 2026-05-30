#include <stdio.h>

int main() {
    int num1, num2, choice;

    printf("What do you want to do?\n");
    printf("1. Sum\n2. Difference\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice) {
        case 1:
            printf("The sum is: %d\n", num1 + num2);
            break;

        case 2:
            printf("The difference is: %d\n", num1 - num2);
            break;

        case 3:
            printf("The multiplication is: %d\n", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("The division is: %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}