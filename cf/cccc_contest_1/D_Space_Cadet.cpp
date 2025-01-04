#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

long long count(long long n) {
    return n * (n - 1) / 2;
}

void solve() {
    int n; cin >> n;
    unordered_map<long long, long long> d1, d2;  

    long long x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        d1[x - y]++;
        d2[x + y]++;
    }
    long long result = 0;
    for (const auto& met : d1) {
        if (met.second > 1) {
            result += count(met.second);
        }
    }
    for (const auto& met : d2) {
        if (met.second > 1) {
            result += count(met.second);
        }
    }
    cout << result*2 << endl;
}

int main() {
    int t; cin >> t;
    while (t--)
    solve();
}
