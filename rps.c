#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*******************************************************************
*  
*
* Name: rps.c
* Date: 2023-05-11
* Rock Paper Scissors Game in C
*******************************************************************/
int main(){
    int myGuess;
    int computerGuess;
    computerGuess = rand() % 3 + 1;

    printf("Computer has its guess ready!");

    printf("Enter your guess: Rock, Paper or Scissors: \n");
    scanf("%d", &myGuess);
    printf("Your guess is: %d", myGuess);


    if (myGuess < 1 || myGuess > 3){
        printf("You may have entered an incorrect integer value. Please try again.");
        return 0;
    }
    if(computerGuess == 1){
        printf("Computer has chosen Rock!");
    } else if(computerGuess == 2){
        printf("Computer has chosen Paper!");
    } else if(computerGuess == 3){
        printf("Computer has chosen Scissors!");
    }else{
        printf("Computer has chosen an invalid option!");
    }
    
    if (myGuess == 1){
        if (computerGuess == 1){
            printf("It's a tie!");
        } else if (computerGuess == 2){
            printf("You lose!");
        } else if (computerGuess == 3){
            printf("You win!");
        }
    }
    if(myGuess == 2){
        if (computerGuess == 1){
            printf("You win!");
        } else if (computerGuess == 2){
            printf("It's a tie!");
        } else if (computerGuess == 3){
            printf("You lose!");
        }
    }
    if(myGuess == 3){
        if (computerGuess == 1){
            printf("You lose!");
        } else if (computerGuess == 2){
            printf("You win!");
        } else if (computerGuess == 3){
            printf("It's a tie!");
        }
    }
    return 0;
}