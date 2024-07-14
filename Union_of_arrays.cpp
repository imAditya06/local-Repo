#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter the size of array1 : ";
    cin >> n;
    vector<int> arr(n);
    cout << "elements are" << endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter the size of array2 : ";
    cin >> m;
    vector<int> brr(m);
    cout << "elements are" << endl;
    for(int i=0 ; i<m ; i++)
    {
        cin >> brr[i];
    }
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0 ; i<m ; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    vector<int> ans;


    for(int i=0 ; i<arr.size() ; i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0 ; i<brr.size() ; i++)
    {
        ans.push_back(brr[i]);
    }

    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }

}