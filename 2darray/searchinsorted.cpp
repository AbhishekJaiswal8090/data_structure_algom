#include <iostream>
using namespace std;

// search in sorted matrix problem
// staircase search property
bool searchInSorted(int matrix[3][3], int n, int m, int target)
{
    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int matrix[3][3] = {{0, 1, 2},
                        {3, 4, 5},
                        {6, 7, 8}};
                        cout<<endl;
    cout << searchInSorted(matrix, 3, 3, 9);
    cout<<endl;
     cout << searchInSorted(matrix, 3, 3, 6);
}