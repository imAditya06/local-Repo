#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,3,67,3,56,1344,2,5,7,14};
    int size = sizeof(arr)/4;
    int maxNum = INT_MIN;         // INT_MIN = -2^31  and INT_MAX = 2^31-1
    cout << maxNum << endl;
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << maxNum;
}