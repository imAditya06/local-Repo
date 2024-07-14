// Find Duplicate number (LEET CODE QUESTION :287)

#include<iostream>
#include<vector>
using namespace std;

// METHOD:1 :- Simple sorting method
// int duplicateNum(vector<int> arr  , int size)
// {
//     // METHOD:1 uses this function
//      for(int i=0 ; i<arr.size()-1 ; i++)
//     {
//         if(arr[i] == arr[i+1])
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> arr{1,3,4,2,1,1,1};
//     int size = arr.size();
//     for(int i=0 ; i<arr.size() ; i++)
//     {
//         for(int j=i+1 ; j<arr.size() ; j++)
//         {
//             if(arr[i] > arr[j])
//             {
//                 swap(arr[i] , arr[j]);
//             }
//         }
//     }
//     int duplicate = duplicateNum(arr , size);

//     if(duplicate)
//     {
//         cout << duplicate << " is the duplicate number";
//     }
//     else
//     cout << "NO DUPLICATE FOUND";

// }


// METHOD:2 :- Negative marking method
// int findDuplicate(vector<int> arr , int size)
// {
//     for(int i=0 ; i<size ; i++)
//     {
//         int index = abs(arr[i]);
//         if(arr[index] > 0)
//         {
//             arr[index] = arr[index]*-1;
//         }
//         else
//         {
//             return index;
//         }
//     }
//     return -1;
// } 
// int main()
// {
//     vector<int> arr{1,1,1,1,1};
//     int size = arr.size();
//     int ans = findDuplicate(arr , size);
//     if(ans)
//     {
//         cout << ans << " is the duplicate element";
//     }
//     else
//     {
//         cout << "NO DUPLICATE ELEMENT FOUND";
//     }
    
// }

// METHOD:3 :- Using element in array as Index (BEST AND SHORTEST METHOD)
int findDuplicate(vector<int> arr , int size)
{
    while(arr[0] != arr[arr[0]])
    {
        swap(arr[0] , arr[arr[0]]);
    }
    return arr[0];
}
int main()
{
    vector<int> arr{1,3,4,2,1,1,1};
    int size = arr.size();
    int ans = findDuplicate(arr , size);
    if(ans)
    {
        cout << ans << " is the duplicate element";
    }
    else
    {
        cout << "NO DUPLICATE ELEMENT FOUND";
    }
}