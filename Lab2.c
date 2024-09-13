#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int randomNumber, userGuess, attempts = 3;.c

    // Put the random number generator with current time
    srand(time(0));
    randomNumber = rand() % 10 + 1;  // Generate random number between 1 and 10

    printf("I have selected a random number between 1 and 10. You have 3 attempts to guess it!\n");

    // Loop for 3 attempts
    for (int i = 0; i < attempts; i++) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess == randomNumber) {
            printf("Congratulations! You guessed the number! The number was %d.\n", randomNumber);
            return 0;  // Exit if the user guesses correctly
        } else if (userGuess > randomNumber) {
            printf("Your guess is too high. Try again\n");
        } else {
            printf("Your guess is too low. Try again\n");
        }
    }

    // If user didn't guess correctly after 3 attempts
    printf("Sorry, you've used all your attempts. The number was %d.\n", randomNumber);
    return 0;
}
