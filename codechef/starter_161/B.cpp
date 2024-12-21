#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int N, M, T;
    cin>>T;
    while(T--){
        int sad = 0;
        vector<int> A, B;
        cin>>N>>M;
        get(A, N);
        get(B, M);
        for(int i = 0; i < M; i++){
            cout<<"searching for: "<<B[i]<<endl;
            if(A[B[i]-1] <= 0)sad++;
            else A[B[i]]--;
        }
        cout<<sad<<endl;
    }
}

int main(){
    solve();
}