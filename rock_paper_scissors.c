

#include <stdlib.h>
#include <stdio.h>

#include <time.h>

int main() 
{
    srand(time(NULL));  

    char userChoice, playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        printf("\nRock, Paper, Scissors Game\n");
        printf("R. Rock\n");
        printf("P. Paper\n");
        printf("S. Scissors\n");
        printf("E. Exit\n");

        printf("Enter your choice (R/P/S/E): ");
        userChoice = getchar();
        while (getchar() != '\n');  // Clear the input buffer

        if (userChoice == 'E' || userChoice == 'e') {
            printf("Exiting the game. Goodbye!\n");
            break;
        } else if (userChoice != 'R' && userChoice != 'r' &&
                   userChoice != 'P' && userChoice != 'p' &&
                   userChoice != 'S' && userChoice != 's') {
            printf("Invalid choice. Please enter R, P, S, or E.\n");
            continue;
        }

        int cpuChoice = rand() % 3;

        printf("Your choice: ");
        if (userChoice == 'R' || userChoice == 'r') {
            printf("Rock\n");
        } else if (userChoice == 'P' || userChoice == 'p') {
            printf("Paper\n");
        } else if (userChoice == 'S' || userChoice == 's') {
            printf("Scissors\n");
        }

        printf("CPU's choice: ");
        if (cpuChoice == 0) {
            printf("Rock\n");
        } else if (cpuChoice == 1) {
            printf("Paper\n");
        } else if (cpuChoice == 2) {
            printf("Scissors\n");
        }

        // Determine the winner
        if ((userChoice == 'R' || userChoice == 'r') && cpuChoice == 1 ||
            (userChoice == 'P' || userChoice == 'p') && cpuChoice == 2 ||
            (userChoice == 'S' || userChoice == 's') && cpuChoice == 0) {
            printf("CPU wins!\n");
        } else if ((userChoice == 'R' || userChoice == 'r') && cpuChoice == 2 ||  (userChoice == 'P' || userChoice == 'p') && cpuChoice == 0 || (userChoice == 'S' || userChoice == 's') && cpuChoice == 1) {
            printf("You win!\n");
        } else {
            printf("It's a tie!\n");
        }

        while (1) {
            printf("\nDo you want to play again? (y/n): ");
            playAgain = getchar();
            while (getchar() != '\n');  // Clear the input buffer

            if (playAgain == 'y' || playAgain == 'Y' || playAgain == 'n' || playAgain == 'N') {
                break;
            } else {
            printf("\n********************************************************\n");
            printf("\n*       Invalid input. Please enter 'y' or 'n'.        *\n"); 
            printf("\n********************************************************\n");

            }
        }
    }

    printf("Exiting the game. Goodbye!\n");

    // return 0;
}
