#include<iostream>
#include<vector>
#include<set>
// #include<algorithm>
using namespace std;

// two pointer approach
int main()
{
    vector<int> arr{1,2,4,4,3,3,0,9,2,3};
    // sort(arr.begin() , arr.end());
    // sorting using bubble sort
    int size = arr.size();
    for(int i=0 ; i<size-1; i++)
    {
        int count = 0;
        for(int j=i ; j<size-1-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                count++;
                swap(arr[j] , arr[j+1]);
            }
        }
        if(count == 0)
        {
            break;
        }
    }
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }

    // int k,count=0;
    int k;
    cout << "enter value of k : ";
    cin >> k;
    int i=0 ; int j=1;

    // Not to print duplicate pairs
    set<pair<int,int> > ans;
    while(j < arr.size())
    {
        if(arr[j] - arr[i] == k)
        {
            // count++;
            ans.insert({arr[i] , arr[j]});
            i++;
            j++;
        }
        else if(arr[j] - arr[i] > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if(i==j)
        {
            j++;
        }
    }
    cout << "number of pairs found  : " << ans.size();

}


// using binary search

// class Solution {
// public:
// int binarySearch(vector<int>& arr, int start , int target)
// {
//     int end = arr.size()-1;
//     while(start <=end)
//     {
//         int mid = start + (end-start)/2;
//         if(target == arr[mid])
//         {
//             return mid;
//         }
//         else if(target > arr[mid])
//         {
//             // right search
//             start = mid+1;
//         }
//         else
//         {
//             // left search
//             end = mid-1;
//         }
//     }
//     return -1;
// }
//     int findPairs(vector<int>& nums, int k) {
//     sort(nums.begin() , nums.end());
//     set<pair<int,int> > ans;
//     for(int i=0 ; i<nums.size() ; i++)
//     {
//         if(binarySearch(nums , i+1 ,nums[i] +k) != -1)
//         {
//             ans.insert({nums[i] , nums[i] + k});
//         }
//     }
//     return ans.size();
//     }
// };




