#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int n; cin >> n;
    vector<int> A; get(A, n);

    for(int i = 0; i < n-1; i++){
        int x = min(A[i] , A[i+1]);
        A[i] -= x;
        A[i+1] -=x;
    }

    for(int i = 1; i < n; i++){
        if(A[i] < A[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}