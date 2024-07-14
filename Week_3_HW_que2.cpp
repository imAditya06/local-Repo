// Move all Negative numbers to the left hand side of array
// SORTED ARRAY
// -11 -652 -43 -5 -1 9 8 4 8 6 0 4 1

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,4,6,8,4,8,9,-1,-5,-43,-652,0,-11};
    int start = 0;
    int end = arr.size() -1;
    while(start != end)
    {
        if(arr[start] < 0 )
        start++;
        else
        {
            swap(arr[start] , arr[end]);
            end--;
        }
    }
    cout << "SORTED ARRAY" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}


