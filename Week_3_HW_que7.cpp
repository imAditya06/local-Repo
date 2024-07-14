// Spiral print of a 2-D Array

// i/p:-1  2  3  4
//      5  6  7  8 
//      9  10 11 12
//      13 14 15 16
// SPIRAL PRINT : 
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
     

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> > arr{{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};

    int row = arr.size();
    int col = arr[0].size();
    vector<int> ans;

    int startRow = 0;
    int endCol = col-1;
    int endRow = row-1;
    int startCol = 0;
    
    int count = 0;
    while(count < row*col)
    {
        // Print starting row 
        for(int i=startCol; i<=endCol && count<row*col ; i++)
        {
            ans.push_back(arr[startRow][i]); 
            count++;
        }
        startRow++;


        //Print ending column
        for(int i=startRow ; i<=endRow && count<row*col ; i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;


        //Print ending Row
        for(int i=endCol ; i>=startCol && count<row*col ; i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        //Print starting column
        for(int i=endRow ; i>=startRow && count<row*col ; i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;

    }

    cout << "SPIRAL PRINT : " << endl;
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}