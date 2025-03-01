#include<bits/stdc++.h>

    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        // map[0] = 1;
        int pre_sum = 0, res = 0;
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if(x == 0) x = -1;
            pre_sum += x;
            if(pre_sum == 0){
                res = i + 1;
            }
            if(map.find(pre_sum) != map.end()){
                res = max(res, i - map[pre_sum]);
            }else{
                map[pre_sum] = i;
            }
        }
        return res;
    }

int main(){
    vector<int> nums = {0, 1};
    cout<<findMaxLength(nums)<<endl;
}