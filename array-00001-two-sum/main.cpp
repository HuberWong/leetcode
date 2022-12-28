#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result(2);
    for (result[0] = 0; result[0] < nums.size(); result[0]++)
    {
        for (result[1] = result[0] + 1; result[1] < nums.size(); result[1]++)
        {
            int tmp = nums[result[0]] + nums[result[1]];
            if (tmp == target)
            {
                return result;
            }
        }
    }
    return result;
    
}

int main()
{
    vector<int> a = {3, 2, 4};
    int b = 6;
    for (auto i : twoSum(a, b))
    {
        cout << i << endl;
    }
}