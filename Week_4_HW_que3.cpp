// Exponential Search

#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> arr , int start , int end , int target)
{
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(target == arr[mid])
        {
            return mid;
        }
        else if(target > arr[mid])
        {
            start++;
        }
        else if(target < arr[mid])
        {
            end--;
        }  
    }
    return -1;
}
int exponential_search(vector<int> arr , int target)
{
    if(arr[0] == target)
    return 0;
    int i=1;
    while(i<arr.size() && arr[i]<=target)
    {
        i = i*2;
    }
    int end = 0;
    if(i>arr.size()-1)
    end = arr.size()-1;
    else
    end = i;

    return binary_search(arr,i/2,end,target);

}
int main()
{
    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    int target;
    cout << "enter the number you want to find : ";
    cin >> target;
    int ans = exponential_search(arr,target);
    if(ans != -1)
    {
        cout << "element " << arr[ans] << " found at index " << ans;
    }
    else
    {
        cout << "element not found";
    }
}

// unbound search  OR infinite search

// #include<iostream>
// #include<vector>
// using namespace std;
// int binary_search(vector<int> arr , int start , int end , int target)
// {
//     while(start <= end)
//     {
//         int mid = start + (end-start)/2;
//         if(target == arr[mid])
//         {
//             return mid;
//         }
//         else if(target > arr[mid])
//         {
//             start++;
//         }
//         else if(target < arr[mid])
//         {
//             end--;
//         }  
//     }
//     return -1;
// }
// int exponential_search(vector<int> arr , int target)
// {
//     if(arr[0] == target)
//     return 0;
//     int i=0,j=1;
//     while(arr[j]<target)
//     {
//         i=j;
//         j = j*2;
//     }
//     return binary_search(arr,i,j,target);

// }
// int main()
// {
//     vector<int> arr{3,4,5,6,11,13,14,15,56,70};
//     int target;
//     cout << "enter the number you want to find : ";
//     cin >> target;
//     int ans = exponential_search(arr,target);
//     if(ans != -1)
//     {
//         cout << "element " << arr[ans] << " found at index " << ans;
//     }
//     else
//     {
//         cout << "element not found";
//     }
// }


