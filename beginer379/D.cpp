#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> map;
    long long int Q;cin>>Q;
    while(Q--){
        long long int query;cin>>query;
        if(query == 1){
            map[0]++;
        }
        else if(query == 2){
            long long int T; cin>>T;
            for(auto it: map){
                map[it.first + T] += it.second;
                map.erase(it.first);
            }
        }else if(query == 3){
            long long int H; cin>>H;
            for(auto it: map){
                int harvested = 0;
                if(it.first >= H){
                    harvested += it.second;
                    map.erase(it.first);
                }
                cout<<harvested<<endl;
            }
        }
    // cout<<"Q: "<<Q<<endl;
    // for(auto it: map)cout<<it.first<<": "<<it.second<<endl;
    // cout<<endl;
    }
}