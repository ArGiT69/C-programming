#include <stdio.h>
int main() {
    int income;
    float tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    if (income <= 250000) {
        tax = 0;
        printf("You don't have to pay any tax!\n");
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
        printf("Tax payable: Rs. %.2f\n", tax);
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + ((income - 500000) * 0.20);
        printf("Tax payable: Rs. %.2f\n", tax);
    } else {
        tax = (250000 * 0.05) + (500000 * 0.20) + ((income - 1000000) * 0.30);
        printf("Tax payable: Rs. %.2f\n", tax);
    }
    return 0;
}