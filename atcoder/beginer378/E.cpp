#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, M;
    cin>>N;
    cin>>M;
    vector<int> v(N);
    int pf = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        pf += x;
        v[i] = pf; 
    }
    int res = 0;
    for(int  l = 0; l < N; l++){
        for(int r = l; r < N; r++){
            int subarraySum;
            if (l == 0) {
                subarraySum = v[r];  
            } else {
                subarraySum = v[r] - v[l - 1];  
            }
            res += (subarraySum % M + M) % M;
        }
    }
    cout<<res<<endl;
    return 0;
}