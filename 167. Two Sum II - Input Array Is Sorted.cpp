#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;
    int sum = 0;
    while(l <= r){
        int sum = numbers[l] + numbers[r];
        cout<<"l: "<<l<<" r: "<<r<<" sum: "<<sum<<endl;
        if(sum > target){
            r--;
        }
        if(sum < target){
            l++;
        }
        if(sum == target){
            return {numbers[l], numbers[r]};
        }
    }
    return {};
}

int main(){
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(numbers, target);
}