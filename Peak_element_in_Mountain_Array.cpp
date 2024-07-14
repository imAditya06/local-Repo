// Linear Search 

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int main()
// {
//     vector<int> arr{0,10,5,2};
//     int maxNum = INT_MIN;
//     for(int i=0 ; i<arr.size() ; i++)
//     {
//         if(arr[i] > maxNum)
//         {
//             maxNum = arr[i];
//         }
//     }
//     cout << maxNum;
// }

//Binary Search

// input vector : 1,2,3,4,5,6,7,8,5,4,2,1,0
// output : 8 is the peak of mountain
#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            return arr[mid];
        }
        else if(arr[mid] < arr[mid-1])  // left search
        {
            end = mid -1;
        }
        else                           // right search
        {
            start = mid+1;
        }
        
    }
}
int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,5,4,2,1,0};
    int ans = findPeak(arr);
    cout << ans << " is the peak of mountain";
    
}