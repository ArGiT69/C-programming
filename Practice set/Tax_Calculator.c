/*this proogram answers the question below:
Calculate income tax paid by an employee to the government
as per the slabs mentioned below:
Income Slab
Tax:
2.5-5.0L:5%
5.0L - 10.0L:20%
30%:Above 10.0L
Note that there is no tax below 2.5L. Take income amount
as an input from the user.
*/
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