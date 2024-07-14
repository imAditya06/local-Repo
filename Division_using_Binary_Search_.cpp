// Perform division using binary search

// enter dividend : 65
// enter divisor : 4
// enter upto how many decimals you want precision : 5     
// quotient is : 16.25
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(int dividend , int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int ans = -1;
    while(start <= end)
    {
        int mid = start+(end-start)/2;

        // perfect solution
        if(abs(mid*divisor) == abs(dividend))
        {
            ans =  mid;
            break;
        }

        // not perfect solution
        else if(abs(mid*divisor) > abs(dividend))
        {
            // left search
            end = mid-1;
        }
        else
        {
            // store vlue of mid and search right
            ans = mid;
            start = mid+1;
        }
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
    return ans;
    else
    return -ans;
}
int main()
{
    int dividend , divisor;
    cout << "enter dividend : ";
    cin >> dividend;
    cout << "enter divisor : ";
    cin >> divisor;
    double quotient = binarySearch(dividend , divisor);
    int precision;
    cout << "enter upto how many decimals you want precision : ";
    cin >> precision;
    double step = 0.1;
    for(int i=0 ; i<precision ; i++)
    {
        for(double j=quotient ; j*divisor<=dividend ; j=j+step)
        {
            quotient = j;
        }
        step = step/10;
    }
    cout << "quotient is : " << quotient;

    
}