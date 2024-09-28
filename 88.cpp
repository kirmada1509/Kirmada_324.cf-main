#include<bits/stdc++.h>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i = 0; i < n; i++){
        nums1.push_back(nums2[i]);
    }
    int start = 0;
    while(nums1[start] == 0 || nums2[start] == 0){
        start++;
    }
    sort(nums1.begin(), nums1.end());
    // int i = 0;
    auto rit = find_if(nums1.rbegin(), nums1.rend(), 
                            [](int v) { return v != 0; });
    nums1.erase(rit.base(), end(nums1));
}

int main(){
    vector<int> nums2 = {1 ,2, 3}; 
    int m = 3;
    vector<int> nums1 = {2, 5, 6}; 
    int n = 3;
    merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
}