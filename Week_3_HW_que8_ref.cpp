// Reference question to solve que.8
// Add 2 numbers represented by two arrays

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr1{0,9,0,0,3,5};
    vector<int> arr2{2,2,7};
    vector<int> ans;

    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0;

    while(i>=0 && j>=0)
    {
        int x = arr1[i] + arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry = x/10;
        i--;
        j--;
    }
    while(i>=0)
    {
        int x = arr1[i] + 0  + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry = x/10;
        i--;
    }
    while(j>=0)
    {
        int x = 0 + arr2[j] + carry;
        int digit = x%10;
        ans.push_back(digit);
        carry = x/10;
        j--;
    }
    if(carry)
    {
        ans.push_back(carry);
    }
    if(ans[ans.size()-1] == 0)
    {
        ans.pop_back();
    }

    // reversing array
    int start = 0;
    int end = ans.size()-1;

    for(int i=0 ; i<ans.size()/2 ; i++)
    {
        swap(ans[start] , ans[end]);
        start++;
        end--;
    }
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    } 
    
}