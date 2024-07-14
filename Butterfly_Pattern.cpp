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
        for(int k=0 ; k<(2*(n-1-i)) ; k++)
        {
            cout << "  ";
        }
        for(int l=0 ; l<i+1 ; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
        {
            cout << "* ";
        }
        for(int k=0 ; k<(2*i) ; k++)
        {
            cout << "  ";
        }
        for(int l=0 ; l<n-i ; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}