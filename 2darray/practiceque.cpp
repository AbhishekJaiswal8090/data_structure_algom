#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{4, 7, 8},
                     {8, 7, 7}};
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 7)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    int i = 1;
    int sum = 0;
    for (int j = 1; j < 3; j++)
    {
        sum += arr[i][j];
    }
    cout << sum << endl;
}