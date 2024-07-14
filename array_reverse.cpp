#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/4;
    int start = 0;
    int end = size-1;
    for(int i=0 ; i<size/2 ; i++)
    {
        // arr[start] = arr[start]^arr[end];
        // arr[end] = arr[start]^arr[end];
        // arr[start] = arr[start]^arr[end];

        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];

        // arr[start] = arr[start] * arr[end];
        // arr[end] = arr[start] / arr[end];
        // arr[start] = arr[start] / arr[end];

        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }

}