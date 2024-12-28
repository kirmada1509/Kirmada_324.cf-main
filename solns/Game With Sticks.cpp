#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    bool winner = true; //true -> Akshat
    while(n != 0 && m != 0){
        n--;
        m--;
        winner = !winner;
    }
    if(winner){
        cout<<"Malvika"<<endl;
    }else{
        cout<<"Akshat"<<endl;
    }
}