#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(start == end)
        {
            return start;
        }
        else if(arr[mid] > arr[mid+1]  &&  mid+1 <= end)
        {
            return mid;
        }
        else if(arr[mid] < arr[mid-1]  &&  mid-1 >= 0)
        {
            return mid-1;
        }
        else if(arr[mid] < arr[start])
        {
            // search left
            end = mid-1;
        }
        else
        {
            // search right
            start = mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{7,8,10,1,2,3,4,5,6};
    int pivot = findPivot(arr);
    if(pivot != -1)
    {
        cout << "pivot element " << arr[pivot] << " found at index " << pivot;
    }
    else
    {
        cout << "no pivot element found";
    }


}