// FANCY PATTERN
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF ROWS YOU WANT" <<endl;
    cin >> n;
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<(i+1) ; j++)
        {
            if(j==i)
            {
                cout << i+1;
            }
            else
            {
                cout <<i+1 << "*";

            }
        }
        cout << endl;
    }

    for(int i=0 ; i<n ;i++)
    {
        for(int j=0 ; j<(n-i) ; j++)
        {
            if(j==(n-i-1))
            {
                cout << n-i;
            }
            else
            {
                cout <<n-i <<"*";
            }
        }
        cout << endl;
    }

}