// #include <iostream>

// bool isPrime(int number) {
//     if (number <= 1)
//         return false;
    
//     for (int i = 2; i * i <= number; ++i) {
//         if (number % i == 0)
//             return false;
//     }
    
//     return true;
// }

// int main() {
//     int number;
//     std::cout << "Enter a number: ";
//     std::cin >> number;
    
//     if (isPrime(number))
//         std::cout << number << " is a prime number." << std::endl;
//     else
//         std::cout << number << " is not a prime number." << std::endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;
int getPrime(int num);

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num; 
    if(num == 2)
        cout <<"PRIME";
    else
    {
        int flag = getPrime(num);

        if(flag == num-1 )
        {
           cout << "PRIME";
        }
        else
        {
           cout << "NOT A PRIME";
        }
    }
    return 0;


}
int  getPrime(int num)
{
    int flag=0;
    for(int i=2 ; i<num ; i++)
    {
        if(num%i == 0)
        {
            break;
        }
        else
        {
            flag = i;
        }
    }

    if(flag == num-1)
    {
        return flag;
    }
    else
    {
        return false;
    }
}