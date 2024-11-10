#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N, Q;
    cin>>N>>Q;
    vector<long long int> H(N);
    for(int i = 0; i < N; i++){
        cin>>H[i];
    }
    for(int i = 0; i < Q; i++){
        long long int l, r;
        cin>>l>>r;
        bool stop = false;
        for(int j = r+1; j < N && !stop; j++){
            if(H[j] > H[l] && H[j] > H[r]){
                cout<<j - r;
                stop = true;
            }
        }
    }
    cout<<endl;
}