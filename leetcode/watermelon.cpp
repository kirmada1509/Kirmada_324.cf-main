#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n == 1 || n == 2){
        cout<<"NO"<<endl;
    }else{
        if((n-2)%2 == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}