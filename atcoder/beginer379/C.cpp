#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N, M;
    cin>>N>>M;
    vector<long long int> cells(N, 0);
    vector<long long int> X(M, 0);
    vector<long long int> A(M, 0);
    for(long long int i = 0; i < M; i++){
        cin>>X[i];
    }
    long long int initial_stones = 0;
    for(long long int i = 0; i < M; i++){
        cin>>A[i];
        cells[X[i]-1] = A[i];
        initial_stones += A[i];
        if(X[i]-1 > initial_stones){
            cout<<-1;
            return 0;
        }
    }
    long long int count = 0;
    for(long long int i = 0; i < N-1; i++){
        // cout<<"i: "<<i<<" "<<cells[i]<<endl;
        if(cells[i] > 1){
            count += cells[i]-1;
            cells[i+1] += cells[i] - 1;
            cells[i] = 1;
        }
        else if(cells[i] <= 0){
            cout<<-1;
            return 0;
        }
    }

    if(cells[N-1] == 1)cout<<count;
    else cout<<-1;
    return 0;
}