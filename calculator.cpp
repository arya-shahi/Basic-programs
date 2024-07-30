#include <iostream>
using namespace std;
int main(){
     int a,b,x,y,z,w,r;
    cout << "enter the number:";
    cin >> a >> b;
    x = a|b;
    cout << "\nans is :" << x;
    y = a^b;
    cout << "\nans is :" << y;
    z = a&b;
    cout << "\nans is :" << z;
    w = a << 1;
    cout << "\nans is :" << w;
    r = a >> 1;
    cout << "\nans is :" << r;

    return 0;
}