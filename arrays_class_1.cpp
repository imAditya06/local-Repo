#include<iostream>
using namespace std;
// printArray(int arr[]  , int size)
// {
//     for(int i=0 ; i<size ; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void inc(int arr[]  , int size)
// {
//     arr[0] = arr[0] +10;
//     printArray(arr , size);
//     cout << endl;
// }
int main()
{
    // //array declaration
    // int arr[53];
    // char arr1[106];
    // bool arr2[23];

    // int arr[]={2,4,6,8,10};
    // int brr[5]={2,4,6,8,10};
    // int crr[10]={2,4,6,8,10};

    // error
    // int drr[4]={2,4,6,8,10};

    // int arr[]={1,3,5,7,9};
    // for(int index=0 ; index<5 ; index++)
    // {
    //     cout << arr[index] << " ";
    // }
    
    // int arr[10];
    // cout << "enter values :" << endl;

    // //taking input
    // for(int i =0 ; i<10 ; i++)
    // {
    //     cin >> arr[i];
    // } 

    // //printing
    // for(int i=0 ; i<10 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // taking input in an array and printing its doubled value

    // int arr[5];
    // cout << "enter the values in an array : ";
    // for(int i=0 ; i<5 ; i++)
    // {
    //     cin >> arr[i];
    // }
    // for(int i=0 ; i<5 ; i++)
    // {
    //     cout << 2*arr[i] <<"  ";
    // }

    // int arr[10]= {1,3,5,7,9};
    // for(int i=0 ; i<10 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[]={5,6};
    // int size=2;
    // inc(arr , size);

    // printArray(arr , size);
    // int arr[10]={1,2,3};
    // cout << sizeof(arr);  //cannot get actual blocks filled


    int arr[7]={2,9,6,7,4,12,15};
    int i,flag=0,key;
    cout << "Enter the number you want to find : ";
    cin >> key;
    for(int i=0 ; i<7 ; i++)
    {
        if(arr[i] == key)
        {
            break;
        }
        else
        {
            flag=i;
        }
    }
    if(flag == 6)
    {
        cout << "ABSENT";

    }
    else
    {
        cout << "PRESENT";
    }  
}