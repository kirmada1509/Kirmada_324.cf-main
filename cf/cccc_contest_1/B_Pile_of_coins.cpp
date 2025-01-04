#include<iostream>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve() {
    int x, y; cin >> x >> y;
    int coins = 0;

    while (y > 0) {
        if (y % x == 0) {
            int p = log10(y / x);
            coins += 1;
            y -= x * pow(10, p);
        } else {
            coins += y % x;
            y -= y % x;
        }
    }

    cout<<coins<<endl;
}

int main() {
    int t; cin >> t;
    
    while (t--) 
    solve();
}
