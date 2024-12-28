#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int, vector<int>>N;
    unordered_map<int, int> Q;
    // unordered_map<int, deque<int>> Q;
    int a, b;
    cin>>a;
    for(int i = 0; i < a; i++){
        int q, r;
        cin>>q;
        cin>>r;
        N[i].push_back(q);
        N[i].push_back(r);
    }
    cin>>b;
    for(int i = 0; i < b; i++){
        int t, d;
        cin>>t;
        cin>>d;
        if(d % N[t-1][0] != N[t-1][1]){
            if(d % N[t-1][0] > N[t-1][1]){
                d += (N[t-1][0] - (d % N[t-1][0])) + N[t-1][1];
            }else{
                d += N[t-1][1] - (d % N[t-1][0]);
            }
        }
        cout<<d<<endl;
    }
    return 0;
}