#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int N; cin>>N;
    string T; cin >> T;
    int l = T.size();
    if(l % 2 == 0){
        cout<<"No";
        return;
    }
    if(T[(l+1)/2 - 1] != '/'){
        // cout<<T[(l+1)/2 - 1]<<" "<<(l+1)/2 - 1<<endl;
        cout<<"No";
        return;
    }
    for(int i = 0; i < (l+1)/2 - 1; i++){
        if(T[i] != '1'){
            cout<<"No";
            return;
        }
    }
    for(int i = (l+1)/2; i < l; i++){
        if(T[i] != '2'){
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
    return;
}

int main(){
    solve();
}