#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int moves = 0;
void func(int N, int L, int R, int x){
    int p1, p2, l1;
    p1 = abs(R - x);
    p2 = abs(N - abs(R-x));
    if(p1 < p2){
        if(!(abs(L - R) + abs(L-x) == p1)){
            moves += p1;
        }else moves += p2;
    }else{
        if(abs(L - R) + abs(L-x) == p1){
        // if(!((1 <= L && L < R) || (x < L && L <= N))){
            moves += p2;
        }else moves += p1;
    }
}
int main(){
    int N, Q;
    cin>>N>>Q;
    int L = 1, R = 2;
    while (Q--)
    {
        // cout<<"L: "<<L<<", R: "<<R<<", moves: "<<moves<<endl;
        char h; int x;
        cin>>h>>x;
        if(h == 'R'){
            func(N, L, R, x);
            R = x;
        }
        if(h == 'L'){
            func(N, R, L, x);
            L = x;
        }
        // cout<<"p1: "<<p1<<", p2: "<<p2<<", l1: "<<l1<<endl;
    }
    // cout<<"moves: "<<moves<<endl;
    cout<<moves;
}