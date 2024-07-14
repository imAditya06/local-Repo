#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(target == arr[mid])
        {
            return mid;
        }
        else if(target == arr[mid-1] && mid-1 >=start)
        {
            return mid-1;
        }
        else if(target == arr[mid+1] && mid+1<=end)
        {
            return mid+1;
        }
        else if(target > arr[mid])
        {
            // right search
            start = mid+1;
        }
        else
        {
            // left search
            end = mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{10,3,40,20,50,80,70};
    int target;
    cout << "enter the element you want to find : ";
    cin >> target;
    int ans = binarySearch(arr , target);
    if(ans != -1)
    {
        cout << "element " << target << " found at index " << ans;
    }
    else
    {
        cout << "element not found";
    }
}