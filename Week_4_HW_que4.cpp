// Book allocation Problem 
// que = Allocate minimum number of pages

// Number of books are: 4  [10,20,30,40]
// enter the number of students you want : 2
// Maximum number of pages which are minimum among all permutations is : 60 

#include<iostream>
#include<vector>
using namespace std;
bool isPossibleAns(vector<int> arr, int books , int students , int solution)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0 ; i<books ; i++)
    {
        if(arr[i] > solution)
        return false;
        else if(arr[i] + pageSum > solution)
        {
            studentCount++;
            pageSum = 0;
            pageSum = pageSum+arr[i];
            if(studentCount > students)
            {
                return false;
            }
        }
        else
        {
            pageSum = pageSum +arr[i];
        }
    }
    return true;
}
int binarySearch(vector<int> arr, int books , int students)
{
    int start = 0;
    int end = 0;
    int ans = -1;
    for(int i=0 ; i<books ; i++)
    {
        end = end + arr[i];
    }
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(isPossibleAns(arr,books,students,mid))
        {
            ans = mid;
            // search left
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
}
int main()
{
    vector<int> arr{10,20,30,40};
    int books = arr.size();
    cout << "Number of books are: " << books << endl;
    cout << "number of pages in each books are : " << endl;
    for(int i=0 ; i<books ;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int students;
    cout << "enter the number of students you want : ";
    cin >> students;
    int ans = binarySearch(arr,books,students);
    if(students > books)
    cout << "condition not valid";
    else if(ans != -1)
    cout << "Maximum number of pages which are minimum among all permutations is : " << ans;
    
}