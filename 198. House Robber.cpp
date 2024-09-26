#include <bits/stdc++.h>
using namespace std;

    int rob(vector<int> &nums)
    {
        if(nums.size() == 1){
            return nums[0];
        }
        // for (int i = 0; i < 5; i++)
        // {
        //     nums.push_back(0);
        // }
        int sum = 0;
        int start = nums[0] + nums[2] > nums[1] + nums[3] ? 0 : 1;
        int i = start;
        while(i < nums.size())
        {
            cout << "i: " << i << " money: " << nums[start] << " sum: " << sum << endl;
            sum += nums[start];
            start = nums[start + 2] + nums[start + 4] > nums[start + 3] + nums[start + 5] ? (start + 2) : (start + 3);
            i = start;
        }
        return sum;
    }

int main()
{
    // vector<int> nums = {0, 0};
    vector<int> nums = {2,7,9,3,1};
    cout << rob(nums) << endl;
    return 0;
}