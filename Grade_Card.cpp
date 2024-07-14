#include<iostream>
using namespace std;
char getGrade(int marks);
int main()
{
    // int marks;
    // cout << "Enter the marks" << endl;
    // cin >> marks;

    // char finalGrade = getGrade(marks);
    // cout << finalGrade;

    for(int i=0 ; i<=100 ; i++)
    {
        char finalGrade = getGrade(i);
        cout << "Grade for marks " << i <<" is " << finalGrade <<endl;
    }
    return 0;
}
char getGrade(int marks)
{
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=60)
    return 'C';
    else if(marks>=40)
    return 'D';
    else
    return 'F';
}