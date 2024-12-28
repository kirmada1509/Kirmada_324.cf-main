#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int n,k,d; cin>>n>>k>>d;
    if ((n-1)*k < d) {
        cout<<"NO"; return;
    }
    if(d <= n-1){
        cout<<"YES"<<endl<<d+1; return;
    }
    int p=d/(k-1); 
    if(n-1 < p) {
          cout<<"NO"; return;
    }
    vector <int> ans;
    while (d && k){
        // cout<<"d:"<<d<<endl;
        if(k==1){
            int e=ans[ans.size()-1];
            if( e== 1){
                ans.push_back(d+1);
            }
            else{
                ans.push_back( e- (d+1));
            }
            break;
        }
        if(k!=0 && d-p > 0 ){
            d-=p;
            ans.push_back(p+1);
            k--;
        }
        if(k!=0 && d-p > 0){
            d-=p;
            ans.push_back(1);
            k--;
        }
    }
    cout<<"YES"<<endl;
    for(int i : ans)cout <<i<<" ";
}

int_fast32_t main(){
    solve();
}