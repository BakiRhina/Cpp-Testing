#include <iostream>

int main() {
  double d1, d2;
  char operation;

  std::cout << "Enter first Number: ";
  std::cin >> d1;

  std::cout << "Enter second Number: ";
  std::cin >> d2;

  std::cout << "Enter an operation (+, -, *, /): ";
  std::cin >> operation;

  switch (operation)
  {
  case '+':
    std::cout << "Result: " << d1 + d2 << std::endl;
    break;
  
  case '-':
    std::cout << "Result: " << d1 - d2 << std::endl;
    break;

  case '*':
    std::cout << "Result: " << d1 * d2 << std::endl;
    break;

  case '/':
    if (d2 != 0) {
      std::cout << "Result: " << d1 / d2 << std::endl;
      break;
    } else {
      std::cout << "Denominator cannot be null" << std::endl;
      break;
    }


  default:
    std::cout << "Invalid operator" << std::endl;
  }
  return 0;
}