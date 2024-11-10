#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, C;
    cin>>N>>C;
    int prev = -1000;
    int curr, count = 0;
    for(int i = 0; i < N; i++){
        cin>>curr;
        // cout<<curr-prev<<endl;
        if(curr - prev >= C){
            count++;
            prev = curr;
        }
    }
    // cout<<"ans: "<<count<<endl;
    cout<<count<<endl;
}