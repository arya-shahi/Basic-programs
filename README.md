
# AIM

Downloading and installation of VS Code (Hello World and Calculator)

## Theory

1. In this experiment, we installed VS Code and MinGW (from SourceForge).
2. The program includes:
   - Printing "Hello World"
   - Performing bitwise operations
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

### B) Bitwise Operations Calculator

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, z, w, r;

    cout << "Enter the number: ";
    cin >> a >> b;

    x = a | b;
    cout << "\nBitwise OR result: " << x;

    y = a ^ b;
    cout << "\nBitwise XOR result: " << y;

    z = a & b;
    cout << "\nBitwise AND result: " << z;

    w = a << 1;
    cout << "\nLeft shift result: " << w;

    r = a >> 1;
    cout << "\nRight shift result: " << r;

    return 0;
}
```

### C) Average and Grading

```cpp
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5, avg;
    
    cout << "Enter 5 numbers: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    avg = (m1 + m2 + m3 + m4 + m5) / 5;

    if (avg > 80)
        cout << "Grade: A+";
    else if (avg > 60 && avg <= 80)
        cout << "Grade: B++";
    else if (avg <= 60 && avg >= 0)
        cout << "Grade: C";
    
    return 0;
}
```

## Conclusion

In this experiment, we learned about basic programs in C++.

---
