#include<bits/stdc++.h>

    // vector<int> largestNumber(vector<int>& nums) {
    //     auto comp = [](int a, int b){
    //         string str_a = to_string(a);
    //         string str_b = to_string(b);
    //         int unit_a = int(str_a[0]);
    //         int unit_b = int(str_b[0]);
    //         if(unit_a > unit_b) return true;
    //         if(str_a.size() == str_b.size()) return false;
    //     };
    //     sort(nums.begin(), nums.end(), comp);
    //     return nums;
    // }

    int main(){
        // vector<int> nums = {3,30,34,5,9};
        vector<string> nums = {"3","30","34","5","9"};
        // nums = largestNumber(nums);
        sort(nums.begin(), nums.end());
        for(string x: nums) cout<<x<<" ";
        cout<<endl;
    }