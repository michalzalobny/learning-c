#include <stdio.h>
#include <stdlib.h>

int main(){
  int secretNumber = 5;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  int outOfGuesses = 0;

  while(guess != secretNumber && outOfGuesses == 0){
    if(guessCount < guessLimit){
        printf("Enter a secret number: ");
        scanf("%d", &guess);
        guessCount++;
    } else{
        outOfGuesses = 1;
    }
    
  }

    if(outOfGuesses == 0){
        printf("You win!");
    }else{
        printf("Out of guesses!");
    }
  

  return 0;
}