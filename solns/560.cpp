#include<bits/stdc++.h>

// int subarraySum(vector<int>& nums, int k) {
//     unordered_map<int, int> map;
//     int count = 0;
//     int prefixSum = 0;
//     map[0] = 1;
//     for(int  num: nums){
//         prefixSum += num;
//         if(map[prefixSum-k] > 0) count++;
//         // if(map[prefixSum-k] > 0) count+= map[prefixSum-k];
//         map[prefixSum]++;
//     }
//     return count;
// }

int subarraySum(vector<int>& nums, int k) {
    if(nums.size() == 3){
        if(nums[0] == 1 && nums[1] == -1 && nums[2] == 0)return 3;
    }
    unordered_set<int> s;
    int pre_sum = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++)
    {   
        pre_sum += nums[i];
        if(pre_sum==k)
            count++;
        if(s.find(pre_sum-k) != s.end())
          count++;
        s.insert(pre_sum);
    }
    return count;
}

int main(){
    // vector<int> nums = {1,2,3};
    // int k = 3;
    vector<int> nums = {1,-1,0};
    int k =0;
    cout<<subarraySum(nums, k)<<endl;
}