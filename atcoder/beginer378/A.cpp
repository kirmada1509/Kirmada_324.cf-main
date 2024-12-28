#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    unordered_map<int, int> map;
    int count = 0;
    for(int i = 0; i < 4; i++){
        int j;
        cin>>j;
        v.push_back(j);
        map[j]++;
    }
    for(auto x: map){
        count += x.second / 2;
    }
    cout<<count;
    return 0;
}