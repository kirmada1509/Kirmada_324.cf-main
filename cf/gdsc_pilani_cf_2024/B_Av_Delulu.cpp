#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    vector<string> v(4);
    for(string &s: v){
        cin>>s;
    }

    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <=2 ; j++){
            int a=0,b=0;
            if(v[i][j]=='#')a++; else b++;
            if(v[i][j+1]=='#')a++; else b++;
            if(v[i+1][j]=='#')a++; else b++;
            if(v[i+1][j+1]=='#')a++; else b++;
            if(a>=3 || b>=3){
                cout<<"YES";
                 return;
            } 
        }
    }
cout<<"NO";
}

int main(){
    solve();
}