// find an element in a rotated sorted array

#include<iostream>
#include<vector>
using namespace std;
int find_pivot_element(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[mid+1] && mid+1 < arr.size())
        {
            return mid;
        }
        else if(arr[mid] < arr[mid-1] && mid-1 >=0)
        {
            return mid-1;
        }
        else if(arr[mid] > arr[start])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

int find_target(vector<int> arr , int pivot , int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    if(target < arr[start])
    {
        start = pivot + 1;
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
            else
            {
                // left search
                end = mid-1;
            }
        }
    }
    else if(target == arr[mid])
    {
        return mid;
    }
    else
    {
        end = mid-1;
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
            else
            {
                // left search
                end = mid-1;
            }
        }

    }
    return -1;

}
int main()
{
    vector<int> arr{4,5,6,7,0,1,2};
    int pivot = find_pivot_element(arr);

    // if(pivot != -1)
    // {
    //     cout << "pivot element " << arr[pivot] << " is at index " << pivot;
    // }
    // else
    // {
    //     cout << "no pivot element found";
    // }

    int target =0;
    int ans = find_target(arr,pivot,target);
    if(ans != -1)
    {
        cout << "element found at index " << ans;
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}