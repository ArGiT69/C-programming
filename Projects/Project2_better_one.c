#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
0 --> Snake
1 --> Water
2 --> Gun
*/

const char *nameOf(int choice)
{
    switch (choice)
    {
        case 0: return "Snake";
        case 1: return "Water";
        case 2: return "Gun";
        default: return "Unknown";
    }
}

void showResult(int player, int computer)
{
    printf("You chose: %s\n", nameOf(player));
    printf("Computer chose: %s\n", nameOf(computer));

    if (player == computer)
    {
        printf("It's a Draw!\n");
        return;
    }

    switch (player)
    {
        case 0: // Snake
            printf(computer == 1 ? "You Won!\n" : "You Lose!\n");
            break;
        case 1: // Water
            printf(computer == 2 ? "You Won!\n" : "You Lose!\n");
            break;
        case 2: // Gun
            printf(computer == 0 ? "You Won!\n" : "You Lose!\n");
            break;
    }
}

int getPlayerChoice(void)
{
    int player;
    int valid = 0;

    while (!valid)
    {
        printf("Choose 0 for Snake, 1 for Water, 2 for Gun: ");

        if (scanf("%d", &player) != 1)
        {
            printf("Please enter a number.\n");
            // clear bad input from the buffer
            while (getchar() != '\n');
            continue;
        }

        if (player < 0 || player > 2)
        {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        valid = 1;
    }

    return player;
}

int main()
{
    srand(time(0));

    int player = getPlayerChoice();
    int computer = rand() % 3;

    showResult(player, computer);

    return 0;
}