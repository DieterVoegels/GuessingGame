#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  int guess = 0;
  int guessNumber = 0;
  bool playAgain = true;
  char YesNo;
  while(playAgain){
  bool guessed = false;
  srand(time(NULL));
  int random = rand() % 100 + 1;
  cout << "Guess a number between 1 and 100.";
  while(!guessed){
    cin >> guess;
  if(guess > random){
    cout << "Your number is larger than the random number.";
  }
  else if (guess < random){
    cout << "Your number is smaller than the random number.";
  }
  else{
    guessed = true;
    guess++;
    cout << "You guessed the correct answer! It took you " << guessNumber << " times to guess it.";
    cout << "Do you want to play again Y/N?";
    cin >> YesNo;
    if (YesNo == 'Y'){
      playAgain = true;
    }
    else if (YesNo == 'N'){
      playAgain = false;
    }
    else{
      cout << "Enter a Y for yes or N for no.";
    }
  }
  guessNumber++;
  }
  }
  
  return 0;
}
