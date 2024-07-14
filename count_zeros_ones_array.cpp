//counting 0's and 1's in an Array

#include<iostream>
using namespace std;
int main()
{
    int flag0=0,flag1=0;
    int arr[11] = {22,0,1,1,0,1,1,0,1,0,1};
    for(int i=0 ; i<11 ; i++)
    {
        if(arr[i]==0)
        {
            flag0 = flag0 + 1;
        }
        else if(arr[i]==1)
        {
            flag1 = flag1 + 1;
        }
    }

    cout << "NUMBER OF 0'S ARE : " << flag0 <<endl;
    cout << "NUMBER OF 1'S ARE : " << flag1 <<endl;

}