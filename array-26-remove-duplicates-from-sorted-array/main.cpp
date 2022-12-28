#include <vector>
#include <iostream>


using namespace std;

int removeDuplicates(vector<int>& nums) {
    int small_prt = 0;
    int big_prt = 1;
    int tmp_swap = 0;

    while (big_prt < nums.size())
    {
        if (nums[small_prt] == nums[big_prt])
        {
            big_prt++;
        }
        else
        {
            tmp_swap = nums[small_prt + 1];
            nums[small_prt + 1] = nums[big_prt];
            nums[big_prt] = tmp_swap;
            small_prt++;
            big_prt++;
        }   
    }
    return small_prt + 1;
}

int main()
{
    vector<int> a = {1,1,2};
    int sum = removeDuplicates(a);
    cout << sum << endl;
    for (size_t i = 0; i < sum; i++)
    {
        cout << a[i] << endl;
    }
    
}