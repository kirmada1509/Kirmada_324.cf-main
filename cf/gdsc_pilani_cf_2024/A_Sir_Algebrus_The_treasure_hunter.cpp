#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    // if(a==1 && b==1 && c==1){
    //     cout<<3;
    //     return;
    // }
    // if(a != 1 && b != 1 && c != 1){
    //     cout<<a * b * c;
    // }else{
    //     int x = max({a,b,c});
    //     int y= min({a,b,c});
    //     int z= a+b+c-x-y;

    //     cout<<(y+z) * x;
    // }
cout<<max({
    a + b + c,
    (a * b) + c,
    a * b * c,
    a * (b + c),
    a + (b + c),
    (a + b) + c,
    (a + b) * c,
    a + (b * c),
});
}

int main(){
    solve();
}