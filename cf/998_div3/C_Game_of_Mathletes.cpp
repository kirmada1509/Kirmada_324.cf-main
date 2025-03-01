#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
        mp[x]++;
    }
    sort(v.begin(), v.end());

    int score = 0;
    int l = 0, r = n - 1;
    while (mp.size() > 0 && l <= r) {
        cout<<"size: "<<mp.size()<<endl;
        if (mp.find(k - v[r]) != mp.end()) {
            mp[k - v[r]]--;
            if (mp[k - v[r]] <= 0) mp.erase(k - v[r]);
            mp[v[r]]--;
            if (mp[v[r]] <= 0) mp.erase(v[r]);
            r--;
            score++;
        }
        else {
            bool flag = true;
            for (auto it : mp) {
                if (mp.find(k - it.second) == mp.end()) {
                    mp[it.second]--;
                    if (mp[it.second] <= 0) mp.erase(it.second);
                    flag = false;
                    break;
                }
            }
            if(flag){
                mp[v[r]]--;
                if (mp[v[r]] <= 0) mp.erase(v[r]);
                mp[v[l]]--;
                if (mp[v[l]] <= 0) mp.erase(v[l]);
                l++; r--;
            }
        }
    }
    cout << score << endl;
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}

