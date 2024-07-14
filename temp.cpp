#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int n)
{
    if(n==2)
    {
        return true;
    }
    int sqrtN = sqrt(n);
    for(int i=2 ; i<=sqrtN ; i++)
    {
        if(n%i==0)
        {
            return false ;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
        int count = 0;
        for(int i=2 ; i<n ; i++)
        {
            if(isPrime(i))
            {
                count++;
                cout << count;
            }
        }
        cout << count;
        
    
}