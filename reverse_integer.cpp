#include<iostream>
using namespace std;
int main()
{
    int num,rem;
    cout << "enter the number you want : ";
    cin >> num;
    
    int k=num;

    for(;(num/10 != 0) ; num/=10)
    {
        if(num > 0)
        {
           rem = num % 10;
           cout << rem;
        }
        else
        {
            if(k==num)
            {
               cout << "-";
               rem = num % 10;
               cout << rem*-1;
             }  
            else
            {
               rem = num % 10;
               cout << rem*-1;
            }

        }
    }
    if(num > 0)
    {
        cout << num;
    }
    else
    {
        cout << num*-1;
    }
}