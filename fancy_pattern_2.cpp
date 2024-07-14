// fancy pattern #2
// Enter the number of rows you want : 4

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1


#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout << "Enter the number of rows you want : ";
    cin >> n;
    cout << endl;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ; j++)
        {
            if(j == i)
            {
                cout << count;
                count=count+1;
            }  
            else
            {
                cout << count << "*";
                count=count+1;
            }  
            
        }
        cout << endl;
    }
    int start = count - n;

    for(int i=0 ; i<n ; i++)
    {
        int k = start;

        for(int j=0 ; j<n-i ; j++)
        {
            
            
            if(j == n-i-1)
            {
                cout << k;
                k=k+1;
            }  
            else
            {
                cout << k << "*";
                k=k+1;
            }
            
        }
        start = start - (n-1-i)  ;
        cout << endl;
    }
}