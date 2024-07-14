// SOLID SQAURE

#include <iostream>
using namespace std;
int main() {
  int n; // n=number of rows=columns
  cout << "Enter number of rows/columns" << endl;
  cin >> n;
  for (int i = 0; i < n; i = i + 1) // outer loop = row_count
  {
    for (int j = 0; j < n; j = j + 1) // inner loop = column_count
    {
      cout << "* ";
    }
    cout << endl;
  }
}