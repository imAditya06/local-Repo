#include<iostream>
#include<vector>
using namespace std;
// bool compareString(string str , string arr)
// {
//     if(str.length() != arr.length())
//     return false;
//     else{
//         for(int i=0 ; i<str.size() ; i++)
//         {
//             if(str[i] != arr[i])
//             return false;
//         }
//     }
//     return true;
// }
int main()
{
    string str = "babbar";
    string arr = "babbar";
    cout << str<< endl;
    cout << "length of string = " << str.length() << endl;
    cout << "empty or not = " << str.empty() << endl;
    cout << "substring = " << str.substr(0 /*starting index*/ , 4 /*length*/ ) << endl;

    // using inbuilt compare function

    // if(str.compare(arr) == 0)
    // cout << "both strings are equal" << endl;
    // else if(str.compare(arr) > 0)
    // {
    //     cout << "strings are not equal" <<endl;
    //     cout << "first char of STR have more ASCII value than ARR";
    // }
    // else if(str.compare(arr) < 0)
    // {
    //     cout << "strings are not equal" <<endl;
    //     cout << "first char of ARR have more ASCII value than STR   ";
    // }

    //  function call
    // if(compareString(str , arr))
    // cout << "EQUAL STRINGS";
    // else
    // cout << "UNEQUAL STRINGS";

    // string sentence = "puneet superstar is the king";
    // string target = "kings";
    // if(sentence.find(target) == string::npos)
    // cout << "NOT FOUND";
    // else
    // cout << "FOUND AT INDEX : " << sentence.find(target);

    string base = "my name is khan";
    string str1 = "aditya";
    base.replace(11 , 4 , str1);
    cout << base<<endl;
    base.erase(0,4);
    cout << "I used erase function : " << base;


}