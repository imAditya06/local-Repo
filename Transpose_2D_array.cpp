// Transpose of an array 
// Accessing row-wise 
// 1 2 3
// 4 5 6
// 7 8 9

// TRANSPOSE OF GIVEN ARRAY IS :
// 1 4 7
// 2 5 8
// 3 6 9

#include<iostream>
using namespace std;
int main()
{

    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}}; 
    int row=3;
    int column=3;   //declaration + initialization

    //Accessing row-wise 
    cout << "Accessing row-wise " << endl;
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    cout << endl;

    cout << "TRANSPOSE OF GIVEN ARRAY IS : "  << endl;

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            if( i < j)
            {
                swap(arr[i][j] , arr[j][i]);
            }
        }
    } 

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    cout << endl;   
}    