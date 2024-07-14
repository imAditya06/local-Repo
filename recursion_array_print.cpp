#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    //base condition
    if(size == 0)
    {
        return;
    }

    printArray(arr , size-1);

    cout << arr[size-1] << " ";


}
int main()
{
    int arr[5]={10,20,30,40,50};
    printArray(arr , 5);
}