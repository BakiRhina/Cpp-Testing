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

  

}
