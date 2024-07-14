// Numeric hollow half pyramid

// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5


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
        for(int j=0 ; j<i+1 ; j++)
        {
            if(i==0 || i==n-1)
            {
                cout << j+1 << " ";
            }
            else
            {
                if(j==0 || j==i)
                {
                    cout << j+1 << " ";
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