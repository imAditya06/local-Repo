#include<iostream>
#include<limits.h>
using namespace std;
void solveMax(int arr[] , int size , int& maxNum , int i)
{
    if(i == size)
    {
        return ;
    }

    if(arr[i] > maxNum)
    {
        maxNum = arr[i];
    }

    solveMax(arr , size , maxNum , i+1);

}
void solveMin(int arr[] , int size , int& minNum , int i)
{
    if(i == size)
    {
        return ;
    }

    if(arr[i] < minNum)
    {
        minNum = arr[i];
    }

    solveMin(arr , size , minNum , i+1);

}
int main()
{
    int arr[6]={1,3,5,9,10,1029};
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    int i=0;
    solveMax(arr , 6 , maxNum , i);

    cout << "the maximum number is : " << maxNum;
    cout << endl;
    solveMin(arr , 6 , minNum , i);

    cout << "the minimum number is : " << minNum;
}