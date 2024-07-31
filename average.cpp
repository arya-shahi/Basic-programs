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