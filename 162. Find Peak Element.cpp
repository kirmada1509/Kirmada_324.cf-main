#include<bits/stdc++.h>
using namespace std;

int fun1(vector<int> nums, int l, int r){
    if(l <= r){
        int m = (l+r)/2;
        // if(m == 0){
        //     if(nums[m] > nums[m+1]){
        //         return 0;
        //     }else{
        //         return -1;
        //     }
        // }
        // if(m == nums.size() - 1){
        //     if(nums[m] > nums[m - 1]){
        //         return m;
        //     }else{
        //         return -1;
        //     }
        // }
        cout<<"l: "<<l<<" r: "<<r<<endl;
        if(nums[m] > nums[m-1] && nums[m] > nums[m+1]){
            return m;
        }
        return max(fun1(nums, m+1, r), fun1(nums, l, m-1));
    }else{
        return -1;
    }
}


int findPeakElement(vector<int>& nums){
    int low = 0;
    int high = nums.size() - 1;
    if(nums.size() == 1){
        return 0;
    }
    while(low <= high){
        int mid = (low + high)/2;
        if((mid == 0 && nums[mid] > nums[mid+1]) || 
            (mid == nums.size()-1 && nums[mid > nums[mid - 1]]) ||
            (nums[mid] > nums[mid-1] && nums[mid] > nums[mid + 1]))
            {
            return mid;
        }
        else{
            if(nums[mid] < nums[mid + 1]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2, 1};
    cout<<findPeakElement(nums)<<endl;
}