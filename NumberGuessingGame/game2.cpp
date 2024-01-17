#include <iostream>
#include <stdlib.h>
#include <time.h>


int main() {
  int number, guess;

  srand(time(NULL));
  number = rand() % 10 + 1;

  do {
    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> guess;

    if (guess > number) {
      std::cout << "Number is smaller, try again";
    } 
    else if (guess < number) {
      std::cout << "Number is bigger, try again";
    }
  } while (number != guess); //Condition to be met, if not, break (means it guessed the number correctly)

  std::cout << "Correct!" << std::endl;
  return 0;
}
