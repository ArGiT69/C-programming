/* This program answers the question:
Write a program in C to check whether a character is uppercase
or lowercase.
The program should take a character as input and display whether it is an
uppercase letter, a lowercase letter, or not a letter at all.
Use the ASCII values to determine the case of the character.
*/
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf(" %c", &ch);
    printf("The ASCII value of the character is: %d\n", ch);
    if (ch >= 65 && ch <= 90) {
        printf("The character is uppercase.\n");
    } else if (ch >= 97 && ch <= 122) {
        printf("The character is lowercase.\n");
    } else {
        printf("The input is not a letter.\n");
    }
    return 0;
}