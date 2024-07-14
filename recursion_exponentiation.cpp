#include<iostream>
using namespace std;
int solve(int n)
{
    // base condition
    if(n == 0)
    {
        return 1;
    }

    // recursive relation
    int ans = 2*solve(n-1);
    return ans;
}
int main()
{
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    int ans = solve(n);
    cout << "2 to the power " << n << " is: " << ans;
}