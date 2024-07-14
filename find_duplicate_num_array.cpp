#include<iostream>
#include<vector>
using namespace std;
// void printArray( vector<int> arr , int size)
// {
//     for(int i=0 ; i<size ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int main()
{
    // vector<int> arr{1,1,3,4,2};
    // int size = arr.size();
    // int count = 0;
    // cout << "GIVEN ARRAY" << endl;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     for(int j=i+1 ; j<arr.size() ; j++)
    //     {
    //         if(arr[i] >arr[j])
    //         {
    //             swap(arr[i] , arr[j]);
    //         }
    //     }
    // }
    // cout << "SORTED ARRAY IN ASCENDING ORDER" << endl;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // for(int i=0 ; i<size ; i++)
    // {
    //     for(int j=i+1 ; j<size ; j++)
    //     {
    //         if(arr[i] == arr[j])
    //         {
    //             cout << arr[i] << " is the duplicate element" ;
    //         }
    //     }
    // }
    
    vector<int> arr{1,3,4,2,2};
    int size = arr.size();
    for(int i=0 ; i<size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[i] > arr[j])
            {
               swap(arr[i] , arr[j]);
            }
        }
        
    }
    cout << "sorted array" << endl;
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i=0 ; i<size-1 ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout << arr[i] << " is duplicate";
        }
    }
    

}