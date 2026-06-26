#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    num = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

   // printf("Random number between 1 and 100: %d\n", num);
    do{
        printf("Guess the number");
        scanf("%d", &guessed);
        if(guessed>num){
            printf("Lower no please!\n");
        } 
        else if(num>guessed){
            printf("Highr no please\n");
        } 
         else{
            printf("Congrates!!\n");
        }
        no_of_guesses++;
    }
    while(guessed != num);
    printf(" You guessed the no in %d guesses", no_of_guesses);
    return 0;
}
