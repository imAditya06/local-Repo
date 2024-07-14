// triplet whose sum = val

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,20,30,40,50,60,70,80,90,100};
    int val;
    cout << "Enter sum you want : ";
    cin >> val;
    for(int i=0 ; i<arr.size() ; i++)
    {
        for(int j=i+1 ; j<arr.size() ; j++)
        {
            for(int k=j+1 ; k< arr.size() ; k++)
            {
                if(arr[i] + arr[j] + arr[k] == val)
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
            }
        }
    }
}