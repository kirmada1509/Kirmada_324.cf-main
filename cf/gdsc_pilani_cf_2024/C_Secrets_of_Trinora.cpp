#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    int n; cin>>n;
    // cout<<n<<endl;
    string s,a,b; cin>>s;
    // cout<<s<<endl;
    a="1"; b="1";
    bool f=1;
    int big=0;
    for (int i =1; i < n;i++){
        // cout<<a<<endl<<b<<endl;
       if(s[i]=='0')
        {
            a+='0'; b+='0';
        }
        else if(s[i]=='1'){
            if(big==0){
                a+='1'; b+='0';
                big=1;
            }
            else if(big==1){
                a+='0'; b+='1';
            }
        }
        else if(s[i]=='2'){
            if (big ==0){
                a+='1'; b+='1';
            }else{
                a+='0'; b+='2';
            }
        }
    }
    cout<<a<<"\n"<<b<<"\n";
}

int main(){
    int t; cin>>t;
    while(t--)
    solve();
}