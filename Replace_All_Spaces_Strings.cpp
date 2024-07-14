// Replacing all spaces with "@" character

#include<iostream>
#include<string>
using namespace std;
int getLength(string str)
{
    int i=0;
    int length = 0;
    while(str[i] != '\0')
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
    int length = getLength(str);
    for(int i=0 ; i<length ; i++)
    {
        if(str[i]==' ')
        {
            str[i] = '@';
        }
    }
    cout << "after replacing : " << str;

}