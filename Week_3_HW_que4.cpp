// MISSING ELEMENT IN AN ARRAY
#include<iostream>
#include<vector>
using namespace std;

// METHOD:1 = NEGTAIVE MARKING 
// int findDuplicate(vector<int> arr , int size)
// {
//     for(int i=0 ; i<size ; i++)
//     {
//         int index = abs(arr[i]);
//         if(arr[index-1] > 0)
//         {
//             arr[index-1] *= -1;
//         }
//     }
//     for(int i=0 ; i<size ; i++)
//     {
//         if(arr[i] > 0)
//         {
//             cout << i+1 << " ";
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr{1,2,3,4,5};
//     int size = arr.size();
//     findDuplicate(arr,size);
    
// }

// METHOD:2 = SORTING + SWAPPING
int findDuplicate(vector<int> arr , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        int index = arr[i];
        if(arr[i] != arr[index-1])
        {
            swap(arr[i] , arr[index-1]);
        }
        else
        {
            i++;
        }
    }
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] != i+1)
        {
            cout << i+1 << " ";
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1,3,5,3,4};
    int size = arr.size();
    findDuplicate(arr,size);
}