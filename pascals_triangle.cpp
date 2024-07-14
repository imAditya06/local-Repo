// Pascal's triangle
// Enter the number of rows you want :  5

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1



#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of rows you want :  ";
    cin >> num;
    cout << endl;
    for(int i=1 ; i<=num ; i++)
    {
        int count=1;
        for(int j=1 ; j<=i ; j++)
        {
            cout << count << " ";
            count = count * (i-j)/j;
        }
        cout << endl;
    }
}