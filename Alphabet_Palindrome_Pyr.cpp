//Alphabet Palindrome Pyramid
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF ROWS YOU WANT" << endl;
    cin >> n;
    cout << endl;
    
    for(int i=0 ; i<n ; i++)
    {
        int j;
        for(j=0 ; j<(i+1) ; j++)
        {
            char ch=j+65;
            cout << ch << " ";
        }
        
        for(j=i ; j>=1 ; j--)
        {
            char ch1=j+64;
            cout << ch1 << " ";
        }
        cout <<endl;
    }
}