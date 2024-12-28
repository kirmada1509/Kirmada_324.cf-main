#include<bits/stdc++.h>

int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> map;
    for(int x: nums){
        map[x]++;
    }
    int count = 0;
    for(auto x: map){
        while(x.second){
            x.second--;
            if(!x.second) break;
            if(map[k-x.first] > 0){
                map[k-x.first]--;
                cout<<x.first<<endl;
                count++;
            }else{
                break;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {2,5,4,4,1,3,4,4,1,4,4,1,2,1,2,2,3,2,4,2};
    cout<<maxOperations(nums, 3)<<endl;
}