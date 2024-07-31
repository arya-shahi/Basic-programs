AIM :- downloading and installation of vs code ( hello world and calculator) <br>

Theory:- <br>

1). In this we installed vs code and ming w (from source forge) <br>
2). in this program we have printed hello world and find the sum , subtarction , multiplication and division of two numbers (user input), taking average of 5 inputs and grading them <br>
CODE:- <br>
A) <br>
#include <iostream>
using namespace std;
int main(){

    cout<< "HELLO WORLD";
    return 0;
} <br>

 B) <br>
#include <iostream><br>
using namespace std;<br>
int main(){<br>
     int a,b,x,y,z,w,r;<br>
    cout << "enter the number:";<br>
    cin >> a >> b;<br>
    x = a|b;<br>
    cout << "\nans is :" << x;<br>
    y = a^b;<br>
    cout << "\nans is :" << y;<br>
    z = a&b;<br>
    cout << "\nans is :" << z;<br>
    w = a << 1;<br>
    cout << "\nans is :" << w;<br>
    r = a >> 1;<br>
    cout << "\nans is :" << r;<br>

    return 0; <br>
} 
<br>
C) <br>
#include <iostream>
using namespace std;
int main() {
    int m1,m2,m3,m4,m5,avg;
    cout << "enter the num :";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    avg = (m1+m2+m3+m4+m5)/5;
    if (avg > 80)
    cout << "it is A+ grade";
    else if (avg > 60 and avg<80)
    cout <<"it is B++ grade";
    else if (avg < 60 and avg > 0 )
    cout <<"it is C grade";
    

    return 0;
}

Conclusion:
<br>
In this experiment we learned about basic programs in c++ <br>
