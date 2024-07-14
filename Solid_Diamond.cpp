#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF ROWS" <<endl;
    cin >> n;
    for(int i=0 ; i<n ; i+=1)
    {
        for(int j=0 ; j<(n-1-i) ; j+=1)
        {
            cout << " ";
        }
        for(int k=0 ; k<(i+1) ; k+=1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            cout << " ";
        }
        for(int k=0 ; k<(n-i) ; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}