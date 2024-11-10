#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, Q;
    cin>>N>>Q;
    char H; int T;
    int moves = 0;
    int L = 1, R = 2;
    int count = 0;
    while(Q--){
        cin>>H>>T;
        if(H == 'R'){
            if(abs(R-T) < abs(N+R-T)){
                if((L < R) || (L > T)){
                    moves += abs(T-R);
                    count = abs(T-R);
                }
                else{
                    moves += abs(N+R-T);
                    count = abs(N+R-T);
                }
            }else{
                moves += abs(N+R-T);
                count = abs(N+R-T);
            }
            R = T;
        }
        else{
            if(abs(L-T) < abs(N+L-T)){
                if((R>L && )){
                    moves += abs(T-R);
                    count = abs(T-R);
                }
            }else{
                moves += abs(N+L-T);
                count = abs(N+L-T);
            }
            L = T;
        }
        cout<<count<<" L:"<<L<<" R: "<<R<<endl;
    }
    cout<<"final: "<<moves;
}