#include<bits/stdc++.h>

    int maxWidthRamp(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        int ans1 = 0, ans2 = 0;
        while(i < j){
            cout<<nums[i]<<" "<<nums[j]<<endl;
            if(nums[i] <= nums[j]) {
                cout<<j<<" "<<i<<endl;
                ans1=  j - i;
                break;
            }
            if(nums[i] > nums[j])i++;
        }
        i = 0;
        j = nums.size()-1;
        cout<<"trail 2"<<endl;
        while(i < j){
            cout<<nums[i]<<" "<<nums[j]<<endl;
            if(nums[i] <= nums[j]) {
            ans2=  j - i;
                break;
            }
            if(nums[i] > nums[j])j--;
        }
        cout<<ans1<<" "<<ans2<<endl;
        return 0;
    }

int main(){
    vector<int> nums = {4,2,3,1};
    cout<<maxWidthRamp(nums)<<endl;
}