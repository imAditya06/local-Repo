// Optimized Bubble Sort
// input array = |10|1|7|6|14|9|

// ROUND 1
// 1 10 7 6 14 9
// 1 7 10 6 14 9
// 1 7 6 10 14 9
// 1 7 6 10 14 9
// 1 7 6 10 9 14
// ROUND 2
// 1 6 7 10 9 14
// 1 6 7 10 9 14
// 1 6 7 9 10 14
// 1 6 7 9 10 14
// ROUND 3
// 1 6 7 9 10 14
// 1 6 7 9 10 14
// 1 6 7 9 10 14
// ROUND 4
// 1 6 7 9 10 14
// 1 6 7 9 10 14
// ROUND 5
// 1 6 7 9 10 14
// final sorted array
// 1 6 7 9 10 14

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{9,8,7,6,5,4,3,2,1};
    for(int i=0 ; i<arr.size()-1 ; i++)
    {
        // at start no swapping 
        int swapCount = 0;
        cout << "ROUND " << i+1 << endl;
        for(int j= 0 ; j<arr.size()-1-i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                // swapping done
                swapCount++;
            }
            for(int i=0 ; i<arr.size() ; i++)
            {
               cout << arr[i] << " ";
            }
            cout << endl;
        }
        // if swapping not occured in entire loop
        // array already sorted
        if(swapCount == 0)
        {
            // exit loop in this condition
            break;
        }
        
    }
    cout << "final sorted array" << endl;

    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}