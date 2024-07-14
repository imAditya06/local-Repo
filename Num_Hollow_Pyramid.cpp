// Numeric hollow pyramid

// Enter the number of rows you want
// 9

//         1
//        1 2
//       1   3
//      1     4
//     1       5
//    1         6
//   1           7
//  1             8
// 1 2 3 4 5 6 7 8 9





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
        for(int j=0 ; j<n-1-i ; j++)
        {
            cout << " ";
        }
        for(int k=0 ; k<i+1 ; k++)
        {
            if(i==0 || i==n-1)
            {
                cout << k+1 << " ";
            }
            else
            {
                if(k == 0)
                {
                    cout << k+1 << " ";
                }
                else
                {
                    if(k==i)
                    {
                        cout << k+1;
                    }
                    else
                    {
                        cout <<"  ";
                    }
                }
            } 
        }
        cout << endl;
    }
}