#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER OF ROWS YOU WANT" <<endl;
    cin >> n ;
    //PRINTING UPPER HOLLOW TRIANGLE

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<(n-i-1) ; j++)
        {
            cout << " ";
        }
        for(int k=0 ; k<(2*i+1) ; k++)
        {
            if(k==0 || (k==2*i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout <<endl;
    }

    //PRINTING LOWER HOLLOW TRIANGLE

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)
        {
            cout << " ";
        }
        for(int k=0 ; k<(2*n-2*i-1) ; k++)
        {
            if(k==0 || k==(2*n-2*i-2))
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}