//  Move all the negative numbers to LHS

// BEFORE SORTING
// 1 2 -3 5 3 -5 7 -6 -5 -6 -77 5 263 -213 5345 
// AFTER SORTING
// -213 -77 -3 -6 -5 -5 -6 7 3 5 5 263 2 5345 1

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,-3,5,3,-5,7,-6,-5,-6,-77,5,263,-213,5345};
    int low = 0 , i=0;
    int high = arr.size()-1;
    cout << "BEFORE SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    while(i != high)
    {
        if(arr[i] < 0)
        {
            swap(arr[i] , arr[low]);
            i++;
            low++;
        }
        else
        {
            swap(arr[i] , arr[high]);
            high--;
        }

    }
    cout << "AFTER SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}