// Find the odd occuring element in an array

// input array = {1,1,2,2,3,3,4,4,3,600,600,4,4}
// output = element 3 found at index 8


#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start +(end -start)/2;
        if(start == end)
        {
            if((mid+1 >= end && arr[mid] == arr[mid+1]) || (mid-1 >=0 && arr[mid] == arr[mid-1]))
            return -1;
            else 
            return mid;
        }
        else if(mid%2 == 0)
        {
            if(arr[mid] == arr[mid+1])
            {
                // we are at left side
                //search right
                start = mid+1;
            }
            else if(arr[mid] != arr[mid+1])
            {
                // we got the ans or we are at right side of ans
                // so we have to search left without loosing arr[mid] 
                // since arr[mid] may be the answer
                end = mid;
            }
        }
        else if(mid%2 != 0)
        {
            if(arr[mid] == arr[mid-1])
            {
                // we are at left side of ans
                // search right
                start = mid+1;
            }
            else if(arr[mid] != arr[mid-1])
            {
                // arr[mid-1] may be the answer or we are at right side of ans
                // search left
                end = mid-1;
            }
        }
    }
}
int main()
{
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = binarySearch(arr);
    if(ans != -1)
    {
        cout << "element " << arr[ans] << " found at index " << ans;
    }
    else
    {
        cout << "element not found";
    }
}