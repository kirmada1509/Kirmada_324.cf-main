#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int l, r; cin >> l >> r;
    if(l == 1 && r == 1)cout<<1<<endl;
    else cout<<r-l<<endl;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}