
# AIM

Downloading and installation of VS Code and performing basic programs (Hello World, Calculator and average)

## Theory

1. In this experiment, we installed VS Code and MinGW (from SourceForge).
2. The program includes:
   - Printing "Hello World"
   - Calculating sum, subtraction, multiplication, and division of two numbers (user input)
   - Taking the average of 5 inputs and grading them

## CODE

### A) Hello World

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "HELLO WORLD";
    return 0;
}
```

### B) Calculator

```cpp
#include <iostream>
using namespace std;

int main() {   
    float num1,num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "The sum is: " << num1+num2 << "\n";;
    cout << "The difference is: " << num1-num2 << "\n";;
    cout << "The division is: " << num1/num2 << "\n";;
    cout << "The product is: " << num1*num2 << "\n";;


    return 0;
}
```




## Conclusion

In this experiment, we learned about basic programs in C++.

---
