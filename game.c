#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    int guess;
    int randomNumber;
    int minNumber = 1;
    int maxNumber = 5;
    srand(time(NULL));
    randomNumber = generateRandomNumber(minNumber, maxNumber);
    printf("Enter your guess (%d or %d): ", minNumber, maxNumber);
    scanf("%d", &guess);
    if (guess == randomNumber) {
        printf("Congratulations! You guessed correctly.\n");
    } else {
        printf("Sorry, you guessed wrong. The correct number was %d.\n", randomNumber);
        printf("You've been pranked! Just kidding, better luck next time!\n");
    }

    return 0;
}
