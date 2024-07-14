// unique element in an array
 
// enter the size of array : 11
// enter the elements :
// 11
// 22
// 11
// 22
// 33
// 44
// 44
// 55
// 55
// 66
// 66

// 11 22 11 22 33 44 44 55 55 66 66
// unique element is : 33


#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans=0;
    for(int i=0 ; i<arr.size() ; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter the elements : " << endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int unique = findUnique(arr);
    cout << endl;

    cout <<"unique element is : " << unique;
    
}