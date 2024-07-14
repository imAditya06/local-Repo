#include<iostream>
using namespace std;

int solve(int n) {
    // base condition
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    // recursive call
    return solve(n - 1) + solve(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Here is the Fibonacci series: ";
    for (int i = 1; i <= n; ++i) {
        cout << solve(i) << " ";
    }
    cout << endl;

    return 0;
}

