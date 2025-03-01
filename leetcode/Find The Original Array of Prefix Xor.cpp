#include<bits/stdc++.h>

int reverseXor(int a, int y){
    vector<int> bin_a, bin_b, bin_y;
    int b = 0;
    while(a / 2 > 0){
        bin_a.push_back(a % 2);
        a = a/2;
    }
    while(y / 2 > 0){
        bin_y.push_back(y % 2);
        y = y/2;
    }
    reverse(bin_a.begin(), bin_a.end());
    reverse(bin_y.begin(), bin_y.end());
    for(int i = 0; i < max(bin_a.size(), bin_y.size()); i++){
        bin_b.push_back(bin_a[i] ^ bin_y[i]);
    }
    for(int i = 0; i < bin_b.size(); i++){
        if(bin_b[i]){
            b += pow(2, i);
        }
    }
    return b;
}
vector<int> findArray(vector<int>& pref) {
    if(pref.size() == 1){
        return pref;
    }
    vector<int> arr(pref.size(), 0);
    for(int i = 1; i < pref.size(); i++){
        arr[i] = reverseXor(pref[i], pref[i-1]); 
    }
    return pref;
}

int main(){
    vector<int> pref = {5,2,0,3,1};
    vector<int> arr = findArray(pref);
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}