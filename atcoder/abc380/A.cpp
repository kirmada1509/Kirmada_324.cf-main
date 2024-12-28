#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    string s;
    int ones = 0, twos = 0, threes = 0;
    s = to_string(N);
    for(char x: s){
        if(x == '1')ones++;
        else if(x == '2')twos++;
        else if(x == '3')threes++;
    }
    // cout<<ones<<" "<<twos<<" "<<threes<<endl;
    if(ones == 1 && twos == 2 && threes == 3){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}