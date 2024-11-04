#include<bits/stdc++.h>

// void qsort(vector<int> &arr, int l, int h, int k){
//     if(l < h){
//         int p = partition(arr, l, h, k);
//         qsort(arr, l, p - 1, k);
//         qsort(arr, p + 1, h, k);
//     }
// }
int partition(vector<int>&nums, int l, int h, int k){
    // int r = rand()%(nums.size());
    // swap(nums[h], nums[r]);
    int pivot = nums[h];
    int i = l - 1;
    for(int j = l; j <= h; j++){
        if(nums[j] > pivot){
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i+1], nums[h]);
    return i+1;
}



int findKthLargest(vector<int>& nums, int k) {
    int l = 0, h = nums.size()-1;
    while(l <= h){
        int p = partition(nums, l, h, k);
        if(p == k - 1) return nums[p];
        else if(p > k - 1) h = p - 1;
        else l = p + 1;
    }
    return -1;
}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    cout<<findKthLargest(nums, k)<<endl;
    // qsort(nums, 0, nums.size()-1, k);
    // for(int x: nums) cout<<x<<" ";
    // cout<<endl;
}