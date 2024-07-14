#include<iostream>
using namespace std;
int fact(int n)
{
    // base condition
    if(n == 1)
    {
        return 1;
    }

    //recursive relation
    int ans = n*fact(n-1);
    return ans;
}
int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;

    int ans = fact(n);
    cout << "factorial of "<< n << " is: " << ans;
}