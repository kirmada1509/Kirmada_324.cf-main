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

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){

}

int main(){
    solve();
}