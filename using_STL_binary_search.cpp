#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,4,4,4,4,4,4,6,7,9,10};
    int target =4;
    auto ans = lower_bound(arr.begin() , arr.end() , target);
    auto ans1 = upper_bound(arr.begin() , arr.end() , target);
    cout << ans-arr.begin() << " is lowerbound" << endl; 
    cout << ans1-arr.begin() << " is upperbound" << endl;
}