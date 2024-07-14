#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int heightParameter(vector<int> arr , int n , int m , int mid)
{
    int woodRequirement = 0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        if(arr[i] > mid)
        woodRequirement = woodRequirement + abs(arr[i] - mid);
    }
    return woodRequirement;
}
int binarySearch(vector<int> arr , int N , int M)
{
    int start = 0;
    int end = arr[arr.size()-1];
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        int ans = heightParameter(arr , N , M , mid);
        if(ans > M)
        {
            start = mid+1;
        } 
        else if(ans == M)
        {
            return mid;
        }
        else if(ans < M)
        {
            end = mid-1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr{4,42,40,26,46};
    int N , M;
    cout << "enter the number of trees Mirko wants to cut : ";
    cin >> N;
    cout << "enter the wood height requirement of Mirko : ";
    cin >> M;
    sort(arr.begin() , arr.end());
    int ans = binarySearch(arr , N , M);
    cout << "height parameter : " << ans;
    
    return 0;
}

