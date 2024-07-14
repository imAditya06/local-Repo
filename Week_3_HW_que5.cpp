// TO FIND COMMON ELEMENT IN 3 'SORTED' ARRAYS

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<int> arr_1{1,5,10,20,40,80,80};
    vector<int> arr_2{6,7,20,80,80,100};
    vector<int> arr_3{3,4,15,20,30,70,80,80,120};
    set<int> st;      // (STL) WE WILL STUDY LATER(USED TO REMOVE DUPLICATE ELEMENT EX. HERE 80)
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<arr_1.size() && j<arr_2.size() && k<arr_3.size())
    {
        if(arr_1[i] == arr_2[j] && arr_2[j] == arr_3[k])
        {
            st.insert(arr_1[i]);
            i++;
            j++;
            k++;
        }
        else if(arr_1[i] < arr_2[j])
        {
            i++;
        }
        else if(arr_2[j] < arr_3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for(auto i: st)
    {
        ans.push_back(i);
    }
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }
    
}