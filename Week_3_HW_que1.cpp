// 1. Sort colours OR Sort 0's , 1's and 2's in an Array
// Dutch National Flag Problem

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // METHOD:1 :- Simple Sorting
    // vector<int> arr{1,1,2,1,2,0,0,2,0,0,1,1,1,2};
    // vector<int> ans;
    // int count_0 = 0;
    // int count_1 = 0;
    // int count_2 = 0;

    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     if(arr[i] == 0)
    //     count_0++;
    //     else if(arr[i] == 1)
    //     count_1++;
    //     else
    //     count_2++;
    // }
    // cout << "SORTED ARRAY" << endl;
    // for(int i=0 ; i<count_0 ; i++)
    // {
    //     ans.push_back(0);
    // }
    // for(int i=0 ; i<count_1 ; i++)
    // {
    //     ans.push_back(1);
    // }
    // for(int i=0 ; i<count_2 ; i++)
    // {
    //     ans.push_back(2);
    // }
    // for(int i=0 ; i<ans.size() ; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // METHOD:2 :- Three Pointer Method
    vector<int> arr{1,1,2,1,2,0,0,2,0,0,1,1,1,2};
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid]  , arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }
    cout << "SORTED ARRAY" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}