// sorting 0's and 1's in an array

// BEFORE SORTING
// 0 1 1 0 0 1 0 1 0 0 1 1 1 1 0 0
// AFTER SORTING
// 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{0,1,1,0,0,1,0,1,0,0,1,1,1,1,0,0};
    int start = 0;
    int end = arr.size() -1;
    int i=0;

    cout << "BEFORE SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    while(i != end)
    {
        if(arr[i] == 0)
        {
            swap(arr[i] , arr[start]);
            i++;
            start++;
        }
        else
        {
            swap(arr[i] , arr[end]);
            end--;
        }
    }

    cout << "AFTER SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}