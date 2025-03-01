#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> N, M;
    get(N, n);
    get(M, m);
    int max_p = INT_MIN, min_p = INT_MAX;
    for(int i = 0; i < m; i++){
        int yi = M[i];
        int p = N[0] | yi;
        for(int j = 1; j < n; j++){
            p = p ^ (N[j] | yi);
        }
        max_p = max(p, max_p);
        min_p = min(p, min_p);
    }
    cout<<min_p<<" "<<max_p<<endl;
}

int main(){
    int t; cin >>t;
    while(t--)
    solve();
}