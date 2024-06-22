#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*******************************************************************
*  
*
* Name: rps.c
* Author: Elainna Peay
* Date: 2023-05-11
* Rock Paper Scissors Game in C
*******************************************************************/

int main() {
    int myGuess;
    int computerGuess;

    // Seed the random number generator
    srand(time(0));
    computerGuess = rand() % 3 + 1;

    printf("Computer has its guess ready!\n");

    printf("Enter your guess (1 for Rock, 2 for Paper, 3 for Scissors): \n");
    scanf("%d", &myGuess);

    if (myGuess < 1 || myGuess > 3) {
        printf("You may have entered an incorrect integer value. Please try again.\n");
        return 0;
    }

    printf("Your guess is: ");
    if (myGuess == 1) {
        printf("Rock\n");
    } else if (myGuess == 2) {
        printf("Paper\n");
    } else if (myGuess == 3) {
        printf("Scissors\n");
    }

    printf("Computer has chosen: ");
    if (computerGuess == 1) {
        printf("Rock\n");
    } else if (computerGuess == 2) {
        printf("Paper\n");
    } else if (computerGuess == 3) {
        printf("Scissors\n");
    }

    if (myGuess == computerGuess) {
        printf("It's a tie!\n");
    } else if ((myGuess == 1 && computerGuess == 3) || 
               (myGuess == 2 && computerGuess == 1) || 
               (myGuess == 3 && computerGuess == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
