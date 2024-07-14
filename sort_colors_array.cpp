// Sort colors  OR  sort 0's , 1's , 2's  OR Dutch National Flag Problem
// BEFORE SORTING
// 1 2 2 1 2 1 0 0 2 0 0 1 0 1 0 2
// AFTER SORTING
// 0 0 0 0 0 0 1 1 1 1 1 2 2 2 2 2


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // normal counting approach
    // vector<int> arr{1,2,2,1,2,1,0,0,2,0,0,1,0,1,0,2};
    // vector<int> ans;
    // int count0=0;
    // int count1=0;
    // int count2=0;
    // cout << "BEFORE SORTING" << endl;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     cout << arr[i] << " ";

    // }
    // cout << endl;
    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     if(arr[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if(arr[i] == 1)
    //     {
    //         count1++;
    //     }
    //     else
    //     {
    //         count2++;
    //     }
    // }
    // for(int i=0 ; i<count0 ; i++)
    // {
    //     ans.push_back(0);
    // }
    // for(int i=0 ; i<count1 ; i++)
    // {
    //     ans.push_back(1);
    // }
    // for(int i=0 ; i<count2 ; i++)
    // {
    //     ans.push_back(2);
    // }
    // cout << "AFTER SORTING" << endl;
    // for(int i=0 ; i<ans.size() ; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // return 0;


    // 3 pointer approach
    vector<int> arr{1,2,2,1,2,1,0,0,2,0,0,1,0,1,0,2};
    int low=0;
    int mid=0;
    int high=arr.size()-1;
    cout << "BEFORE SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid] , arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid] , arr[high]);
            high--;
        }
    }

    cout << "AFTER SORTING" << endl;
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }


}