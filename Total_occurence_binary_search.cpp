#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> arr , int size , int target)
{
  int start = 0;
  int end = size-1;
  int mid = 0;
  int ans=-1;
  while(start <= end)
    {
      mid = start+(end-start)/2;
      if(target == arr[mid])
      {
        ans = mid;
        end=mid-1;
      }
      else if(target < arr[mid])
      {
        end = mid-1;
      }
      else
      {
        start = mid+1;
      }
    }
  return ans;
}
int lastOccurence(vector<int> arr , int size , int target)
{
    int start = 0;
    int end = size-1;
    int mid = 0;
    int ans=-1;
    while(start <= end)
    {
      mid = start+(end-start)/2;
      if(target == arr[mid])
      {
        ans = mid;
        start = mid+1;
      }
      else if(target < arr[mid])
      {
        end = mid-1;
      }
      else
      {
        start = mid+1;
      }
    }
    return ans;
}
int main()
{
  vector<int> arr{1,2,3,4,5,6,7,8,8,8,8,89};
  int size = arr.size();
  int target;
  cout << "enter number you want to find :";
  cin >> target;
  int ans = firstOccurence(arr , size , target);
  int ans1 = lastOccurence(arr , size , target);
  cout << ans1-ans+1 << " is the total occurence";

  
}