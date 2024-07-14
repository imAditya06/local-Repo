#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows/columns" <<endl ;
    cin >> n;

    for(int i=0 ; i<n ; i+=1)
    {
        for(int j=0 ; j<(n-i) ; j=j+1)
        {
            cout << j+1;
            cout << " ";
        }
        cout << endl;
    }
}