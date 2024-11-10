#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin>>N>>K;
    string s;
    cin>>s;
    int count = 0;
    int berry = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'O'){
            count++;
            if(count == K) {
                count = 0;
                berry++;
            }
        }else{
            count = 0;
        }
    }
    cout<<berry;
}