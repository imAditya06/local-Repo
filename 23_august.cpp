#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of rows you want : ";
    cin >> n;
    int start = 1;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<2*i ; j++)
        {
            cout << " ";
        }
        for(int j =0; j<n-i ; j++)
        {
            cout << start << "*";
            start++;
        }
        cout << endl;
    }
}