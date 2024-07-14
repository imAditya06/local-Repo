#include<iostream>
using namespace std;
int main()
{
    int n,m ;   // n=number of rows , m=number of columns
    cout << "Enter numbet of rows" <<endl;
    cin >> n;
    cout << "Enter number of columns" << endl;
    cin >> m;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(i==0 || (i==n-1))
            {
                cout << "* ";
            }
            else
            {
                if(j==0 || (j==m-1))
                {
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}