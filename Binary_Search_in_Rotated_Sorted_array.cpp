#include<iostream>
#include<vector>
using namespace std;
int findPivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start +(end-start)/2;
        if(start == end)
        {
            return start;
        }
        else if(arr[mid] > arr[mid+1] && mid+1 <= end)
        {
            return mid;     
        }
        else if(arr[mid-1] > arr[mid] && mid-1 >= 0)
        {
            return mid-1;
        }
        else if(arr[mid] > arr[mid-1])
        {
            // we are at left
            // search right
            start = mid+1;
        }
        else if(arr[mid] > arr[mid-1])   
        {
            // we are at right 
            // search left
            end = mid-1;
        } 
    }
    return -1;
}
int binarySearch(vector<int> arr , int start , int end , int target)
{
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(target == arr[mid])
        {
            return mid;
        }
        else if(target > arr[mid])
        {
            // right search
            start = mid+1;
        }
        else if(target < arr[mid])
        {
            //search left
            end = mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,3};
    int pivot = findPivotElement(arr);
    int target,ans;
    cout << "enter the number you want to find : ";
    cin >> target;
    if(target == arr[pivot])
    {
        ans = pivot;
    }
    else if(target < arr[0])
    {
        ans = binarySearch(arr , pivot+1 , arr.size()-1 , target);
    }
    else if(target > arr[0])
    {
        ans = binarySearch(arr , 0 , pivot-1 , target);
    }
    if(ans != -1)
    cout << "element "<< arr[ans] << " found at index " << ans;
    else
    cout << "element not found";
    return 0;
}