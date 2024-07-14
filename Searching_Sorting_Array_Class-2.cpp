// finding pivot element in an array
#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] > arr[mid+1] && mid+1 < arr.size())
        {
            return mid;
        }
        else if(arr[mid] < arr[mid-1] && mid >= 0)
        {
            return mid-1;
        }
        else if(arr[start] > arr[mid])
        {
            end = mid-1;         // search left
        }
        else
        {
            start = mid+1;       // search right
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,2,3,4};
    int ans = findPivot(arr);
    if(ans != -1)
    cout << "Pivot element " << arr[ans] << " is at index " << ans;
    else
    cout << "no pivot element found";

}