#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    string s; cin >> s;
    vector<int> v('z');
    for(int i = 0; i < s.size(); i++){
        v[i]++;
        if(v[i] > 1){
            cout<<"NO"<<endl;
            return;
        }
    }
    int l = 0, r = s.size()-1;
    int mx = max(s[l], s[r]);
    while(l < r){
        if(s[l] > s[r]){
            l++;
            mx--;
        }else{
            r--;
            mx--;
        }
        if(max(s[l], s[r]) != mx){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(s[l] == 'a')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}