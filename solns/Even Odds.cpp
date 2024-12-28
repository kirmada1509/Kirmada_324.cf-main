#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    long long int k;
    cin>>n>>k;

    if(n % 2 == 0){ //n is even
        if(k > n/2){
            cout<<2*(k - n/2)<<endl;
        }else{
            cout<<(2 * k) - 1<<endl;
        }
    }
    if(n % 2 != 0){ // n is odd
        if(k > (n/2)+1){
            cout<<2*(k-((n/2)+1))<<endl;
        }else{
            cout<<(2*(k))-1<<endl;
        }
    }
}