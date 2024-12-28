#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

int main(){
    int N; cin>>N;
    deque<int> A, B;
    get(A, N);
    get(B, N-1);
    B.push_back(INT_MIN);

    sort_des(A);
    sort_des(B);
    

    bool flag = false;
    int required = 0;
    for(int i = 0; i < N; i++){
        if(A[0] <= B[0]){
            A.pop_front();
            B.pop_front();
        }else{
            if(flag == true){
                cout<<-1;
                return 0;
            }
            flag = true;
            required = A[0];
            A.pop_front();
        }
    }
    cout<<required;
}