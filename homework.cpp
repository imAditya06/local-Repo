// 1.area of circle using functions

// #include<iostream>
// using namespace std;
// float getArea(int rad);
// int main()
// {
//     int rad;
//     cout << "Enter the radius of a circle" << endl;
//     cin >> rad;
//     float area = getArea(rad);
//     cout << "Area = " << area << "m.sqaure" << endl;
// }

// float getArea(int rad)
// {
//     float area = 3.14*rad*rad;
//     return area;
// }




// 2.even or odd using functions

// #include<iostream>
// using namespace std;
// void function(int num);
// int main()
// {
//     int num;
//     cout << "Enter a number" << endl;
//     cin >> num;
//     function(num);
//     return 0;
// }

// void function(int num)
// {
//     if(num % 2==0)
//     {
//         cout << "Even" <<endl;
//     }
//     else
//     {
//         cout << "Odd" <<endl;
//     }
// }

// 3.find factorial 

// #include<iostream>
// using namespace std;
// int getfact(int num);
// int main()
// {
//     int num;
//     cout << "enter a number" << endl;
//     cin >> num;
//     int fact = getfact(num);
//     cout << "factorial of " << num << " is " << fact << endl;
//     return 0;
// }

// int getfact(int num)
// {
//     int fact = 1;
//     for(int i=num ; i>=1 ; i=i-1)
//     {
//         fact = i*fact;
//     }
//     return fact;
// }

// prime or not

// #include<iostream>
// using namespace std;
// bool getPrime(int num);
// int main()
// {
//     int num;
//     cout << "Enter a number" << endl;
//     cin >> num ;
//     bool isPrime = getPrime(num);
//     if(isPrime)
//     {
//         cout << "NOT A PRIME" << endl;
//     }
//     else{
//         cout << "PRIME" << endl;
//     }
//     return 0;

// }

// bool getPrime(int num)
// {
//     for(int i=2 ; i<num ; i=i+2)
//     {
//         if(num%i==0)
//         {
//             return false;
//         }   
//     }
//     return true;
// }

#include <iostream>

bool isPrime(int number) {
    if (number <= 1)
        return false;
    
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (isPrime(number))
        std::cout << number << " is a prime number." << std::endl;
    else
        std::cout << number << " is not a prime number." << std::endl;
    
    return 0;
}
