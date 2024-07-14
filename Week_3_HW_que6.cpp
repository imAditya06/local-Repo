// WavePrint of a 2-D Array 

// i/p:- 1  2  3  4 
//       5  6  7  8 
//       9 10 11 12
// Row-Wise waveprint :
// 1 2 3 4 8 7 6 5 9 10 11 12


#include<iostream>
#include<vector>
using namespace std;
void wavePrint(vector<vector<int> >& arr , int row , int col )
{
    vector<int> ans;
    for(int i=0 ; i<row ; i++)
    {
        if(i%2==0)
        {
            for(int j=0 ; j<col ; j++)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            for(int j=col-1 ; j>=0 ; j--)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    cout << "Row-Wise waveprint :" << endl;

    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector< vector<int> > arr{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}};
    int row = arr.size();
    int col = arr[0].size();
    wavePrint(arr , row , col);
    
}