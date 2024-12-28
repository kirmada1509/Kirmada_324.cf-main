#include <bits/stdc++.h>


int main(){
    
    vector<int> v = {2,3,4,};
    reverse(v.begin(), v.end());

    for(int x: v){
        cout<<x<<endl;
    }
    cout<<v[100]<<endl;
}