#include <bits/stdc++.h>

int longestConsecutive(vector<int> &nums){
    unordered_map<int, int> map;
    for(auto x: nums) map[x] = 1;
    int res = 0, temp = 0;
    for(int i = 0; i < nums.size(); i++){
        if(map.find(nums[i] - 1) == map.end()){
            int curr = nums[i];
            while (map.find(curr) != map.end()){
                cout<<"curr: "<<curr<<", temp: "<<temp<<endl;
                temp++;
                curr++;
            }
            cout<<endl;
            res = max(res, temp);
            temp = 0;
            
        }
    }
    return res;
}

int main(){
    // vector<int> nums = {100,4,200,1,3,2};
    vector<int> nums = {9,1,4,7,3,-1,0,5,8,-1,6};
    cout<<longestConsecutive(nums)<<endl;
}