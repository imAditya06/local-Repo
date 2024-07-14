// Fancy pattern #1

// Enter the number of rows you want 
// 8

// * * * * * * * * 1 * * * * * * * *
// * * * * * * * 2 * 2 * * * * * * *
// * * * * * * 3 * 3 * 3 * * * * * *
// * * * * * 4 * 4 * 4 * 4 * * * * *
// * * * * 5 * 5 * 5 * 5 * 5 * * * *
// * * * 6 * 6 * 6 * 6 * 6 * 6 * * *
// * * 7 * 7 * 7 * 7 * 7 * 7 * 7 * *
// * 8 * 8 * 8 * 8 * 8 * 8 * 8 * 8 *



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows you want "  << endl;
    cin >> n; 
    cout << endl;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ; j++)
        {
            cout << "* ";
        }
        for(int k=0 ; k<i+1 ; k++)
        {
            if(k==i)
            {
                cout << i+1 << " ";
            }
            else{
                cout << i+1 << " " << "* ";
            }  
        }
        for(int l=0 ; l<n-i ; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}