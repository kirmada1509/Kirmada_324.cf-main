#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    string S; int N;
    cin >> N >> S;
    if(N <=2 ){
        if(S[0] == '/' || S[1] == '1'){
            cout<<1;
            return;
        }
    }
    int max_length = 0;
    for(int i = 1; i < N-1; i++){
        if(S[i] == '/'){
            int left = i - 1;
            int right = i + 1;
            int length = 1;
            while(S[left] == '1' && S[right] == '2'){
                left--; right++;
                length += 2;
            }
            max_length  = max(max_length, length);
        }
    }
    cout<<max_length;
}

int main(){
    solve();
}