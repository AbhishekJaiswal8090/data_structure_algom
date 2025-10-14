#include <iostream>
using namespace std;

// spiral matrix problem;
void spiralMatrix(int arr[][4], int n, int m)
{
    int srow = 0;
    int erow = n - 1;
    int scolum = 0;
    int ecolum = m - 1;
    while (srow <= erow && scolum <= ecolum)
    {
        // top
        for (int j = scolum; j <= ecolum; j++)
        {
            cout << arr[srow][j] << " ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << arr[i][ecolum] << " ";
        }
        // bottom
        for (int k = ecolum - 1; k >= scolum; k--)
        {
            cout << arr[erow][k] << " ";
        }
        // left
        for (int l = erow - 1; l >= srow ; l--)
        {
            cout << arr[l][scolum] << " ";
        }
        srow++;
        scolum++;
        erow--;
        ecolum--;
    }
    cout << endl;
}
int main()
{

    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    spiralMatrix(matrix, 4, 4);

}