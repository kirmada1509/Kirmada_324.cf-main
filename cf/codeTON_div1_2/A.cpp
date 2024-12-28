#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        // vector<int> v;
        for(int i = 0; i < n; i++){
            // v.push_back(i + (i+1));
            cout<<(i+(i+1))<<" ";
        }
        cout<<endl;
        // for(int i = 0; i < n; i++){
        //     // v.push_back(i + (i+1));
        //     cout<<(i+(i+1)%(i+1))<<" ";
        // }
    }
}

int main(){
    solve();
}