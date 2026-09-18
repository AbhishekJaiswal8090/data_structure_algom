#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// Longest INcreasing Subsequence
// recursive soln

// so here we can simply see that for each element
// we have two choice exclude it from longest in subse
// or include it if it is valid meaning if current element > prev

int lis(vector<int> &nums, int i, int prev)
{
    if (i == nums.size())
    {
        return 0;
    }

    int exclude = lis(nums, i + 1, prev);

    int include = 0;
    if (nums[i] > prev)
    {
        include = 1 + lis(nums, i + 1, nums[i]);
    }

    return max(include, exclude);
}

// DP solution
int lisDP(vector<int> &nums)
{
    int n = nums.size();

    if (n == 0)
        return 0;
    vector<int> dp(n, 1); // dp[i] represents the length of longest subsequence
    // till ith element;

    // base case dp[i]=1;
    // each element from the arrays itself is a subsequence

    // so for each element i we will look at the all element form 0 to i-1
    // and see if we can formed an longer subsequence for this ith element

    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                ans = max(ans, dp[i]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 3, 1, 5};
    cout << lis(nums, 0, INT_MIN) << endl;

    cout << lisDP(nums);
}
