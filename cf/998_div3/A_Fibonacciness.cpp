#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int counter = 0;
    int mx = INT_MIN;
    a3 = a1 + a2;
    counter++;
    if(a4 == a2 + a3){
        counter++;
    }
    if(a5 == a3 + a4){
        counter++;
    }

    mx = max(mx, counter);

    counter = 0;
    a3 = a4 - a2;
    counter++;
    if(a3 == a1 + a2) counter++;
    if(a5 == a3 + a4) counter++;

    mx = max(mx, counter);

    counter = 0;
    a3 = a5 - a4;
    counter++;
    if(a3 == a1 + a2) counter++;
    if(a4 == a2 + a3) counter++;

    mx = max(mx, counter);

    cout<<mx<<endl;
    return;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}