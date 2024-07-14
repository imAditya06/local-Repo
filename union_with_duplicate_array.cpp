// Union of two  arrays having common elements

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{

    // UNION WITHOUT DUPLICATE ELEMENTS

    // vector<int> arr{1,2,3,4,5,6,7,8,9};
    // vector<int> brr{10,13,15};
    // vector<int> ans;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0 ; i<brr.size() ; i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    // cout << "Union of array1 and array2 is" << endl;
    // for(int i=0 ; i<ans.size() ; i++)
    // {
    //     cout << ans[i] << "," ;
    // }

    
    // INTERSECTION OF TWO ARRAYS

    // vector<int> arr{1,2,3,3,3,4,5,6,7,8,9};
    // vector<int> brr{5,5,6,7,9,10,12,13};
    // vector<int> ans;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     for(int j=0 ; j<brr.size() ; j++)
    //     {
    //         if(arr[i] == brr[j])
    //         {
    //             brr[j] = INT_MIN;
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }
    // for(int k=0 ; k<ans.size() ; k++)
    // {
    //     cout << ans[k] << " ";
    // }

    // Union of two  arrays having common elements 

    vector<int> arr{1,2,3,4,5,6,7,8,9};
    vector<int> brr{4,10,5,12,13,6,7,14,9};
    vector<int>ans;
    for(int i=0 ; i<arr.size() ; i++)
    {
        for(int j=0 ; j<brr.size() ; j++)
        {
            if(arr[i] == brr[j])
            {
                brr[j]=INT_MIN;
            }
        }
        
    }
    // array brr gets modified

    // for(int i=0 ; i<brr.size() ; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    for(int i=0 ; i<arr.size() ; i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0 ; i<brr.size() ; i++)
    {
        ans.push_back(brr[i]);
    }

    cout << "Union of array 1 and array 2 is"<<endl;
    cout << "( ";
    for(int i=0 ; i<ans.size() ; i++)
    {
        if(ans[i] != INT_MIN)
        {
            cout << ans[i] << " ";
        }
    }
    cout << ")";
    return 0;
}