# C++ 101

This repository contains begineer C++ projects to learn the fundamentals of the language. It is also used to store notes about commands, theory and vocabulary.

### Commands

`std::cout`: 

- From the `<ostream>` library. In C++11 and C++14 `cout` and `cin` can be used from `<iostream>`. In C++98 it might not be included, so to make a portable code might as well add it, if the program needs to run in different machines and compilers.
- Represents the **standard output stream** oriented to narrow characters (of type **char**).
- In C, it corresponds to `stdout`.
- **char** values can be written as formatted data using `<<` or as unformatted data, using member functions such as **write**.

Example:

#include <iostream>
```
int main() {
  std::cout << "Hello World" << std::endl;
  return 0; // It is optional in C++, the compilers automatically include it.
}
```

`std::cin`:

`std::wcout` and `std::wcin`:

`std::endl`:

`flush()`:

`while(){}`:

- Use a while loop when you want to check the loop condition **before** entering the loop body.
- It may be more suitable when there is a chance that the loop body might not need to be executed at all.
- If the loop condition is initially false, the loop body won't be executed.

Example:
```
int i = 0;
while (i < 5) {
    // Loop body
    std::cout << i << std::endl;
    i++;
}
```

  `do{}while();`

- Use a **do-while** loop when you want to ensure that the loop body is executed **at least once before checking** the loop condition.
- It's useful when you want to guarantee that a block of code runs before the condition is tested.
- If the loop condition is initially false, the loop body **will still execute once**.

Example:

```int i = 0;
do {
    // Loop body
    std::cout << i << std::endl;
    i++;
} while (i < 5);
```


### Objects and vocabulary

**Constructor**:

**return 0;**:

**Stream buffer**:

**Data stream**:

**Flush**:

### C++ architecture

**C++ Versions**:

**Hierarchy of C++**
