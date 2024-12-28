#include<bits/stdc++.h>

long long maximumSubarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    deque<int> dq;
    long long int sum = 0, res = 0;
    for(int i = 0; i < nums.size(); i++){
        //cout<<"curr: "<<nums[i]<<endl;
        if(dq.size() < k){
            //cout<<"pushing: "<<nums[i]<<endl;
            dq.push_back(nums[i]);
            // map.insert({nums[i], 1});
            if(map.find(nums[i]) != map.end()){
                map[nums[i]]++;
            }
            else{
                if(map[nums[i]] == 0) map[nums[i]]++;
                else map[nums[i]]--;
                if(map[nums[i]] == 0) map.erase(nums[i]);
            }
            sum += nums[i];
        }else{
            int front = dq[0];
            //cout<<"popping: "<<front<<endl;
            dq.pop_front();
            // map.erase(front);
            // map[front]--;
            if(map[front] == 1) {
                //cout<<"erasing: "<<front<<endl;
                map.erase(front);
            }
            else map[front]--;
            sum -= front;
            i = i - 1;
            // continue;
            // sum += nums[i];
        }
        //cout<<"sum: "<<sum<<endl;
        // //cout<<"map size: "<<map.size()<<endl;
        //cout<<"map: "<<endl;
        for(auto it: map)//cout<<it.first<<":"<<it.second<<endl;
        //cout<<endl;
        if(map.size() == k){
            res = max(res, sum);
            //cout<<"res: "<<res<<endl;
        }
        //cout<<endl;
    }
    return res;
}

int main(){
    vector<int> nums = {1,5,4,2,9,9,9};
    int k = 3;
    cout<<maximumSubarraySum(nums, k)<<endl;
}