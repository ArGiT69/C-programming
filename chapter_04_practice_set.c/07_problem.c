#include <stdio.h>
int main() {
    int num;
    int prime = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 1;   // treat as "not prime"
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = 1;
                break;
            }
        }
    }

    if (prime) {
        printf("%d is not a prime number.\n", num);
    } else {
        printf("%d is a prime number.\n", num);
    }
}