#include<iostream>
using namespace std;
void print(int& num ,  int r)
{
    if(num==0)
    {
        return;
    }

    r=num%10;
    num=num/10;

    print(num , r);

    cout << r<< " ";

}
int main()
{
    int num , r=0 ;
    cout << "enter a number :";
    cin >> num;
    if(num==0)
    {
        cout << "0";
    }

    print(num , r);
}