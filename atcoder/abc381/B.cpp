#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    string T; cin>> T;
    unordered_set<char> set;
    int l = T.size();
    if(l % 2 != 0){
        cout<<"No";
        return;
    }
    T = " " + T;
    for(int i = 1; i <= l/2; i++){
        // cout<<T[i]<<endl;
        if(set.find(T[2 * i - 1]) != set.end() || T[2*i - 1] != T[2*i]){
            cout<<"No";
            return;
        }
        set.insert(T[2 * i - 1]);
    }
    cout<<"Yes";
    return;
}

int main(){
    solve();
}