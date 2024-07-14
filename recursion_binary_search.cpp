// #include <iostream>
// #include <vector>
// using namespace std;
// bool binarySearch(vector<int> &arr, int target)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     int mid;
    

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (target == arr[mid])
//         {
//             return true;
//         }
//         if (target > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     return false;
// }
// int main()
// {
//     vector<int> arr = {10, 20, 30, 40, 50};

//     int target;
//     cout << "enter the target: ";
//     cin >> target;

//     bool ans = binarySearch(arr, target);
//     if (ans)
//     {
//         cout << "target found";
//     }
//     else
//     {
//         cout << "target not found";
//     }
// }




#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int>& arr ,int start, int end, int& target)
{
    if(start>end)
    {
        return 0;
    }

    int mid = start+(end-start)/2;

    if(target == arr[mid])
    {
        return mid;
    }
    if(target > arr[mid])
    {
        solve(arr,mid+1,end,target);
    }
    else
    {
        solve(arr,start,mid-1,target);
    }

    
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int start=0;
    int end = arr.size()-1;
    

    int target;
    cout << "enter target: ";
    cin >> target;
    int ans = solve(arr,start,end,target);
    if(ans)
    {
        cout << "target found at " << ans;
    }
    else
    {
        cout << "not found";
    }
}