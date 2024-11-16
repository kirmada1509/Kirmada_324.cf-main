#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    K = K - 1;
    string S; cin >> S;
    // unordered_map<int, int> map;
    vector<int> indexes;
    if(S[0] == '1')indexes.push_back(0);
    for(int i = 1; i < N; i++){
        if(S[i-1] == '0' && S[i] == '1'){
            // map.insert()
            indexes.push_back(i);
        }
    }
    int l1 = 0, l2 = 0;
    for(int i = indexes[K-1]; i < N; i++){
        if(S[i] == '1')l1++;
        else break;
    }
    for(int i = indexes[K]; i < N; i++){
        if(S[i] == '1')l2++;
        else break;
    }
    for(int i = indexes[K]; i < indexes[K] + l2; i++){
        S[i] = '0';
    }
    for(int i = indexes[K-1] + l1; i < indexes[K-1] + l1 + l2; i++){
        S[i] = '1';
    }
    cout<<S;
}

// int main(){
//     int N, K; cin >> N  >> K;
//     string S; cin >> S;


// }