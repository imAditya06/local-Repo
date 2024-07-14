#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows" <<endl;
    cin >> n;
    for(int i=0 ; i<n ; i+=1)
    {
        for(int j=0 ; j<(i+1) ; j++)
        {
            cout << j+1 ;
            cout << " " ;
        }
        cout <<endl;
    }
}
