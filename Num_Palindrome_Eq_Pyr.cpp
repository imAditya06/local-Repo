// Numeric palindrome equilateral pyramid

//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1 

      



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
        for(int j=0 ; j<n-1-i ; j++)
        {
            cout << "  ";
        }
        for(int k=0 ; k<i+1 ; k++)
        {
            cout << k+1 <<" ";
        }
        for(int l=i ; l>=1 ; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}