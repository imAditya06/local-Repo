#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "number 1 = ";
    cin >> x;
    cout << "number 2 = ";
    cin >> y;
    
    // swapping using bitwise XOR
    // x = x^y;
    // y = x^y;
    // x = x^y;

    // cout << "Number 1 = " << x << " " << "Number 2 = " << y<<endl;

    //swapping without using third variable using (+ , -)
    // x = x+y;
    // y = x-y;
    // x = x-y;

    // cout << "Number 1 = " << x << " " << "Number 2 = " << y<<endl;

    //swapping without using third variable uisng (* , /)
    // x=x*y;
    // y=x/y;
    // x=x/y;

    // cout << "Number 1 = " << x << " " << "Number 2 = " << y<<endl;

    //swapping using temporary variable

    // int temp = x;
    // x = y;
    // y = temp;

    // cout << "Number 1 = " << x << " " << "Number 2 = " << y<<endl;

    //swapping using swap(a,b) function

    swap(x , y);
    cout << "Number 1 = " << x << " " << "Number 2 = " << y<<endl;

}
