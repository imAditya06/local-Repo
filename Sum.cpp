#include<iostream>
using namespace std;
int summation(int num);

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int sum= summation(num);
    cout << "Sum of even numbers from 1 to " << num << " is " << sum << endl;
    
    return 0;
}

int summation(int num)
{
    int count=0;
    for(int i=2 ; i<=num ; i=i+2)
    {
        count = count + i;
    }
    return count;
}