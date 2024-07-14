// extreme print in an array


#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,11,12,13,14,9391,3910,3829,820182};
    int size = sizeof(arr)/4;
    int start=0;
    int end=size-1;;
    for(int i=0 ; i<size/2+1 ; i++)
    {
        if(start<end)
        {
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++;
        end--;
        }
        else if(start==end)
        {
            cout << arr[start] << " ";
        }
    }
}