#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n <= m){
        if(n * a < b){
            cout<<n*a<<endl;
        }else{
            cout<<b<<endl;
        }
        return 0;
    }
    else{
        int res = ((n / m) * b) + ((n % m)*a < b ? (n % m)*a : b);
        cout<<(res < n * a ? res : n * a) <<endl;
        return 0;
    }
}