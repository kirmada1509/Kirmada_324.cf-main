#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> B;
    unordered_map<int, int> map;
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        if(map.find(x) != map.end()){
            B.push_back(map[x]);
        }else{
            B.push_back(-1);
        }
        cout<<B[i]<<" ";
        map[x] = i + 1;
    }
    // cout<<endl;
    return 0;
}