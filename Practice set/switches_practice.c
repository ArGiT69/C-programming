/* hey ya! This is a simple calculator program that uses a switch statement 
to perform basic arithmetic operations based on user input. The user is 
prompted to choose an operation and then enter two numbers.
The program then executes the corresponding cases in the switch statement to
perform the desired calculation and display the result. If the user chooses
division and the second number is zero, it handles the error gracefully by
displaying an appropriate message. If the user enters an invalid choice, it
also informs the user about the invalid input. it's a great way to practice 
using switch statements in C!
*/
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