#include<bits/stdc++.h>

int minSubarray(vector<int>& nums, int p) {
    long long int total = 0;
    int res = INT_MAX;
    for(int x: nums) total += x;
    if(p > total) return-1;
    int x = p;
    p = total % p;
    if(!p) return 0;
    while(p <= total){
        cout<<"entering for: "<<p<<endl;
        int i = 0, sum = 0, l = 0;
        for(int j = 0; j < nums.size(); j++){
            if(sum + nums[j] > p){
                sum = nums[j];
                l = 1;
            }else{
                sum += nums[j];
                l++;
            }
            if(sum == p){
                res = min(res, l);
                l = 0;
                sum = 0;
            }
            cout<<j<<" "<<sum<<" "<<l<<" "<<res<<endl;
        }
        cout<<res<<endl;
        if(0 < res && res != INT_MAX) break;
        p = p + x;
    }
    if (res == nums.size()) res = -1;
    return res == INT_MAX ? -1 : res;
}

int main(){
    // vector<int> nums = {9,10,1,2,9,16,1,2};
    // int p = 6;
    vector<int> nums = {26,19,11,14,18,4,7,1,30,23,19,8,10,6,26,3};
    int p = 26;
    cout<<minSubarray(nums, p)<<endl;
}