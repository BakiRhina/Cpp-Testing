#include <iostream>
#include <stdlib.h>
#include <time.h>


int main() {
  int random_number, guess;

  /* 
  - Initialize random seed.
  - In this case the seed is the current time,
  so every time is called will be different.
  */
  srand(time(NULL));
  random_number = rand()%10 + 1 ;

  while (true) {
    std::cout << "Guess the number between 1 and 10: ";
    std::cin >> guess;
    if (guess == random_number) {
      std::cout << "Correct!" << std::endl;
      break;
    } else {
      std::cout << "Wrong, try again";
    }
  }
}