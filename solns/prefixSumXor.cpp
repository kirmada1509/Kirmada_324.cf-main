#include<bits/stdc++.h>

// int reverseXor(int a, int y){
//     vector<int> bin_a, bin_b, bin_y;
//     int b = 0;
//     while(a / 2 > 0){
//         bin_a.push_back(a % 2);
//         a = a/2;
//     }
//     while(y / 2 > 0){
//         bin_y.push_back(y % 2);
//         y = y/2;
//     }
//     reverse(bin_a.begin(), bin_a.end());
//     reverse(bin_y.begin(), bin_y.end());
//     for(int i = 0; i < max(bin_a.size(), bin_y.size()); i++){
//         bin_b.push_back((bin_a[i] ^ bin_y[i]));
//     }
//     for(int i = 0; i < bin_b.size(); i++){
//         if(bin_b[i]){
//             b += pow(2, i);
//         }
//     }
//     return b;
// }

vector<int> findArray(vector<int>& pref) {
    int size = pref.size();
    if(size == 1){
        return pref;
    }
    vector<int> arr(1);
    arr[0] = pref[0];
    arr[1] = pref[1] ^ arr[0];
    for(int i = 2; i < size; i++){
        arr[i] = pref[i-1] ^ pref[i];
    }
    return arr;
}

int main(){
    vector<int> pref = {5,2,0,3,1};
    vector<int> arr = findArray(pref);
    for(int i = 0; i < pref.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
