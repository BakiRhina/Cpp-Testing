#include <iostream>

struct Operands {
  double d1, d2;
  char operation;
  
  Operands() {
    std::cout << "Enter first Number: ";
    std::cin >> d1;

    std::cout << "Enter second Number: ";
    std::cin >> d2;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
  }
};

Operands op; 

int main() {
  switch (op.operation)
  {
  case '+':
    std::cout << "Result: " << op.d1 + op.d2 << std::endl;
    break;
  
  case '-':
    std::cout << "Result: " << op.d1 - op.d2 << std::endl;
    break;

  case '*':
    std::cout << "Result: " << op.d1 * op.d2 << std::endl;
    break;

  case '/':
    if (op.d2 != 0) {
      std::cout << "Result: " << op.d1 / op.d2 << std::endl;
      break;
    } else {
      std::cout << "Denominator cannot be null" << std::endl;
      break;
    }


  default:
    std::cout << "Invalid operator" << std::endl;
  }
}
