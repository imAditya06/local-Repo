// Numeric full pyramid

// Enter the number of rows you want
// 5

//         1
//       2 3 2
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want" << endl;
    cin >> n ;
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            cout << "  ";
        }
        int m=i+1;
        for(int k=0 ; k<i+1 ; k++)
        {
            
            cout << m << " ";
            m=m+1;    
        }
        int a=m-2;
        for(int l=0 ; l<i ; l++)
        {
            cout << a << " ";
            a=a-1;
        }
        cout << endl;
    }
}