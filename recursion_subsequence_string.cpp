#include<iostream>
#include<string>
using namespace std;
void solve(string str,string ans,int i)
{
    if(i==str.length())
    {
        cout << ans <<endl;
        return;
    }
    solve(str,ans,i+1); //exclude

    ans.push_back(str[i]); //include
    
    solve(str,ans,i+1);
}
int main()
{
    string str="abcd";
    string ans= "";
    int i=0;

    solve(str,ans,i);
}