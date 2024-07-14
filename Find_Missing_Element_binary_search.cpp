#include<iostream>
#include<vector>
using namespace std;
int findMissing(vector<int> arr)
{
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] - arr[mid-1] == 1 && arr[mid+1] - arr[mid] == 2)
        {
            return arr[mid]+1;
        }
        else if(arr[mid] - arr[mid-1] == 2 && arr[mid+1] - arr[mid] == 1)
        {
            return arr[mid]-1;
        }
        else if(arr[mid] - arr[mid-1] == 1 && arr[mid+1] - arr[mid] == 1)
        {  
            for(int i=mid+1 ; i<=end ; i++)
            {
                if(arr[i] - arr[i-1] != 1)
                {
                    return arr[i]-1;
                }
            }  
        }  
    }
    return ans;
        
}
int main()
{
    vector<int> arr{1,2,4,5,6,7,8,9,10,11,12,13,14,15};
    int ans = findMissing(arr);
    if(ans != -1)
    {
        cout << ans << " is the missing element";
    }
    else
    {
        cout << "No missing element found";
    }

}