#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int left = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] != val)
        {
            nums[left] = nums[right];
            left++;
        }

    }
    return left;
}

int main()
{
    vector<int> v = {3,2,2,3};
    int val = 3;
    val = removeElement(v, val);

    return 0;
}