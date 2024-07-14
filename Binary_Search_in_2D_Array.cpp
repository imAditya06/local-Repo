// Binary Search in 2D Array

// Enter number you want to find : 20
// element 20 found at index [4][3]

#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<vector<int> >& arr , int row  , int col,int target)
{
    int start = 0;
    int end = row*col - 1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;
        if(target == arr[rowIndex][colIndex])
        {
            return mid;
        }
        else if(target > arr[rowIndex][colIndex])
        {
            // right search
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<vector<int> > arr = {{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16},
    {17,18,19,20}};
    int row = arr.size();
    int col = arr[0].size();
    int target;
    cout << "Enter number you want to find : ";
    cin >> target;
    int ans = binarySearch(arr , row , col , target);
    if(ans != -1)
    {
        cout << "element " << target << " found at index [" << ans/col << "][" << ans%col << "]";
    }
    else
    {
        cout << "element not found";
    }

}