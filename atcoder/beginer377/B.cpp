#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string empty = "........";
    vector<string> s;
    vector<string>s2;
    for(int i = 0; i < 8; i++){
        string in;
        cin>>in;
        s.push_back(in);
    }
    for(int i = 0; i < 8; i++){
        string temp = "";
        for(int j = 0; j < 8; j++){
            temp += s[j][i];
        }
        s2.push_back(temp);
    }
    int empty_rows = 0;
    int empty_cols = 0;
    for(int i = 0; i < 8; i++){
        if(s[i] == empty){
            empty_rows++;
        }
        if(s2[i] == empty){
            empty_cols++;
        }
    }
    cout<<empty_rows * empty_cols;
    return 0;
}