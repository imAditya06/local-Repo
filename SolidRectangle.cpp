// SOLID RECTANGLE

#include<iostream>
using namespace std;
int main()
{
  int n,m ;   // n=number of rows , m=number of columns
  cout << "Enter number of rows" << endl;
  cin >> n;
  cout << "Enter number of columns" << endl;
  cin >> m;
  for(int i=0 ; i<n ; i=i+1)          // outer loop = row_count
    {
      for(int j=0 ; j<m ; j=j+1)      // inner loop = column_count
        {
          cout << "* ";
        }
      cout << endl;
    }
}