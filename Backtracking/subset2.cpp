#include <iostream>
#include <vector>

using namespace std;

// in the last lecture we see generating possible string subset
// now we will generate all the possible arrays subset

void Helper(vector<int> &nums, int index, vector<int> &current, vector<vector<int>> &result)
{

    // base case
    if (index == nums.size())
    {
        result.push_back(current);
        return;
    }

    // Exclude first
    Helper(nums, index + 1, current, result);

    // now include
    current.push_back(nums[i]);
    Helper(nums, index + 1, current, result);

    // now backtrack by removing last elemnts into the current
    current.pop_back();
}

vector<vector<int>> subSet()
{
    vector<vector<int>> result;
    vector<int> current;
    vector<int> nums = {1, 2, 3};
    Helper(nums, 0, current, result);
    return result;
}

int main()
{
    vector<vector<int>> res = subSet();
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
}