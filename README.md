# C++ 101

This repository contains begineer C++ projects to learn the fundamentals of the language. It is also used to store notes about commands, theory and vocabulary.

### Commands

`std::cout`:

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
