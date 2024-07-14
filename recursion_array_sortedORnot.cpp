#include<iostream>
#include<limits.h>
using namespace std;
// void solve(int arr[] , int size , int i , int& count,int maxNum)
// {
//     if(i == size)
//     {
//         return;
//     }

//     if(arr[i] > maxNum)
//     {
//         maxNum=arr[i];
//         count++;
//     }

//     solve(arr,size,i+1,count,maxNum);
// }

bool solve(int arr[], int size, int i)
{
    if(i==size-1)
    {
        return true;
    }

    if(arr[i+1]<arr[i])
    {
        return false;
    }

    solve(arr,size,i+1);
}
int main()
{
    int arr[10]={100,20,30,50,60,80,100,300,1009,2690};
    int i=0;
    // int count=0;
    // int maxNum = INT_MIN;
    // solve(arr,10,i,count,maxNum);

    // if(count==10){
    //     cout << "array is sorted in ascending order";
    // }
    // else
    // {
    //     cout << "sorry,Not sorted";
    // }

    cout << solve(arr,10,i);
}