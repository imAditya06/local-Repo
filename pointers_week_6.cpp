#include<iostream>
using namespace std;
// void callFunction(int arr[])
// {
//     cout << "I am in callunction" << endl;
//     cout << "my size is" << sizeof(arr) << endl;
//     arr[5] = 10000;


// }
void solve(int* p){
    *p=*p+30;
}
int main()
{
    // int a=5;
    // int *ptr = &a;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << &ptr << endl;
    // cout << a+1 << endl;
    // cout << *ptr+4 << endl;
    // ptr = ptr+2;
    // cout << ptr << endl;
    // int *dusraptr = ptr;
    // cout << ptr << endl;
    // cout << dusraptr << endl;

    // array

    // int arr[4] = {12,21,13,31};
    // int *ptr = arr;
    // cout << arr <<endl;
    // cout << &arr <<endl;
    // cout << arr[0] <<endl;
    // cout << &arr[0] <<endl;
    // cout << ptr <<endl;
    // cout << &ptr <<endl;
    // cout << *ptr <<endl;
    // cout << *arr <<endl;
    // cout << *(arr+2) <<endl;
    // cout << 1[arr] <<endl;

    // ptr = ptr+3;
    // cout << *ptr <<endl;

    // int arr[10];
    // cout << sizeof(arr) << endl;
    // int *p = arr;
    // cout << sizeof(p) <<endl;

    // char ch[20] = "AdityaIsMyName";
    // char *cptr = ch;
    // cout << ch <<endl;
    // cout << &ch <<endl;
    // cout << cptr <<endl;
    // cout << *cptr <<endl;
    // cout << *cptr+2 <<endl;
    // cout << *(cptr+3) <<endl;
    // cout << &cptr <<endl;
    // cout << cptr+2 <<endl;


    // int arr[10] = {11,22,33,44,55,66,77,88,99,100};
    // int *ptr = arr;
    // cout << sizeof(arr)<<endl;
    // for(int i=0 ; i<10 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // callFunction(arr);

    // for(int i=0 ; i<10 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int a= 5;
    int *ptr = &a;
    solve(ptr);
    cout << *ptr;




}