#include<iostream>
#include<cstring>    // to use strlen() function
using namespace std;

// Normal Approach

// int main()
// {
//     char ch[100];
//     cout << "enter text : ";
//     cin >> ch;
//     char reverseCh[100];
//     int j=0;
//     int size = strlen(ch);
//     for(int i=size-1 ; i>=0 ; i--)
//     {
//         reverseCh[j] = ch[i];
//         j++;
//     }
//     reverseCh[j] = '\0';
//     cout << "reversed text : " << reverseCh << endl;
//     int flag = 0;
//     for(int i=0 ; i<size ; i++)
//     {
//         if(ch[i] != reverseCh[i])
//         break;
//         else 
//         flag++;
//     }
//     if(flag == size)
//     {
//         cout << "Yes , It is a palindrome";
//     }
//     else
//     cout << "Not a palindrome";
// }


// Two pointer Approach
bool isPalindrome(char ch[])
{
    int start=0;
    int end= strlen(ch)-1;
    while(start <= end)
    {
        if(ch[start] == ch[end])
        {
            start++;
            end--;
        }
        else
        return false;
    }
    return true;
    
}
int main()
{
    char ch[100];
    cout << "enter some text : ";
    cin >> ch;
    if(isPalindrome(ch))
    {
        cout << "It's a palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
    
}