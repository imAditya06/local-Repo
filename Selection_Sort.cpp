// Selection sort

#include<iostream>
#include<vector>
using namespace std;

// int main()
// {
//     vector<int> arr{10,9,7,5,8,54,6,3,4};
//     for(int i=0 ; i<arr.size()-1 ; i++)
//     {
//         for(int j=i ; j<arr.size(); j++)
//         {
//             if(arr[i] > arr[j])
//             {
//                 swap(arr[i] , arr[j]);
//             }
//         }
//     }
//     for(int i=0 ; i<arr.size() ; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

int main()
{
    vector<int> arr{6,5,4,3,2,1};
    for(int i=0 ; i<arr.size()-1; i++)
    {
        int minIndex = i;
        for(int j=i+1 ; j<arr.size() ; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i] , arr[minIndex]);
    }
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}