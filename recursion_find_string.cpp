#include<iostream>
#include<string>
using namespace std;
void findChar(string str , int size , int i ,int& flag)
{
    if(i>=size)
    {
        return;
    }

    if(str[i]== 'r')
    {
        flag = 1;
    }

    findChar(str , size , i+1 , flag);
}
int main()
{
    string str = "LoveBabbar";
    int i=0;
    int flag=0;
    findChar(str , str.length() , i , flag);
    if(flag == 1)
    {
        cout << "true , I am there";
    }
    else
    {
        cout << "false , sorry I am not there";
    }
}