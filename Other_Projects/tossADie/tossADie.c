#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int dieOutput, userGuess;
    srand(time(NULL));
    dieOutput=rand()%6+1;
    printf("Guess the value of a 6 sided die\n");
    scanf("%d", &userGuess);
    if (dieOutput == userGuess){
        printf("You got it the output is %d\n", dieOutput);
    } else {
        printf("You guessed wrong the output is %d\n", dieOutput);
    }
    return 0;
}