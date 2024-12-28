#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_desi(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

//#define make(N)

void solve(){
    long long int N; cin >> N;
    int M; cin >> M;
    int a, b;
    vector<int> X = {2, 1, -1, -2, -2, -1, 1, 2};
    vector<int> Y = {1, 2, 2, 1, -1, -2, -2, -1};
    vector<pair<int, int>> pairs(M, {0,0});
    // unordered_map<string, int> map;
    unordered_set<string> set;
    long long int killed = 0;

    for(int i = 0; i < M; i++){
        cin>>a>>b;
        set.insert(to_string(a) + " " + to_string(b));
        pairs[i].first = a;
        pairs[i].second = b;
    }
    for(int i = 0; i < M; i++){
        a = pairs[i].first; b = pairs[i].second;

        for(int j = 0; j < 8; j++){
            // if(a + X[j] < 0 || a + X[j] >= N || b + Y[j] < 0 || b + Y[j] >= N){
            if(a + X[j] <= 0 || a + X[j] > N || b + Y[j] <= 0 || b + Y[j] > N){
                continue;
            }

            if(set.find(to_string(a + X[j]) + " " + to_string(b + Y[j])) == set.end()){
                set.insert((to_string(a + X[j]) + " " + to_string(b + Y[j])));
                killed++;
                // set.insert({make_pair(a + X[j], b + Y[j]), 1});
            }
        }

    }
    unsigned long long int res = (N * N) - killed - M;

    cout<<res;

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();
    return 0;
}