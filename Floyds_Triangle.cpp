// Floyd's Triangle

// Enter the number of rows you want
// 9

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 
// 22 23 24 25 26 27 28 
// 29 30 31 32 33 34 35 36 
// 37 38 39 40 41 42 43 44 45

#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout << "Enter the number of rows you want" << endl;
    cin >> n;
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

}