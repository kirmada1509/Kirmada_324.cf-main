#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    string s = to_string(N);
    cout<<s[1]<<s[2]<<s[0]<<" "<<s[2]<<s[0]<<s[1];
    return 0;
}