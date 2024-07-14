#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want : ";
    cin >> n;
    cout << endl;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<2*i+1 ; j++)
        {
            if(j==0 || j==2*i)
            {
                cout << "*";
            }
            else
            {
                if(j<=i)
                {
                    cout << j;
                }
                else
                {
                    cout << 2*i-j;
                }
            }
        }
        cout << endl;   
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n+1-2*i ; j++)
        {
            if(j==0 || j==n-2*i)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }  
}