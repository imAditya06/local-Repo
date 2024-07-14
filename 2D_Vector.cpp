#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector< vector<int> > arr(5,vector<int>(5,-8));
    // for(int i=0 ; i<5 ; i++)
    // {
    //     for(int j=0 ; j<5 ; j++)
    //     {
    //         cout << arr[i][j] << " ";
    
    //     }
    //     cout << endl;
    // }

    vector< vector<int> > arr;
    vector<int> arr1{1,2,3};
    vector<int> arr2{4,5,6};
    vector<int> arr3{7,8,9};

    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);

    for(int i=0 ; i<arr.size() ; i++)
    {
        for(int j=0 ; j<arr[i].size() ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}