#include <iostream>
#include <vector>
using namespace std;

// Traget sum subset Problem;
// In this problem we have given an num arrays as a set and we nee to figure out
// whether there are subset that could add upto specific element "target"
// if yes retunr true else false;

// What dp[i][j] means in this code
// In 4.cpp, the state is:

// i = how many elements from the array we have considered so far
// j = the sum we are trying to form
// So dp[i][j] is meant to mean:

// “Among the first i elements, what is the maximum sum we can achieve that is exactly equal to j?”

int subsetProblem(vector<int> &st, int target)
{
    vector<vector<int>> dp(st.size() + 1, vector<int>(target + 1));
    for (int i = 0; i <= target; i++)
    {

        dp[0][i] = 0;
    }
    for (int i = 0; i <= st.size(); i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= st.size(); i++)
    {
        for (int j = 1; j <= target; j++)
        {
            if (st[i - 1] <= j)
            {

                int ans1 = dp[i - 1][j - st[i - 1]] + st[i - 1];
                int ans2 = dp[i - 1][j];

                dp[i][j] = max(ans1, ans2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[st.size()][target] == target)
    {
        cout << "WE HAVE SOME SUBSET THAT COULD ADD AND MAKE OUR TARGET" << endl;
        int i = st.size();
        int j = target;

        while (i > 0 && j > 0)
        {
            if (dp[i][j] != dp[i - 1][j])
            {
                cout << st[i - 1] << " ";
                j = j - st[i - 1];
            }
            i--;
        }
        return dp[st.size()][target];
    }
    else
        cout << "WE CAN NOT FORM MAKE THE TARGET USING THE SUBSET" << endl;

    return -1;
}

int main()
{
    vector<int> st = {1, 2, 5, 6, 3};
    int target = 11;
    subsetProblem(st, target);
}