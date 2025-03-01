#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int n, m; cin >> n >> m;
    deque<int> N, M;
    int sum = 0;
    get(N, n);
    get(M, m);

    sort_ass(N);
    sort_ass(M);

    while(N.size() > 0 && M.size() > 0){
        deque<int> *top, *bottom;
        if((*(N.end() - 1) - *N.begin())>
            (*(M.end() - 1) - *M.begin())
            && N.size() > M.size()
        ){
            // cout<<"N end : "<<*(N.end() - 1)<<" begin: "<<*N.begin()<<endl;
            sum += (*(N.end() - 1)- *N.begin());
            M.erase(M.begin() + M.size()/2);
            N.pop_front(); N.pop_back();
        }else{
            // cout<<"M end : "<<*(M.end() - 1)<<" begin: "<<*M.begin()<<endl;
            sum += (*(M.end() - 1)- *M.begin());
            N.erase(N.begin() + N.size()/2);
            M.pop_front(); M.pop_back();
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}