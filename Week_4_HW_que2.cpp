#include<iostream>
#include<vector>
using namespace std;

// two pointer approach
// int main()
// {
//     vector<int> arr{1,2,3,4,5};
//     int k,x;
//     cout << "enter value of k : ";
//     cin >> k;
//     cout << "enter value of x : ";
//     cin >>x;
//     int start = 0;
//     int end = arr.size()-1;
//     while(end-start >= k)
//     {
//         if(abs(arr[start] - x) > abs(arr[end]) - x)
//         {
//             start++;
//         }
//         else 
//         {
//             end--;
//         }
//     }

//     for(int i=start ; i<=end ; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// brute force approach
