#include<iostream>
using namespace std;
void reverseCount(int n)
{
    //Tail Recursion
    // base condition
    if(n == 0)
    {
        return;
    }

    //processing

    cout << n << " ";

    // recursive relation

    reverseCount(n-1);

}
void forwardCount(int n)
{
    //Head Recursion
    // base condition
    if(n == 0)
    {
        return;
    }

    // recursive relation

    forwardCount(n-1);

    //processing

    cout << n << " ";
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    cout << "forward counting is : ";
    forwardCount(n);
    cout << endl;
    cout << "reverse counting is : ";
    reverseCount(n);

}