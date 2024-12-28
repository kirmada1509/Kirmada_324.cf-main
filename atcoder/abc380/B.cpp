#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    // vector<int> A;
    int count = 0;
    for(int i = 1; i < S.size(); i++){
        char x = S[i];
        if(x == '|'){
            cout<<count<<" ";
            // A.push_back(count);
            count = 0;
        }
        if(x == '-')count++;
    }
}