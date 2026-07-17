#include <stdio.h>
int main() {
    int num;
    int prime = 0;
    int i = 2; 
    i <= num / 2;
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
            i++;
        }
    }

    if (prime) {
        printf("%d is not a prime number.\n", num);
    } else {
        printf("%d is a prime number.\n", num);
    }
}