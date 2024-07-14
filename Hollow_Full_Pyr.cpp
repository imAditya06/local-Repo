#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows you want" <<endl;
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            cout << "  ";
        }
        for(int k=0 ; k<(2*i+1) ; k++)
        {
            if(i==0 || i==n-1)
            {
                cout << "* ";
            }
            else{
                if(k==0 || k==(2*i))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}