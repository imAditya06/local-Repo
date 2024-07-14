// Factorial of a large number

// enter a number : 50
// 30414093201713378043612608166064768844377641568960512000000000000       


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    vector<int> ans{1};
    int carry = 0;
    for(int i=2 ; i<=num ; i++)
    {
        for(int j=0 ; j<ans.size() ; j++)
        {
           int x = ans[j]*i +carry;
           ans[j] = x%10;
           carry = x/10;
        }
        while(carry)                  // storing carry digitwise
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }
        carry=0;
        
    } 
    // for(int i=0 ; i<ans.size() ; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // reversing array
    int start = 0;
    int end = ans.size()-1;
    for(int i=0 ; i<ans.size()/2 ; i++)
    {
        swap(ans[start] , ans[end]);
        start ++;
        end--;
    }
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i];
    }
}