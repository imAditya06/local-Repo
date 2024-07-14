#include<iostream>
using namespace std;
int solve(int n)
{
    // base condition
    if(n==1 || n==2)
    {
        return n;
    }

    // recursive relation
    return solve(n-1) + solve(n-2);
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int ans = solve(n);

    cout << "to reach " << n << "th step number of ways are : " << ans;
}