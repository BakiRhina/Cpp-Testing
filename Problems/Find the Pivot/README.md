# Insights from this problem


## Different types of sqrt provided by the std library

`std::sqrt` -> integer type
`std::sqrtf` -> float type
`std::sqrtl` -> long type

More information: `https://en.cppreference.com/w/cpp/numeric/math/sqrt` 


## Floating point to integer type conversion TYPE CASTING

Instead of:

```c++

float varA = 9.99;
int varB = (int)varA;
```

Which is the old way inherited from C, C++ offers a superior alternative that enhances safety and handlers called `static_cast`:

```c++

float varA = 9.99;
int varB = static_cast<int>(varA);
```


**To avoid**. The following approach will rise a warning as you are losing a decimal point:

```c++

int varA = varB;
```
