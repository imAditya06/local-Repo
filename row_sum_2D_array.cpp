// Sum of all elements in a row and column
// Enter the inputs in array : 
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7 
// 5 6 7 8

// Your array is :
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// 4 5 6 7
// 5 6 7 8

// SUM OF EACH ROW IS :
// 10 14 18 22 26 

// Your column-wise array is :
// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7
// 4 5 6 7 8

// Column-wise sum is :
// 15 20 25 30


#include<iostream>
using namespace std;
int main()
{
    int arr[5][4];   // ARRAY DECLARATION
    int rows=5;
    int columns=4;

    // TAKING INPUTS IN 2D-ARRAY
    cout << "Enter the inputs in array : " << endl;
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<columns ; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // PRINTING THAT ARRAY
    cout << "Your array is : " << endl;
    for(int i=0 ; i<rows ; i++)
    {
        for(int j=0 ; j<columns ; j++)
        {
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //TAKING SUM OF ELEMENTS IN EACH ROW
    cout << "SUM OF EACH ROW IS : "<<endl;

    for(int i=0 ; i<rows ; i++)
    {
        int ans=0;
        for(int j=0 ; j<columns ; j++)
        {
            ans = ans +arr[i][j];
        }
        cout << ans << " ";
    }
    cout << endl << endl;

    //PRINTING ABOVE ARRAY COLUMN WISE
    cout << "Your column-wise array is : " << endl;
    for(int i=0 ; i<columns ; i++)
    {
        for(int j=0 ; j<rows ; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Printing column-wise sum;
    cout << "Column-wise sum is : " << endl;
    for(int i=0 ; i<columns ; i++)
    {
        int sum=0;
        for(int j=0 ; j<rows ; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
    

}