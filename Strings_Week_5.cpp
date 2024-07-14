#include<iostream>
#include<string>
using namespace std;
int getLength(char arr[])
{
    int length = 0;
    int i=0 ;
    while(arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    // char ch[100];            // string declaration
    // cout << "enter you name : ";
    // cin >> ch;              // taking input into string
    // cout << "aapka naam " << ch << " hai"<< endl;
    // ch[0] = 's';
    // ch[1] = 'a';
    // ch[2] = 'y';
    // ch[3] = 'l';
    // ch[4] = 'i';
    // cout << ch << endl;
    // int ascii_val = (int)ch[6];   
    // cout << "ascii value of string terminator , null character : " << ascii_val;

    // string name;
    // cout << "enter your full name : ";
    // // cin >> name;
    // getline(cin ,name);
    // // cin.getline(name , 100);
    // cout << "aapka naam " << name << " hai";

    // to find length of string
    char arr[100];
    cout << "enter text"<< endl;
    cin >> arr;
    cout << "length of string is : " << getLength(arr);
}