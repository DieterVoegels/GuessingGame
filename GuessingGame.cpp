#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
  Program: Guessing Game. Guess the random number between 1 and 100;
  Author: Dieter Voegels
  Date: 9/15/17
*/
using namespace std;

int main(){
  //variables
  int guess = 0;
  int guessNumber = 0;
  bool playAgain = true;
  char YesNo;
  //play again loop
  while(playAgain){
    //initialization
  bool guessed = false;
  srand(time(NULL));
  int random = rand() % 100 + 1;
  cout << "Guess a number between 1 and 100.";
  //Guessing loop
  while(!guessed){
    cin >> guess;
    //is larger
  if(guess > random){
    cout << "Your number is larger than the random number.";
  }
  //is smaller
  else if (guess < random){
    cout << "Your number is smaller than the random number.";
  }
  //correct number and ask to play again
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
  //increase number of guesses
  guessNumber++;
  }
  }
  
  return 0;
}
