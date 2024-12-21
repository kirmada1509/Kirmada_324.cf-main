#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int T; 
    cin >>T;
    // T = 1;
    while(T--){
        int N; cin >> N;
        vector<int> A;
        get(A, N);
        int found = 1;
        while (found > 0){
            found = 0;
            for(int i = 1; i < N-1; i++){
                // cout<<A[i-1] + A[i+1]<<endl;
                // print(A);
                if(A[i-1] + A[i+1] == 4){
                    // cout<<"entering"<<endl;
                    if(4 - A[i] < A[i]) {
                        // cout<<"Changed: "<<i<<endl;
                        A[i] = 4 - A[i];
                        found++;

                    }
                }
            }
        }
        cout<<accumulate(A.begin(), A.end(), 0);
    }
}

int main(){
    solve();
}