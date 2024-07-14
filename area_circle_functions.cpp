// area of circle using functions

// enter radius : 100.23
// AREA = 31544.6

#include<iostream>
using namespace std;
float getArea(float rad)
{
    return 3.14*rad*rad;
}
int main()
{
    float rad;
    cout << "enter radius : ";
    cin >> rad;
    float area = getArea(rad);  //passing arguments
    cout << "AREA = " << area;
    
}