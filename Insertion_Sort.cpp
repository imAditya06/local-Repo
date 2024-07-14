// Insertion sort

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{9,8,7,6,5,4,3,2,1};
    int size = arr.size();
    // loops for Rounds
    for(int i=1 ; i<size ; i++)
    {
        int j=i-1;
        // saving value in temparary variable in order to avoid overwrite problem
        int val = arr[i];
        for( ; j>=0 ; j--)
        {
            if(arr[j] > val)
            {
                arr[j+1] = arr[j]; 
            }
            else
            {
                // break the loop
                break;
            }
        }
        arr[j+1] = val;
    }
    cout << "sorted array : " << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}