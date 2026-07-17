/*
this program picks a random number 1–100,
 then loops asking you to guess,
 telling you "Lower" or "Higher" until you match it,
  and counts your guesses.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Seeds the random number generator
    srand(time(0));
    // Generates a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guessed;
    int no_of_guesses = 0;
    do {
        printf("guess the number:\n");
        scanf("%d", &guessed);   
        if (guessed > randomNumber) {
            printf("Lower number please!\n");
        } else if (guessed < randomNumber) {
            printf("Higher number please!\n");
        } else {
            printf("Correct!\n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);
    printf("you guessed the number in %d guesses\n", no_of_guesses);
    return 0;
}