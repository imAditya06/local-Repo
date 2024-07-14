// find first occurence of an element in an array

// given input array :- {1,2,3,4,5,6,7,8,8,8,8,89}
// output :-    enter number you want to find :8
//              7 is the first occurence index of number 8

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
int main()
{
  vector<int> arr{1,2,3,4,5,6,7,8,8,8,8,89};
  int size = arr.size();
  int target;
  cout << "enter number you want to find :";
  cin >> target;
  int ans = firstOccurence(arr , size , target);
  if(ans != -1)
  cout << ans << " is the first occurence index of number "<<target;
  else
  cout << "element not found";
}