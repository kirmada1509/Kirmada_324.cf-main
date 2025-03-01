#include<bits/stdc++.h>

int bin_pow(long long a, long long b){
    long long int res = 1;
    while(b > 0){
    if(b & 1) res *= a;
    a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
    cout<<bin_pow(2, 13)<<endl;
}