#include<bits/stdc++.h>

    void sortColors(vector<int>& nums) {
        int zeroes = 0, ones = 0, twos = 0;
        for(int x: nums){
            if(x == 0) zeroes++;
            else if(x == 1) ones++;
            else twos++;
        }
        for(int i = 0; i < zeroes; i++){
            nums[i] = 0;
        }
        for(int i = zeroes; i < zeroes + ones; i++){
            nums[i] = 1;
        }
        for(int i = zeroes + ones; i < zeroes + ones + twos; i++){
            nums[i] = 2;
        }
    }

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(int x: nums) cout<<x<<" ";
    cout<<endl;
}