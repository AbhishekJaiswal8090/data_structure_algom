#include <iostream>
#include <climits>
using namespace std;

void trapWater(int *height, int n)
{

    int leftmax[20000];
    int rightmax[20000];
    int ans = 0;
    // initialsing first val to minus of negative
    leftmax[0] = height[0];
    rightmax[n - 1] = height[n - 1];

    // calculating leftmax vals
    for (int i = 1; i <= (n - 1); i++)
    {
        leftmax[i] = max(height[i - 1], leftmax[i - 1]);
        // cout<<leftmax[i]<<",";
    }

    // calculatiing right max val
    cout << endl;
    for (int i = (n - 2); i >= 0; i--)
    {
        rightmax[i] = max(height[i + 1], rightmax[i + 1]);
        // cout<<rightmax[i]<<",";
    }

    // calculating trap water
    int trappedWater = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftmax[i], rightmax[i]) - height[i];
        if (currWater > 0)
        {
            trappedWater += currWater;
        }
    }

    cout << trappedWater << endl;
}

int main()
{
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    trapWater(height, n);
}