// Solid half diamond

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * 
// * * *
// * *
// *



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want" << endl;
    cin >> n;
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}