# C++ 101

This repository contains begineer C++ projects to learn the fundamentals of the language. It is also used to store notes about commands, theory and vocabulary.

## c++ classes

In C++, a class is a fundamental building block that allows you to encapsulate data and behavior into a single unit. It serves as a **blueprint** for creating objects, which are **instances** of the class. Here's a breakdown of key concepts related to C++ classes.


### Declaration

To declare a class, use the `class` keyword, followed by the class name and a set of curly braces containing member variables and member functions.

```cpp

class MyClass {
public:
    // Member variables
    int myInteger;
    double myDouble;

    // Member functions
    void printValues();
};
```

### Access Specifiers
C++ provides three access specifiers: public, private, and protected. These determine the visibility of class members.

public: Members are accessible from outside the class.
private: Members are only accessible within the class.
protected: Similar to private, but accessible in derived classes.

```cpp

class Example {
public:
    // Public members
    int publicVar;

private:
    // Private members
    double privateVar;

protected:
    // Protected members
    char protectedVar;
};
```

### Member Functions

Member functions define the behavior of a class. They are declared within the class and defined outside it using the scope resolution operator ::.

```cpp

void MyClass::printValues() {
    cout << "Integer: " << myInteger << ", Double: " << myDouble << endl;
}
```

### Constructors and Destructors

Constructors initialize object properties when an object is created. Destructors clean up resources when an object goes out of scope.

```cpp

class Person {
public:
    // Constructor
    Person(string name, int age);

    // Destructor
    ~Person();

private:
    string name;
    int age;
};

// Constructor definition
Person::Person(string n, int a) : name(n), age(a) {
    // Initialization code
}

// Destructor definition
Person::~Person() {
    // Cleanup code
}
```

### Object Creation and Usage

Objects are instances of classes. They are created using the new keyword, and their members are accessed using the dot (.) operator.

```cpp

int main() {
    // Creating an object
    MyClass myObject;

    // Accessing members
    myObject.myInteger = 42;
    myObject.myDouble = 3.14;
    myObject.printValues();

    return 0;
}
```

### Inheritance

Inheritance allows a class to inherit properties and behaviors from another class. The derived class (subclass) can access public and protected members of the base class (superclass).

```cpp

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};
```


## Notes

### Commands

#### std::cout: 

- From the `<ostream>` library. In C++11 and C++14 `cout` and `cin` can be used from `<iostream>`. In C++98 it might not be included, so to make a portable code might as well add it, if the program needs to run in different machines and compilers.
- Represents the **standard output stream** oriented to narrow characters (of type **char**).
- In C, it corresponds to `stdout`.
- **char** values can be written as formatted data using `<<` or as unformatted data, using member functions such as **write**.

Example:

#include <iostream>
```cpp
int main() {
  std::cout << "Hello World" << std::endl;
  return 0; // It is optional in C++, the compilers automatically include it.
}
```

#### std::cin:

- From the `<istream>` library. In C++11 and C++14 `cout` and `cin` can be used from `<iostream>`. In C++98 it might not be included, so to make a portable code might as well add it, if the program needs to run in different machines and compilers.
- Controls the input of a **stream buffer** (See vocabulary, stream buffer).
- Any formatted input operation on `std::cin` forces a call to `std::cout.flush()` if any **char** are pending for output.

Example:

```cpp
#include <iostream>
#include <ostream>  // Only necessary in C++98,3
#include <istream>  // Only necessary in C++98,3

int main() {
  double d1, d2;
  char operation;

  std::cout << "Enter first Number: ";
  std::cin >> d1;

  std::cout << "Enter second Number: ";
  std::cin >> d2;

  std::cout << "Enter an operation (+, -, *, /): ";
  std::cin >> operation;

  [...]
```


`std::wcout` and `std::wcin`:

`std::endl`:

`flush()`:

#### while(){}:

- Use a while loop when you want to check the loop condition **before** entering the loop body.
- It may be more suitable when there is a chance that the loop body might not need to be executed at all.
- If the loop condition is initially false, the loop body won't be executed.

Example:
```cpp
int i = 0;
while (i < 5) {
    // Loop body
    std::cout << i << std::endl;
    i++;
}
```

#### do{}while();

- Use a **do-while** loop when you want to ensure that the loop body is executed **at least once before checking** the loop condition.
- It's useful when you want to guarantee that a block of code runs before the condition is tested.
- If the loop condition is initially false, the loop body **will still execute once**.

Example:

```cpp
int i = 0;
do {
    // Loop body
    std::cout << i << std::endl;
    i++;
} while (i < 5);
```


### Objects and vocabulary

**Constructor**: Special member functions that are called automatically when an object is created. They are used to initialize the object's member variables.

```cpp

class Car {
public:
  std::string model;
  int year;

  // Constructor to initialize model and year
  Car(const std::string& modelVal, int yearVal) : model(modelVal), year(yearVal) {}

  // Destructor (can be empty for now)
  ~Car() {}
};
```

**return 0;**:

**Stream buffer**:

**Data stream**:

**Flush**:
