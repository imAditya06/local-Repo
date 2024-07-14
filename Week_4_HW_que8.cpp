#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool minTime(vector<int> arr , int pratas_num , int cooks_num , int mid)
{
    int time = 0;
    int cook_count = 1;
    int j=1;
    for(int i=1 ; i<=pratas_num ; i++)
    {
        time = time + arr[cook_count-1]*j;
        if(time > mid)
        {
            time = 0;
            cook_count++;
            j=1;
            time = time + arr[cook_count-1]*j;
            if(cook_count > cooks_num)
            {
                return false;
            }
        }
        j++;
    }
    return true;
}
int binarySearch(vector<int> arr , int pratas_num , int cooks_num)
{
    int start = 0;
    int end = 0;
    int ans = -1;
    for(int i=1 ; i<=pratas_num ; i++)
    {
        end = end + i*arr[arr.size()-1];
    }
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(minTime(arr , pratas_num , cooks_num , mid))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
}
int main()
{
    vector<int> arr{4};
    sort(arr.begin() , arr.end());
    int pratas_num , cooks_num;
    cout<< "enter the number of pratas : ";
    cin >> pratas_num;
    cooks_num = arr.size();
    cout << "number of cooks : " << cooks_num << endl;
    int ans = binarySearch(arr , pratas_num , cooks_num);
    if(ans !=  -1)
    {
        cout << "minimum time required is : " << ans;
    }
    else
    {
        cout << "not possible";
    }
}