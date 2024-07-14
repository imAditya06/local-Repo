#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> arr;
    // int ans = sizeof(arr)/sizeof(int);
    // cout << ans <<endl;
    // cout << arr.size() << endl;        // current number of elements filled
    // cout << arr.capacity() << endl;    // maximum number of elements that can be filled
    
    // // inserting elements

    // arr.push_back(45);
    // arr.push_back(18);

    // // remove element

    // arr.pop_back();

    // for(int i=0 ; i<arr.size() ; i++)
    // {
    //     cout << arr[i] << " " << endl;;
    // }

    // vector<int> brr{1,2,3,4,5,6};
    // for(int i=0 ; i<brr.size() ; i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    // //initializing from 69

    // vector<int> crr(10 , 69);
    // for(int i=0 ; i<crr.size() ; i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // cout << endl;
    // cout << crr.size() << endl;        // current number of elements filled
    // cout << crr.capacity() << endl; 


    // taking size input from user

    int n;
    cin >> n;
    vector<int> drr(n , 420);
    for(int i=0 ; i<drr.size() ; i++)
    {
        cout << drr[i] << " ";
    }
    cout << endl;

    cout << " empty or not : " << drr.empty();





}