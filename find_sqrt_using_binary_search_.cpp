// finding sqare root of a number using binary search

// enter number : 10
// enter the number upto which you want precision : 7
// 3.16228 is the sqrt of 10

#include<iostream>
#include<vector>
using namespace std;
int findSqrt(int num)
{
    // vector<int> arr(num+1);
    int start = 0;
    int end = num;
    int ans=0 ;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(num == mid*mid)
        {
            return mid;
        }
        else if(num < mid*mid )
        {
            // search left
            end = mid-1;
        }
        else if(num > mid*mid)
        {
            ans = mid;
            start = mid +1;
        }
    }
    return ans;

}

int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;
    // cout << findSqrt(num) << " is the sqrt of " << num;

    double ans = findSqrt(num);
    // int precision;
    // cout << "enter the number upto which you want precision : ";
    // cin >> precision;
    // double step = 0.1;
    if(ans*ans < num)
    {
        int precision;
        cout << "enter the number upto which you want precision : ";
        cin >> precision;
        double step = 0.1;
        for(int i=0 ; i<precision ; i++)
        {
           for(double j=ans ; j*j<=num ; j+=step)
           {
              ans = j;
           }
           step /= 10;
        }
    cout << ans << " is the sqrt of " << num;
    }
    else
    cout << ans << " is the sqrt of " << num;
    
}