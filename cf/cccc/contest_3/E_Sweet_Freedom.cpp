#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(long long int i = 0; i < N; i++){long long int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](long long int a, long long int b){return a > b;})
#define prlong long int(A) {for(long long int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    long long int n, d; cin >> n >> d;
    vector<pair<long long int, long long int> > v;
    for(long long int i = 0; i < n; i++){
        long long int a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin() ,v.end());
    long long int mx = v[0].second, sum = v[0].second;
    for(long long int i = 1; i < n; i++){
        if((v[i].first - v[i-1].first) < d){
            sum += v[i].second;
            mx = max(mx, sum);
        }else{
            sum = v[i].second;
            mx = max(mx, sum);
        }
    }
    cout<<mx<<endl;
}

int main(){
    solve();
}