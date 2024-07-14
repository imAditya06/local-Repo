#include<iostream>
#include<string>
using namespace std;
int getLength(string str)
{
    int length=0;
    int i=0;
    while(str[i] !='\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    string str;
    cout << "enter some text : ";
    getline(cin , str);
    int i=0;
    int j= getLength(str)-1;
    while(i<=j)
    {
        swap(str[i] , str[j]);
        i++;
        j--;
    }
    cout << "after reversal : " << str;
}