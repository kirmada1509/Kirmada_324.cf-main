#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string B = "BBB";
    if(s == B){
        cout<<"No";
        return 0;
    }
    vector<int> v(127,0);
    for(char x: s){
        v[int(x)]++;
    }
    s = "ABC";
    for(char x: s){
        // cout<<x<<endl;
        if(v[int(x)] == 1) {
            continue;
        }
        else{
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}